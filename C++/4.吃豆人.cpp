#include <stdio.h>
#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>      
#include <stdlib.h>         
#include <string.h>
 
using namespace std;
 
const int n = 809;
 
struct Point {
	int x, y;
};
 
int dali;
 
int fx[4] = {-1, 27, 1, -27};
int fxfx[4][2] = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};
int dis[1000][1000]; //0:墙 1:有分的路 2:没分的路 3:怪物的家 
int changdi[30][27] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1 ,0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 2, 0, 2, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 2, 0, 2, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 3, 3, 3, 3, 3, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 0, 3, 3, 3, 3, 3, 0, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 3, 3, 3, 3, 3, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0},
    {0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};
 
int x, x1, x2, x3, x4, y, y1, y2, y3, y4;
int now, now1, now2, now3, now4;
int g1, g2, g3, g4;
int fangx, nextfx, last1, last2, last3, last4;
int fenshu, guozi, guaitimer;
int T1, T2, t1, t2, stopped; //T:计时 t1:玩家速度 t2:怪物速度 
int f; //f:{0:继续 1:被吃 2:赢了 3:输了}
int beichi;
 
void color (int a) {//颜色函数
	SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), a);
}
 
void gotoxy(int x, int y) {//位置函数(行为x 列为y)
	COORD pos;
	pos.X=2*y;
	pos.Y=x;
	SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE),pos);
}
 
void begin () {
    system ("cls");
    color (11); 
	printf ("       ★"); 
	color (10); 
	printf ("吃豆人"); 
	color (11); 
	printf ("★\n\n"); 
	color(7);
    printf ("  正在初始化，请耐心等待"); 
    for (int i = 0; i <= n; i++) {
    	for (int j = 1; j <= n; j++) {
    		dis[i][j] = 900;
		}
	}  
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= 3; j++) {
            if (i + fx[j] >= 0 && i + fx[j] <= n) {
                int k = i + fx[j], xx = k/27, yy = k % 27, kk;
                if (changdi[i / 27][i % 27] && changdi[xx][yy]) {
                	dis[i][k] = kk = 1;
				}
            }
        }
    }
    for (int k = 0; k <= n; k++) {
    	if (changdi[k]) {
			for (int i = 0; i <= n; i++) {
				if (changdi[i]) {
					for (int j = 0; j <= n; j++) {
						if (changdi[j]) {
							if (dis[i][j] > dis[i][k] + dis[k][j]) {
								dis[i][j] = dis[i][k] + dis[k][j];
							}
						}
					}
				}
			}
            if (k % 80 == 0) {	
				color (13); 
				gotoxy (3, 12); 
				printf("│");
			} else if (k % 80 == 20) {
					color (13); 
					gotoxy (3, 12); 
					printf ("╱");
			} else if (k % 80 == 40) {
				color (13); 
				gotoxy (3, 12); 
				printf ("─");
			} else if (k % 80 == 60) {
				color(13); 
				gotoxy (3, 12); 
				printf ("╲");
			}
    		if (k % 60==0) {
				color (11); 
				gotoxy (5, k / 60); 
				printf("●");
			}
		}
    }
}
 
void shuru () {
    char ch = getch ();
    if (ch == 75) {
    	if (changdi[x + fxfx[0][0]][y + fxfx[0][1]] == 1 | changdi[x + fxfx[0][0]][y + fxfx[0][1]] == 2) {
    		fangx = nextfx = 0;
		} else {
			nextfx = 0;
		}
	} else if (ch == 80) {
		if (changdi[x + fxfx[1][0]][y + fxfx[1][1]] == 1 | changdi[x + fxfx[1][0]][y + fxfx[1][1]] == 2) {
			fangx = nextfx = 1;
		} else {
			nextfx = 1;
		} 
	} else if (ch == 77) {
		if (changdi[x + fxfx[2][0]][y + fxfx[2][1]] == 1 | changdi[x + fxfx[2][0]][y + fxfx[2][1]] == 2) {
			fangx = nextfx = 2;
		} else {
			nextfx = 2;
		}
	} else if (ch == 72) {
		if (changdi[x + fxfx[3][0]][y + fxfx[3][1]] == 1 | changdi[x + fxfx[3][0]][y + fxfx[3][1]] == 2) {
			fangx = nextfx = 3;
		} else {
			nextfx = 3;
		}
	} else if (ch == ' ') {
		stopped = (stopped + 1) % 2;
	} else if (ch == '-') {
		t1++;
	} else if ((ch == '+') && t1 - 1 > 0) {
    	t1--;
	}  
    else if (ch == '$') {
    	dali = (dali + 1) % 2;
	}
}
 
