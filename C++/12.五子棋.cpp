#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#include<ctime>
 
//ע�⣬ʹ������ϵͳ�������������Щͷ�ļ�
 
using namespace std;
void gotoxy(int x,int y) {
COORD pos = {x,y};
HANDLE hOut =GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hOut,pos);
}//������ƶ���x,y���� 
int mp[16][16]= {0},x1=0,x2=0;//��ͼ�����������������ɵ� 
void print(int x) {
gotoxy(x,1);
cout<<"��";
for(int i=2; i<=14; i++) {
gotoxy(x,i);
cout<<"��";
}
gotoxy(x,15);
cout<<"��";
}//������̵��м䲿�� 
void gotoc() {
system("cls");
gotoxy(55,10);
cout<<"�� �� ��";
gotoxy(56,20);
cout<<"������...";
gotoxy(55,21);
cout<<"���ߣ�����";
for(int j=0; j<100; j++) {
Sleep(17);
gotoxy(j+3,15);
cout<<" "<<j<<"%";
gotoxy(j,15);
cout<<"��";
}
system("cls");
for(int i=0; i<100; i++) {
for(int j=0; j<40; j++) {
gotoxy(i,j);
cout<<"��";
//SetColor(rand()%10);
}
}
system("cls");
}//���ؽ��溯�� 
int main() {
gotoc();//���� 
for(int i=2; i<=30; i+=2) {
gotoxy(i,0);
cout<<i/2;
}//������ 
for(int i=1; i<=15; i++) {
gotoxy(0,i);
cout<<i;
}//������ 
gotoxy(2,1);
cout<<"��";
for(int i=2; i<=14; i++) {
gotoxy(2,i);
cout<<"��";
}
gotoxy(2,15);
cout<<"��";//���������� 
for(int i=4; i<=28; i+=2) {
print(i);
}//��һ��ѭ������������м䲿�� 
gotoxy(30,1);
cout<<"��";
for(int i=2; i<=14; i++) {
gotoxy(30,i);
cout<<"��";
}
gotoxy(30,15);
cout<<"��";//��������Ҳ�
bool l=0;//ûʲô�õ�flag 
long long m=2;//�������Ҫ�������ж��Ǹð����߻��Ǻ����ߣ�ÿ������++��ÿ���ж���ż�����ð��壬���������ú��壨һ����flag�жϣ������Ҹ���ϲ�ã� 
gotoxy(0,17);
cout<<"��Ϸ˵�����������ߣ��������������꣬�����Ĳ�����˵�˰�";//˵����һ��Ҫ�� 
while(l=1) {
gotoxy(32,16);
int x,y;
cin>>x>>y;//����xy���� 
gotoxy(32,16);
cout<<" ";
if(mp[x][y]!=0) { 
gotoxy(32,16);
cout<<"��λ���������ӣ�";
Sleep(1000);
gotoxy(32,16);
cout<<" ";
continue;
}//����Ҫ�������жϴ�λ����û������ 
if(x>15&&y<=15) {
gotoxy(32,16);
cout<<"x���곬�����̷�Χ��";
Sleep(1000);
gotoxy(32,16);
cout<<" ";
continue;
} 
if(y>15&&x<=15) {
gotoxy(32,16);
cout<<"y���곬�����̷�Χ��";
Sleep(1000);
gotoxy(32,16);
cout<<" ";
continue;
}
if(y>15&&x>15) {
gotoxy(32,16);
cout<<"x��y������������̷�Χ��";
Sleep(1000);
gotoxy(32,16);
cout<<" ";
continue;
}//��������if�����ж���û�г������̴�С 
gotoxy(x*2,y);
if(m%2==0) {//��ż�����ð��� 
cout<<"��";//������� 
mp[x][y]=1;
//������������û��������� 
if(mp[x+1][y]==1&&mp[x+2][y]==1&&mp[x+3][y]==1&&mp[x+4][y]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x-1][y]==1&&mp[x+1][y]==1&&mp[x+2][y]==1&&mp[x+3][y]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x-2][y]==1&&mp[x-1][y]==1&&mp[x+1][y]==1&&mp[x+2][y]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x-3][y]==1&&mp[x-2][y]==1&&mp[x-1][y]==1&&mp[x+1][y]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x-4][y]==1&&mp[x-3][y]==1&&mp[x-2][y]==1&&mp[x-1][y]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
//��
if(mp[x][y+1]==1&&mp[x][y+2]==1&&mp[x][y+3]==1&&mp[x][y+4]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x][y-1]==1&&mp[x][y+1]==1&&mp[x][y+2]==1&&mp[x][y+3]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x][y-2]==1&&mp[x][y-1]==1&&mp[x][y+1]==1&&mp[x][y+2]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x][y-3]==1&&mp[x][y-2]==1&&mp[x][y-1]==1&&mp[x][y+1]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x][y-4]==1&&mp[x][y-3]==1&&mp[x][y-2]==1&&mp[x][y-1]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
//б'\'
if(mp[x+1][y+1]==1&&mp[x+2][y+2]==1&&mp[x+3][y+3]==1&&mp[x+4][y+4]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x-1][y-1]==1&&mp[x+1][y+1]==1&&mp[x+2][y+2]==1&&mp[x+3][y+3]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x-2][y-2]==1&&mp[x-1][y-1]==1&&mp[x+1][y+1]==1&&mp[x+2][y+2]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x-3][y-3]==1&&mp[x-2][y-2]==1&&mp[x-1][y-1]==1&&mp[x+1][y+1]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x-4][y-4]==1&&mp[x-3][y-3]==1&&mp[x-2][y-2]==1&&mp[x-1][y-1]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
//б'/'
if(mp[x-1][y+1]==1&&mp[x-2][y+2]==1&&mp[x-3][y+3]==1&&mp[x-4][y+4]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x+1][y-1]==1&&mp[x-1][y+1]==1&&mp[x-2][y+2]==1&&mp[x-3][y+3]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x+2][y-2]==1&&mp[x+1][y-1]==1&&mp[x-1][y+1]==1&&mp[x-2][y+2]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x+3][y-3]==1&&mp[x+2][y-2]==1&&mp[x+1][y-1]==1&&mp[x-1][y+1]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x+4][y-4]==1&&mp[x+3][y-3]==1&&mp[x+2][y-2]==1&&mp[x+1][y-1]==1) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
} else if(m%2==1) {//Ϊ�������ú��� 
cout<<"��";
mp[x][y]=2;
//��
if(mp[x+1][y]==2&&mp[x+2][y]==2&&mp[x+3][y]==2&&mp[x+4][y]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x-1][y]==2&&mp[x+1][y]==2&&mp[x+2][y]==2&&mp[x+3][y]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x-2][y]==2&&mp[x-1][y]==2&&mp[x+1][y]==2&&mp[x+2][y]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x-3][y]==2&&mp[x-2][y]==2&&mp[x-1][y]==2&&mp[x+1][y]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x-4][y]==2&&mp[x-3][y]==2&&mp[x-2][y]==2&&mp[x-1][y]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
//��
if(mp[x][y+1]==2&&mp[x][y+2]==2&&mp[x][y+3]==2&&mp[x][y+4]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x][y-1]==2&&mp[x][y+1]==2&&mp[x][y+2]==2&&mp[x][y+3]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x][y-2]==2&&mp[x][y-1]==2&&mp[x][y+1]==2&&mp[x][y+2]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x][y-3]==2&&mp[x][y-2]==2&&mp[x][y-1]==2&&mp[x][y+1]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x][y-4]==2&&mp[x][y-3]==2&&mp[x][y-2]==2&&mp[x][y-1]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
//б'\'
if(mp[x+1][y+1]==2&&mp[x+2][y+2]==2&&mp[x+3][y+3]==2&&mp[x+4][y+4]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x-1][y-1]==2&&mp[x+1][y+1]==2&&mp[x+2][y+2]==2&&mp[x+3][y+3]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x-2][y-2]==2&&mp[x-1][y-1]==2&&mp[x+1][y+1]==2&&mp[x+2][y+2]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x-3][y-3]==2&&mp[x-2][y-2]==2&&mp[x-1][y-1]==2&&mp[x+1][y+1]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x-4][y-4]==2&&mp[x-3][y-3]==2&&mp[x-2][y-2]==2&&mp[x-1][y-1]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
//б'/'
if(mp[x-1][y+1]==2&&mp[x-2][y+2]==2&&mp[x-3][y+3]==2&&mp[x-4][y+4]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x+1][y-1]==2&&mp[x-1][y+1]==2&&mp[x-2][y+2]==2&&mp[x-3][y+3]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x+2][y-2]==2&&mp[x+1][y-1]==2&&mp[x-1][y+1]==2&&mp[x-2][y+2]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x+3][y-3]==2&&mp[x+2][y-2]==2&&mp[x+1][y-1]==2&&mp[x-1][y+1]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
if(mp[x+4][y-4]==2&&mp[x+3][y-3]==2&&mp[x+2][y-2]==2&&mp[x+1][y-1]==2) {
gotoxy(32,16);
cout<<"�����ʤ��";
return 0;
}
}
m++;//��Ҫ����++m 
}
return 0;//���ûʲô���ˣ���������ʱ��Ҫ���Ǽ�Ŷ��������0�� 
}
