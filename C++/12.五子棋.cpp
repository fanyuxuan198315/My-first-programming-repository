#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#include<ctime>
 
//注意，使用以下系统函数，请加上这些头文件
 
using namespace std;
void gotoxy(int x,int y) {
COORD pos = {x,y};
HANDLE hOut =GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hOut,pos);
}//将光标移动到x,y点上 
int mp[16][16]= {0},x1=0,x2=0;//地图，用来搜索五子连成的 
void print(int x) {
gotoxy(x,1);
cout<<"┬";
for(int i=2; i<=14; i++) {
gotoxy(x,i);
cout<<"┼";
}
gotoxy(x,15);
cout<<"┴";
}//输出棋盘的中间部分 
void gotoc() {
system("cls");
gotoxy(55,10);
cout<<"五 子 棋";
gotoxy(56,20);
cout<<"加载中...";
gotoxy(55,21);
cout<<"作者：北辰";
for(int j=0; j<100; j++) {
Sleep(17);
gotoxy(j+3,15);
cout<<" "<<j<<"%";
gotoxy(j,15);
cout<<"■";
}
system("cls");
for(int i=0; i<100; i++) {
for(int j=0; j<40; j++) {
gotoxy(i,j);
cout<<"■";
//SetColor(rand()%10);
}
}
system("cls");
}//加载界面函数 
int main() {
gotoc();//加载 
for(int i=2; i<=30; i+=2) {
gotoxy(i,0);
cout<<i/2;
}//横坐标 
for(int i=1; i<=15; i++) {
gotoxy(0,i);
cout<<i;
}//纵坐标 
gotoxy(2,1);
cout<<"┌";
for(int i=2; i<=14; i++) {
gotoxy(2,i);
cout<<"├";
}
gotoxy(2,15);
cout<<"└";//输出棋盘左侧 
for(int i=4; i<=28; i+=2) {
print(i);
}//用一个循环来输出棋盘中间部分 
gotoxy(30,1);
cout<<"┐";
for(int i=2; i<=14; i++) {
gotoxy(30,i);
cout<<"┤";
}
gotoxy(30,15);
cout<<"┘";//输出棋盘右侧
bool l=0;//没什么用的flag 
long long m=2;//这个很重要，用来判断是该白棋走还是黑棋走，每次走完++，每次判断是偶数，该白棋，是奇数，该黑棋（一般用flag判断，这是我个人喜好） 
gotoxy(0,17);
cout<<"游戏说明：白棋先走，落子请输入坐标，其他的不用我说了吧";//说明，一定要看 
while(l=1) {
gotoxy(32,16);
int x,y;
cin>>x>>y;//读入xy坐标 
gotoxy(32,16);
cout<<" ";
if(mp[x][y]!=0) { 
gotoxy(32,16);
cout<<"此位置已有落子！";
Sleep(1000);
gotoxy(32,16);
cout<<" ";
continue;
}//很重要，用来判断此位置有没有落子 
if(x>15&&y<=15) {
gotoxy(32,16);
cout<<"x坐标超出棋盘范围！";
Sleep(1000);
gotoxy(32,16);
cout<<" ";
continue;
} 
if(y>15&&x<=15) {
gotoxy(32,16);
cout<<"y坐标超出棋盘范围！";
Sleep(1000);
gotoxy(32,16);
cout<<" ";
continue;
}
if(y>15&&x>15) {
gotoxy(32,16);
cout<<"x和y坐标均超出棋盘范围！";
Sleep(1000);
gotoxy(32,16);
cout<<" ";
continue;
}//以上三个if用来判断有没有超出棋盘大小 
gotoxy(x*2,y);
if(m%2==0) {//是偶数，该白棋 
cout<<"●";//输出棋子 
mp[x][y]=1;
//横坐标搜索有没有连成五个 
if(mp[x+1][y]==1&&mp[x+2][y]==1&&mp[x+3][y]==1&&mp[x+4][y]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
if(mp[x-1][y]==1&&mp[x+1][y]==1&&mp[x+2][y]==1&&mp[x+3][y]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
if(mp[x-2][y]==1&&mp[x-1][y]==1&&mp[x+1][y]==1&&mp[x+2][y]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
if(mp[x-3][y]==1&&mp[x-2][y]==1&&mp[x-1][y]==1&&mp[x+1][y]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
if(mp[x-4][y]==1&&mp[x-3][y]==1&&mp[x-2][y]==1&&mp[x-1][y]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
//竖
if(mp[x][y+1]==1&&mp[x][y+2]==1&&mp[x][y+3]==1&&mp[x][y+4]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
if(mp[x][y-1]==1&&mp[x][y+1]==1&&mp[x][y+2]==1&&mp[x][y+3]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
if(mp[x][y-2]==1&&mp[x][y-1]==1&&mp[x][y+1]==1&&mp[x][y+2]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
if(mp[x][y-3]==1&&mp[x][y-2]==1&&mp[x][y-1]==1&&mp[x][y+1]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
if(mp[x][y-4]==1&&mp[x][y-3]==1&&mp[x][y-2]==1&&mp[x][y-1]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
//斜'\'
if(mp[x+1][y+1]==1&&mp[x+2][y+2]==1&&mp[x+3][y+3]==1&&mp[x+4][y+4]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
if(mp[x-1][y-1]==1&&mp[x+1][y+1]==1&&mp[x+2][y+2]==1&&mp[x+3][y+3]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
if(mp[x-2][y-2]==1&&mp[x-1][y-1]==1&&mp[x+1][y+1]==1&&mp[x+2][y+2]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
if(mp[x-3][y-3]==1&&mp[x-2][y-2]==1&&mp[x-1][y-1]==1&&mp[x+1][y+1]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
if(mp[x-4][y-4]==1&&mp[x-3][y-3]==1&&mp[x-2][y-2]==1&&mp[x-1][y-1]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
//斜'/'
if(mp[x-1][y+1]==1&&mp[x-2][y+2]==1&&mp[x-3][y+3]==1&&mp[x-4][y+4]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
if(mp[x+1][y-1]==1&&mp[x-1][y+1]==1&&mp[x-2][y+2]==1&&mp[x-3][y+3]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
if(mp[x+2][y-2]==1&&mp[x+1][y-1]==1&&mp[x-1][y+1]==1&&mp[x-2][y+2]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
if(mp[x+3][y-3]==1&&mp[x+2][y-2]==1&&mp[x+1][y-1]==1&&mp[x-1][y+1]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
if(mp[x+4][y-4]==1&&mp[x+3][y-3]==1&&mp[x+2][y-2]==1&&mp[x+1][y-1]==1) {
gotoxy(32,16);
cout<<"白棋获胜！";
return 0;
}
} else if(m%2==1) {//为奇数，该黑棋 
cout<<"○";
mp[x][y]=2;
//横
if(mp[x+1][y]==2&&mp[x+2][y]==2&&mp[x+3][y]==2&&mp[x+4][y]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
if(mp[x-1][y]==2&&mp[x+1][y]==2&&mp[x+2][y]==2&&mp[x+3][y]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
if(mp[x-2][y]==2&&mp[x-1][y]==2&&mp[x+1][y]==2&&mp[x+2][y]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
if(mp[x-3][y]==2&&mp[x-2][y]==2&&mp[x-1][y]==2&&mp[x+1][y]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
if(mp[x-4][y]==2&&mp[x-3][y]==2&&mp[x-2][y]==2&&mp[x-1][y]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
//竖
if(mp[x][y+1]==2&&mp[x][y+2]==2&&mp[x][y+3]==2&&mp[x][y+4]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
if(mp[x][y-1]==2&&mp[x][y+1]==2&&mp[x][y+2]==2&&mp[x][y+3]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
if(mp[x][y-2]==2&&mp[x][y-1]==2&&mp[x][y+1]==2&&mp[x][y+2]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
if(mp[x][y-3]==2&&mp[x][y-2]==2&&mp[x][y-1]==2&&mp[x][y+1]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
if(mp[x][y-4]==2&&mp[x][y-3]==2&&mp[x][y-2]==2&&mp[x][y-1]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
//斜'\'
if(mp[x+1][y+1]==2&&mp[x+2][y+2]==2&&mp[x+3][y+3]==2&&mp[x+4][y+4]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
if(mp[x-1][y-1]==2&&mp[x+1][y+1]==2&&mp[x+2][y+2]==2&&mp[x+3][y+3]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
if(mp[x-2][y-2]==2&&mp[x-1][y-1]==2&&mp[x+1][y+1]==2&&mp[x+2][y+2]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
if(mp[x-3][y-3]==2&&mp[x-2][y-2]==2&&mp[x-1][y-1]==2&&mp[x+1][y+1]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
if(mp[x-4][y-4]==2&&mp[x-3][y-3]==2&&mp[x-2][y-2]==2&&mp[x-1][y-1]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
//斜'/'
if(mp[x-1][y+1]==2&&mp[x-2][y+2]==2&&mp[x-3][y+3]==2&&mp[x-4][y+4]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
if(mp[x+1][y-1]==2&&mp[x-1][y+1]==2&&mp[x-2][y+2]==2&&mp[x-3][y+3]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
if(mp[x+2][y-2]==2&&mp[x+1][y-1]==2&&mp[x-1][y+1]==2&&mp[x-2][y+2]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
if(mp[x+3][y-3]==2&&mp[x+2][y-2]==2&&mp[x+1][y-1]==2&&mp[x-1][y+1]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
if(mp[x+4][y-4]==2&&mp[x+3][y-3]==2&&mp[x+2][y-2]==2&&mp[x+1][y-1]==2) {
gotoxy(32,16);
cout<<"黑棋获胜！";
return 0;
}
}
m++;//不要忘记++m 
}
return 0;//这个没什么用了，不过比赛时不要忘记加哦，否则判0分 
}
