#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#define BUF_SIZE 16

// 不要手抄代码，完整代码在这里：
// https://gitee.com/lcofjp/ref-code/blob/master/c/digital-clock.c

char digits[][7] = {
    {0x0E, 0x11, 0x13, 0x15, 0x19, 0x11, 0x0E}, // 0
    {0x04, 0x0C, 0x04, 0x04, 0x04, 0x04, 0x0E}, // 1
    {0x0E, 0x11, 0x01, 0x02, 0x04, 0x08, 0x1f}, // 2
    {0x1f, 0x02, 0x04, 0x02, 0x01, 0x11, 0x0E}, // 3
    {0x02, 0x06, 0x0A, 0x12, 0x1F, 0x02, 0x02}, // 4
    {0x1f, 0x10, 0x1E, 0x01, 0x01, 0x11, 0x0E}, // 5
    {0x06, 0x08, 0x10, 0x1E, 0x11, 0x11, 0x0E}, // 6
    {0x1f, 0x01, 0x02, 0x04, 0x08, 0x08, 0x08}, // 7
    {0x0E, 0x11, 0x11, 0x0E, 0x11, 0x11, 0x0E}, // 8
    {0x0E, 0x11, 0x11, 0x0f, 0x01, 0x02, 0x0C}, // 9
    {0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00}  // :
};
int heart_pattern[] = {
    0x0C6, 0x1EF, 0x1FF, 0x1FF, 0x0FE, 0x07C, 0x038, 0x010
};

wchar_t *mapDot(int c, int nbit) {
    static wchar_t buf[BUF_SIZE];
    for(int i=0; i<nbit; i++) {
        if (c & (1<<(nbit - 1 - i))) {
            buf[i] = L'■';
        } else {
            buf[i] = L'　'; // 注意，这是一个全角空格
        }
    }
    buf[nbit] = 0;
    return buf;
}

void draw_heart(HANDLE h, COORD coord) {
    for(int i=0; i<sizeof(heart_pattern)/sizeof(heart_pattern[0]); i++)
    {
        SetConsoleCursorPosition(h, coord);
        WriteConsoleW(h, mapDot(heart_pattern[i], 9), 9, NULL, NULL);
        coord.Y++;
    }
}

void display_digit(HANDLE h, COORD coord, char c) {
    char* dig;
    if (c >= '0' && c <= '9') dig = digits[c - '0'];
    else dig = digits[10];

    for(int i=0; i<7; i++) {
        char p = dig[i];
        SetConsoleCursorPosition(h, coord);
        WriteConsoleW(h, mapDot(p, 5), 5, NULL, NULL);
        coord.Y++;
    }
}
void display_time(HANDLE h, COORD coord, char* t)
{
    static char buf[BUF_SIZE] = {0};
    char *b = buf;
    while(*t) {
        if (*b != *t) {
            display_digit(h, coord, *t);
        }
        coord.X += 12;
        b++;
        t++;
    }
    strncpy(buf, t, BUF_SIZE);
}

int main()
{
    char buffer[BUF_SIZE];
    SYSTEMTIME t;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTitle(TEXT("digital-clock"));     // 设置窗口标题
    CONSOLE_CURSOR_INFO cursorInfo = {1, FALSE};
    SetConsoleCursorInfo(h, &cursorInfo);       // 设置不显示光标

    SetConsoleTextAttribute(h, 0x0C);   // 淡红色字体
    draw_heart(h, (COORD){51, 17});     // 画爱心
    SetConsoleTextAttribute(h, 0x0F);   // 黑底白字

    for(;;) {
        GetLocalTime(&t);   // 获取本地时间
        snprintf(buffer, BUF_SIZE, "%02d:%02d:%02d", t.wHour, t.wMinute, t.wSecond);
        display_time(h, (COORD){13, 5}, buffer);
        Sleep(100);
    }
    CloseHandle(h);
    return 0;
}