void reset () {
    system ("cls"); 
	color (7);
    x = 22; 
	y = 13; 
    x1 = x2 = x3 = x4 = 14; 
	y1 = 11; 
	y2 = 12; 
	y3 = 14; 
	y4 = 15;
    now = 607; 
	now1 = 389; 
	now2 = 390; 
	now3 = 392; 
	now4 = 393;
    for (int k = 0; k <= n; k++) {
        int i = k / 27, j = k % 27;
        gotoxy (i, j);
        if (changdi[i][j] == 1) {	
			color (7); 
			printf("·");
		} else if (!changdi[i][j]) {
			color (1); 
			printf ("■");
		}
        if (j==26) {
			gotoxy (i, 27); 
			color (7); 
			printf ("%d", i);
		}
    }
    gotoxy (0, 0);
    gotoxy (x, y); 
	color (14); 
	printf ("●");
    gotoxy (x1, y1); 
	color (4); 
	printf ("◆");
    gotoxy (x2, y2); 
	color (5); 
	printf ("◆");
    gotoxy (x3, y3); 
	color (3); 
	printf ("◆");
    gotoxy (x4, y4); 
	color (2); 
	printf ("◆");
    fangx = 0; 
	T1 = T2 = guaitimer = 0; 
	t1 = 75; 
	t2 = 100;
	stopped = 0; 
	fenshu = 0; 
	guozi = 237; 
	g1 = g2 = g3 = g4 = 0; 
	dali = 0;
    gotoxy (14, 30); 
	printf ("  ");
}
 
void move1 () {
    int xx, yy;
    xx = x + fxfx[nextfx][0]; 
	yy = y + fxfx[nextfx][1];
    if (changdi[xx][yy]) {
        if (changdi[xx][yy] == 1) {
			fenshu++; 
			changdi[xx][yy] = 2;
		}
        color (14);
        gotoxy (x, y); 
		printf ("  ");
        gotoxy (xx, yy); 
		if (!dali) {
			printf ("♀");
		} else {
			printf ("☆");
		}
        now = x * 27 + y; 
		x = xx; 
		y = yy;
        fangx = nextfx;
    } else {
        if (x == 13 && y == 0 && fangx == 0) {
			xx = x; 
			yy = 26;
		} else if (x == 13 && y == 26 && fangx == 2) {
			xx = x; 
			yy = 0;
		} else {
			xx = x + fxfx[fangx][0]; 
			yy = y + fxfx[fangx][1];
		}
        if (changdi[xx][yy]) {
            if (changdi[xx][yy] == 1) {
				fenshu++; 
				changdi[xx][yy] = 2;
			}
            color (14);
            gotoxy (x, y); 
			printf ("  ");
            gotoxy (xx, yy); 
			if (!dali) {
				printf ("♀");
			} else {
				printf ("☆");
			}
            now = x * 27 + y; 
			x = xx; 
			y = yy;
        }
    }
    color (7);
}
 
void move2 () {
    int haha, minhaha, xx, yy, chi = 0;
    if (g1) {
        minhaha = 2147483647; //相当于INT_MAX 
        if (now1 % 27 == 0 | now1 % 27 == 26) {
        	haha = last1;
		} else if (!dali) {
            for (int i = 0; i <= 3; i++) {
            	if (changdi[(now1 + fx[i]) / 27][(now1 + fx[i]) % 27] && i != last1 && 
				minhaha > dis[now1 + fx[i]][now]) {
					minhaha = dis[now1 + fx[i]][now]; 
					haha = i;
				}
			}
        } else {
            minhaha = -minhaha;
            for (int i = 0; i <= 3; i++) {
            	if (changdi[(now1 + fx[i]) / 27][(now1 + fx[i]) % 27] && i != last1 && 
				minhaha < dis[now1 + fx[i]][now]) {
					minhaha = dis[now1 + fx[i]][now]; 
					haha = i;
				} 
			}
        }
        xx = now1 / 27; 
		yy = now1 % 27; 
		gotoxy (xx, yy); 
        if (changdi[xx][yy] == 1)  {
        	printf ("·");
		} else {
			printf ("  "); 
		}
        now1 += fx[haha]; 
		last1 = (haha + 2) % 4;
        xx = now1 / 27; 
		yy = now1 % 27; 
		gotoxy (xx, yy); 
		color (4); 
		printf ("◆"); 
		color (7);
        if (xx == x && yy == y) {
            if (!dali) {
            	chi++;
			} else {
                guozi += 50;
                fenshu += 50;
                last1 = 0;
                gotoxy (now1 / 27, now1 % 27); 
                if (changdi[now1 / 27][now1 % 27] == 1) {
                	printf ("·");
				} else {
					printf ("  ");
				}
                now1 = 389;
            }
        }
    }
    if (g2) {
        int k;
        minhaha = 2147483647;
        if (fangx == 0 | fangx == 2) {
            k = y + (fxfx[fangx][1]) * 3;
            while (k > 25 | !changdi[x][k]) {
            	k--;	
			}
            while (k < 1 | !changdi[x][k]) {
            	k++;
			}
        } else {
            k = x + (fxfx[fangx][0]) * 3;
            while (k > 28 | !changdi[k][y]) {
            	k--;
			}
            while (k < 1 | !changdi[k][y]) {
            	k++; 	
			}
        } 
        if (fangx == 0 | fangx == 2) {
        	k += x * 27;
		} else {
			k = k * 27 + y;
		}
        if (now2 % 27 == 0 | now2 % 27 == 26)  {
        	haha = last2;
		}
        else if (!dali) {
        	for (int i = 0; i <= 3; i++) {
                if (changdi[(now2 + fx[i]) / 27][(now2 + fx[i]) % 27] && i != last2 && 
				minhaha > dis[now2 + fx[i]][k]) {
					minhaha = dis[now2 + fx[i]][k]; 
					haha = i;
				}
            }   
		} else {
            minhaha = -minhaha;
            for (int i = 0; i <= 3; i++) { 
                if (changdi[(now2 + fx[i]) / 27][(now2 + fx[i]) % 27] && i != last2 && 
				minhaha < dis[now2 + fx[i]][k]) {
					minhaha = dis[now2 + fx[i]][k]; 
					haha = i;
				}
            }   
        }
        xx = now2 / 27; 
		yy = now2 % 27; 
		gotoxy (xx, yy); 
        if (changdi[xx][yy] == 1) {
        	printf ("·");
		} else {
			printf ("  "); 
		}
        now2 += fx[haha]; 
		last2 = (haha + 2) % 4; 
		gotoxy (18, 30);
        xx = now2 / 27; 
		yy = now2 % 27; 
		gotoxy (xx, yy); 
		color (5); 
		printf ("◆"); 
		color (7);
        if (xx == x && yy == y) {
            if (!dali) {
            	chi++;
			} else {
                guozi += 50;
                fenshu += 50;
                last2 = 0;
                gotoxy (now2 / 27, now2 % 27); 
                if (changdi[now2 / 27][now2 % 27] == 1) {
                	printf ("·");
				} else {
					printf ("  ");
				}
                now2 = 390;
            }
        }
    }
    if (g3) {
        int k;
        minhaha = 2147483647;
        if (fangx == 0 | fangx == 2) {
            k = y + (fxfx[(fangx + 1) % 4][1]) * 3;
            while (k > 25 | !changdi[x][k]) {
            	k--;	
			}
            while (k < 1 | !changdi[x][k]) {
            	k++;
			}
        } else {
            k = x + (fxfx[(fangx + 1) % 4][0]) * 3;
            while (k > 28 | !changdi[k][y]) {
            	k--;	
			}
            while (k < 1 | !changdi[k][y]) {
            	k++;
			} 
        } 
        if (fangx == 0 | fangx == 2) {
        	k += x * 27;
		} else {
			k = k * 27 + y;
		}
        if (now3 % 27 == 0 | now3 % 27 == 26) {
        	haha = last3;
		} else if (!dali) {
			for (int i = 0; i <= 3; i++) {
				if (changdi[(now3 + fx[i]) / 27][(now3 + fx[i]) % 27] && i != last3 &&
				minhaha > dis[now3 + fx[i]][k]) {
					minhaha = dis[now3 + fx[i]][k]; 
					haha = i;
				}
			}
		} else {
            minhaha = -minhaha;
            for (int i = 0; i <= 3; i++) {
                if (changdi[(now3 + fx[i]) / 27][(now3 + fx[i]) % 27] && i != last3 && 
				minhaha < dis[now3 + fx[i]][k]) {
					minhaha = dis[now3 + fx[i]][k]; 
					haha = i;
				}
            }   
        }   
        xx = now3 / 27; 
		yy = now3 % 27; 
		gotoxy (xx, yy); 
        if (changdi[xx][yy] == 1) {
        	printf ("·");
		} else {
			printf ("  ");
		} 
        now3 += fx[haha]; 
		last3 = (haha + 2) % 4; 
		gotoxy (18, 30);
        xx = now3 / 27; 
		yy = now3 % 27;         
        gotoxy (xx, yy); 
		color (3); 
		printf ("◆"); 
		color (7);
        if (xx == x && yy == y) {
            if (!dali) {
				chi++;            	
			} else {
                guozi += 50;
                fenshu += 50;
                last3 = 0;
                gotoxy (now3 / 27, now3 % 27); 
                if (changdi[now3 / 27][now3 % 27] == 1) {
                	printf ("·");
				} else {
					printf ("  ");	
				}
                now3 = 341;
            }
        }
    }
    if (chi) {
    	beichi++;
	}
}
 
int main () {
	MessageBox (NULL, "欢迎来到吃豆人游戏！", "温馨提示", MB_OK);
    begin ();
    int jixu = 1;
    reset ();
    string bb[4] = {"●", "①", "②" ,"③"}; 
	color (7);
    gotoxy (12, 12); 
	printf ("倒计时"); 
	color (12);
    for (int i = 3; i >= 0; i--) {
		if (i==0) {
			color (11);	
		}
		gotoxy (13, 13); 
		cout << bb[i]; 
		Sleep (1000);
	}
    gotoxy (12, 12); 
	printf ("      "); 
	gotoxy (13, 13); 
	printf (" "); 
    while (!f) {
        Sleep (1);
        gotoxy (7, 30); 
		color (3);
		printf ("得分：%d   ", fenshu);
        gotoxy (3, 30); 
		printf ("怪物速度：%d   ", 300 - t2);
        gotoxy (5, 30); 
		printf ("你的速度：%d   ", 300 - t1);
        gotoxy (9, 30); 
		printf ("被吃次数：%d ", beichi);
		gotoxy (11, 30);
		printf ("控制小人行走：方向键");
		gotoxy (13, 30);
		printf ("复活次数：无限次");
		gotoxy (15, 30);
		printf ("小人加速/减速：'+'/'-'");
		gotoxy (17, 30);
		printf ("大力丸（怪物们不会主动吃您）：$键"); 
		gotoxy (20, 10);
		color (4);
        if (kbhit ()) {
        	shuru ();
		} 
        if (stopped) {
        	continue;
		} 
        T1 = (T1 + 1) % t1; 
		T2 = (T2 + 1) % t2;
        if (T1 % t1 == 0 && now + fx[fangx] > 0 && now + fx[fangx] < n) {
        	move1 ();
		} 
        if (T2 % t2 == 0) {
            if (guaitimer <= 8) {
                if (guaitimer==0) {
                	g1 = 1;
				} 
                if (guaitimer == 8) {
                	g2 = 1;	
				} 
                guaitimer++;
            }
            if (!g3 && fenshu >= 30) {
            	g3 = 1;	
			}
            move2 ();    
        }
        if (fenshu == guozi) {
        	f=2;
		}
    }
    if (f == 2) {
        Sleep (3000);
        system ("cls");
        gotoxy (10, 20);
        color (3);
        string str = "恭喜您吃完了所有豆子！";
        for (int i = 0; i < str.size (); i++) {
        	Sleep (80);
        	cout << str[i];
		}
		Sleep (2000);
		gotoxy (12, 20);
		str = "您一共被怪物吃掉了";
		for (int i = 0; i < str.size (); i++) {
			Sleep (80);
			cout << str[i];
		}
		Sleep (80); 
		cout << beichi; 
		Sleep (80);
		cout << "次";
		Sleep (80);
		cout << "！";
		gotoxy (14, 20);
        Sleep (2000);
    }
}
