#include<bits/stdc++.h>	
#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
#define Nor if(B[b].x<5) B[b].x=5;
#define Out1 Bx1-Bvx1<=6||Bx1-Bvx1>=28||By1-Bvy1<=7||By1-Bvy1>=27
#define Out2 Bx2-Bvx2<=6||Bx2-Bvx2>=28||By2-Bvy2<=7||By2-Bvy2>=27
#define Chang1 {Bwhat1=0;Bvx1=Bvy1=0;memset(Bgo1,0,sizeof(Bgo1));}
#define Chang2 {Bwhat2=0;Bvx2=Bvy2=0;memset(Bgo2,0,sizeof(Bgo2));}
#define Chang3 {Bwhat3=0;Bvx3=Bvy3=0;memset(Bgo3,0,sizeof(Bgo3));}
using namespace std;
int ti(float a) {return ((int)(a*10+5))/10;}
void Setpos(float x,float y){COORD pos;pos.X=ti(y*4)/2;pos.Y=ti(x);SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);}
void Color(int a){if(a==0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);if(a==1) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);if(a==2) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);if(a==3) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);if(a==4) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);if(a==5) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);if(a==6) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);if(a==7) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);if(a==8) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);if(a==9) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_BLUE);if(a==10) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY|BACKGROUND_RED|BACKGROUND_BLUE);if(a==11) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE);if(a==12) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN);if(a==13) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);if(a==14) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_BLUE);}
int Blomax,Ren,Exp,Expmax,Lv,Lvl,Ice,Drug,ar1,ar2,Tar1,Tar2,bl,br,Win,T,Tb,Sy,Up,Upt,Down,u1,u2,Kill,Killb,L,Ll[4],Li,D,Gd[10],Biao,Fire,Fir,Water,Thun,Wind,Magne,I[20][2],ib,Dis,Disb,Dis1,Disb1,Boss,Bblo,Bblomax,Bwhat1,Bwhat2,Bwhat3,Bgo1[10],Bgo2[10],Bgo3[10],Bbr,Bbl,Bl[4];
float X,Y,Vx,Vy,Ding,Blo,Hui,Bx1,By1,Bx2,By2,Bx3,By3,Bvx1,Bvy1,Bvx2,Bvy2,Bvx3,Bvy3,Bway[1001][2];
struct bullet{float x,y,vx,vy;int what;int a,t,How;int life;bool kill;}B[100001];
void Map(int a,int b);
void Pan(int a,float x,float y,int b){
    float Nox[4],Noy[4];Nox[0]=X,Noy[0]=Y;
    if(Down==1&&X==22) Nox[1]=X+1,Noy[1]=Y-0.5,Nox[2]=X-1,Noy[2]=Y-0.5;else if(Down==2) Nox[1]=X+1,Noy[1]=Y-0.5,Nox[2]=-10,Noy[2]=-10;else if(Down==1||X<18) Nox[1]=X-1,Noy[1]=Y-0.5,Nox[2]=-10,Noy[2]=-10;else Nox[1]=X+1,Noy[1]=Y-0.5,Nox[2]=X-1,Noy[2]=Y-0.5;
    for(int i=0;i<3;i++){
        if(a==-1){if(abs(x-Nox[i])+abs(y-Noy[i])<1.5) {if(B[b].what==-10)Exp+=2;if(B[b].what==-11)Exp+=1;B[b].life=0;if(B[b].life==0&&b==bl) bl++;Map(3,b);break;}}
        if(a==-2){if(abs(x-Nox[i])+abs(y-Noy[i])<2.5) {if(B[b].what==-2)Exp+=5,Biao+=5;if(B[b].what==-3)Fire=300,Ice=0,Fir=3;if(B[b].what==-4)Water=200;if(B[b].what==-5){Wind=70;Ding=28.25;Ice=0;if(Y<Ding-1)Vy=5;else Vy=0;if(Up>=1) Vx=-5;if(Down==2) Vx=5;}if(B[b].what==-6){Thun=200;system("color 1F");Sleep(20);system("color 6F");Sleep(10);system("color 0F");}if(B[b].what==-7)Magne=300;if(B[b].what==-8)Ice=0,Drug=0,Blo=fmin((float)Blomax,Blo+20);if(B[b].what==-9)Exp=fmin((float)Expmax,Exp+20);B[b].life=0;if(B[b].life==0&&b==bl) bl++;Map(3,b);break;}}
    }if(Wind==0&&Thun==0&&(B[b].kill!=0||Killb>=15||Ren==1&&Killb>0)) return;
    for(int i=0;i<3;i++){
        if((Wind>=1||Thun>=1)&&abs(x-Nox[i])+abs(y-Noy[i])<2.5) {if(B[b].what<98)Exp+=2;B[b].life=0;Map(3,b);break;}
        if(a==1) {if(abs(x-Nox[i])<0.5&&abs(y-Noy[i])<1) {if(B[b].what>=99)Blo-=10;if(B[b].what==14)Blo-=15,Ice=100,B[b].life=0;else if(B[b].what==15)Blo-=20,Ice=0,B[b].life=0;else if(B[b].what==17)Blo-=5,Drug=100,B[b].life=0;else if(B[b].what>=13&&B[b].what<=17)Blo-=10,B[b].life=0;else Blo-=15;B[b].kill=1,Killb=20;Kill=1;Map(3,b);break;}}
        if (a==2||a==6||a==8||a==9||a==10||a==11||a==12) {
			if(abs(x-Nox[i])+abs(y-Noy[i])<1.5) {
				if(a==2)Blo-=20;
				else if(a==8)Blo-=10;
				else Blo-=15;B[b].kill=1,Killb=20;Kill=1;if(a!=2){B[b].life=0;if(B[b].life==0&&b==bl) bl++;Map(3,b);break;}}}
        if(a==4) {if((Wind>=1||Thun>=1)&&abs(x-Nox[i])<1.5&&Noy[i]-y<=0&&Noy[i]-y>=-8) {if(B[b].what<98)Exp+=2;B[b].life=0;Map(3,b);break;}if(abs(x-Nox[i])<1&&Noy[i]-y<=0&&Noy[i]-y>=-8) {Blo-=25,B[b].kill=1,Killb=20;Kill=1;Vy=-1;Y-=0.5;break;}}
    }
}
void Map(int a,int b){
    Color(0);
    if(a==-1){
        if(Boss==1||Boss==6){if(Bwhat1==5){if(ti(Bx1)==20)Setpos(Bx1,By1),cout<<"==";else Setpos(Bx1,By1),cout<<"  ";}else{Setpos(Bx1-1,By1-0.5),cout<<"    ";Setpos(Bx1,By1-1),cout<<"      ";Setpos(Bx1+1,By1-0.5),cout<<"    ";if(abs(ti(Bx1)-20)<=1)Setpos(20,By1-1),cout<<"======";}}
        if(Boss==2||Boss==6){Setpos(Bx2-1,By2-1);cout<<"    ";Setpos(Bx2,By2-1);cout<<"      ";Setpos(Bx2+1,By2-1),cout<<"      ";Color(0);if(abs(ti(Bx2)-20)<=1)Setpos(20,By2-1),cout<<"======";}
        if(Boss==3||Boss==6){Setpos(Bx3-1,By3-0.5);cout<<"     ";Setpos(Bx3,By3);cout<<"  ";Setpos(Bx3+1,By3-1),cout<<"      ";Color(0);if(abs(ti(Bx3)-20)<=1)Setpos(20,By3-1),cout<<"=======";}
        if(X<0)return;if(X>=17&&X<=19){Setpos(X-1,Y);cout<<"  ";Setpos(X,Y-1);cout<<"   ";Setpos(X+1,Y-1),cout<<"   ";}else if(X<=23&&X>=21){Setpos(X+1,Y);cout<<"  ";Setpos(X,Y-1);cout<<"   ";Setpos(X-1,Y-1),cout<<"    ";}else if(X>23){Setpos(X,Y-1);cout<<"    ";Setpos(X-1,Y-0.5),cout<<"   ";}else if(X<17&&Upt!=0){Setpos(X,Y-1);cout<<"    ";Setpos(X+1,Y-1.5),cout<<"    ";}else if(X<17){Setpos(X,Y-1);cout<<"    ";Setpos(X+1,Y-0.5),cout<<"   ";}if(Thun>0){Setpos(X-2,Y-1),cout<<"    ";Setpos(X+2,Y-1),cout<<"    ";Setpos(X,Y+2),cout<<"  ";Setpos(X,Y-2.5),cout<<"  ";Setpos(X-1,Y+1),cout<<"  ";Setpos(X+1,Y+1),cout<<"  ";Setpos(X-1,Y-2),cout<<"  ";Setpos(X+1,Y-2),cout<<"  ";Setpos(20,Y-2.5),cout<<"============";}if(Wind!=0){Setpos(X+1,Y-5);cout<<"        ";Setpos(X,Y-5);cout<<"        ";Setpos(X-1,Y-5);cout<<"        ";Setpos(20,Y-5),cout<<"========";}if(Water!=0){Setpos(X,Y-4);cout<<"       ";Setpos(X+2,Y-3.5);cout<<"     ";Setpos(X-2,Y-3.5);cout<<"     ";Setpos(X+1,Y-3.5);cout<<"     ";Setpos(X-1,Y-3.5);cout<<"     ";Setpos(20,Y-5),cout<<"========";}if(Fire!=0){Setpos(X,Y+1),cout<<"  ";Setpos(X+1,Y),cout<<"  ";Setpos(X-1,Y-1),cout<<"  ";Setpos(20,Y-1);cout<<"======";}
    }
    if(a==0){
        if(Boss==1||Boss==6){if(Bwhat1==5)Color(5),Setpos(Bx1,By1),cout<<"��",Color(0);else if(Bwhat1==4&&Bgo1[1]>6&&Bgo1[1]<11)Color(4),Setpos(Bgo1[5]-1,Bgo1[6]),cout<<"��",Setpos(Bgo1[5],Bgo1[6]-1),cout<<"��",Setpos(Bgo1[5],Bgo1[6]+1),cout<<"��",Setpos(Bgo1[5]+1,Bgo1[6]),cout<<"��",Color(0);else{Setpos(Bx1-1,By1-0.5),Color(0),cout<<"���";Setpos(Bx1,By1-1);if(Bwhat1==2&&Bgo1[1]<=5)Color(1);else if(Bwhat1==3&&Bgo1[1]<=5)Color(5);else if(Bwhat1==6&&Bgo1[1]<=5)Color(8); else Color(4);if(Bwhat1==4) Setpos(Bx1,By1-0.5),cout<<"����(";else cout<<")����(";Setpos(Bx1+1,By1-0.5),cout<<"����";Color(0);}}
        if(Boss==2||Boss==6){Setpos(Bx2-1,By2-1);Color(0),cout<<"\\ ";Color(0);cout<<"��";Setpos(Bx2,By2-1);Color(3);cout<<"��";Color(5),cout<<"JJJ";Color(0),cout<<">";Color(3);Setpos(Bx2+1,By2-1),cout<<"������";Color(0);}
        if(Boss==3||Boss==6){Setpos(Bx3-1,By3-0.5);if(Bwhat3==3||Bwhat3==9) Color(1);else if(Bwhat3==4||Bwhat3==10) Color(4);else if(Bwhat3==5||Bwhat3==11) Color(5);if(Bwhat3==11)cout<<' ';else if(Bwhat3==6) Color(3);else Color(2);cout<<"��-";Setpos(Bx3,By3);if(Bwhat3==11)cout<<"/";else cout<<"��";Color(0);Setpos(Bx3+1,By3-1),cout<<"����";}
        if(X<0)return;if(Ren==2) Color(12);if(Ren==3) Color(1);if(Ren==4) Color(3);if(Ren==5) Color(4);if(Ren==6) Color(2);if(Drug!=0&&T%5!=0) Color(11);if(Drug!=0&&T%5==0) Color(11);if(Ice!=0) Color(6);if(b==1) Color(8);if(Li!=0) Color(5);if(Ren==1&&Killb>0&&T%4<2) Color(13);if(Wind>0&&T%4<=1) Color(1);if(Wind>0&&T%4>=2) Color(0);if(Thun>0&&T%4<=1) Color(1);if(Thun>0&&T%4>=2) Color(6);
        if(X>=17&&X<=19){Setpos(X-1,Y);cout<<"��";Setpos(X,Y-1);cout<<"��/";if(T%10<3) Setpos(X+1,Y-1),cout<<"���v";else if(T%10<6) Setpos(X+1,Y-1),cout<<"�� ";else Setpos(X+1,Y-1),cout<<"�s>";if(Wind>0&&T%3==0) Setpos(X+1,Y-1),cout<<"���v";else if(Wind>0&&T%3==1) Setpos(X+1,Y-1),cout<<"�� ";else if(Wind>0&&T%3==2)Setpos(X+1,Y-1),cout<<"�s>";}else if(X<=23&&X>=21){Setpos(X+1,Y);cout<<"��";Setpos(X,Y-1);cout<<"��\\";if(T%10<3) Setpos(X-1,Y-1),cout<<"���u";else if(T%10<6) Setpos(X-1,Y-1),cout<<"�� ";else Setpos(X-1,Y-1),cout<<"�r>";if(Wind>0&&T%3==0) Setpos(X-1,Y-1),cout<<"���u";else if(Wind>0&&T%3==1) Setpos(X-1,Y-1),cout<<"�� ";else if(Wind>0&&T%3==2)Setpos(X-1,Y-1),cout<<"�r>";}else if(X>23){Setpos(X,Y-1);cout<<"�� ��";Setpos(X-1,Y-0.5),cout<<"��>";}else if(X<17&&Upt!=0){Setpos(X,Y-1);cout<<"�� ��";Setpos(X+1,Y-1.5),cout<<"�u >";}else if(X<17){Setpos(X,Y-1);cout<<"�� ��";Setpos(X+1,Y-0.5),cout<<"��>";}if(Thun>0){Setpos(X-2,Y-1),cout<<"�{�{";Setpos(X+2,Y-1),cout<<"�{�{";Setpos(X,Y+2),cout<<"��";Setpos(X,Y-2.5),cout<<"��";Setpos(X-1,Y+1),cout<<"��";Setpos(X+1,Y+1),cout<<"��";Setpos(X-1,Y-2),cout<<"��";Setpos(X+1,Y-2),cout<<"��";}if(Magne>0&&T%7<2)Setpos(X,Y),Color(5),cout<<"��";if(Wind>1){if(T%6<2)Color(1);else Color(0);if(T%8<=1){Setpos(X+1,Y-5);cout<<"----  --";Setpos(X,Y-5);cout<<"-  --- -";Setpos(X-1,Y-5);cout<<"--- - --";}else if(T%8<=3){Setpos(X+1,Y-5);cout<<"------  ";Setpos(X,Y-5);cout<<" --  ---";Setpos(X-1,Y-5);cout<<"----- - ";}else if(T%8<=5){Setpos(X+1,Y-5);cout<<"  ------";Setpos(X,Y-5);cout<<"-- --  -";Setpos(X-1,Y-5);cout<<"- ----- ";}else if(T%8<=7){Setpos(X+1,Y-5);cout<<"--  ----";Setpos(X,Y-5);cout<<" --- -- ";Setpos(X-1,Y-5);cout<<"- - ----";}}if(Water!=0){Color(1);if(T%20<5){Setpos(X+2,Y-3);cout<<"��";Setpos(X+1,Y-3.5);cout<<"��";Setpos(X-1,Y-2.5);cout<<"��";Setpos(X-2,Y-3);cout<<"��";}else if(T%20<10||T%20>=15){Setpos(X+2,Y-3);cout<<"��";Setpos(X,Y-4);cout<<"����";Setpos(X-2,Y-3);  cout<<"��";}else if(T%20<15){Setpos(X+2,Y-3.5);cout<<"��";Setpos(X+1,Y-3);cout<<"��";Setpos(X-1,Y-3.5);cout<<"��";Setpos(X-2,Y-3);cout<<"��";}}if(Fire!=0){if(T%6<3)Color(4);else Color(5);if(Fir>=1)Setpos(X,Y+1),cout<<"��";if(Fir>=2)Setpos(X+1,Y),cout<<"��";if(Fir>=3)Setpos(X-1,Y-1),cout<<"��";}
    }
    if(a==1||a==3){
        if(B[b].what==1){Nor;Setpos(B[b].x,B[b].y-1);if(ti(B[b].x)==20)cout<<"======";else cout<<"      ";if(B[b].life!=0){B[b].y-=B[b].vy;Setpos(B[b].x,B[b].y);if(B[b].How<=1) Color(13);else Color(4);cout<<"��";if(a==1) Pan(1,B[b].x,B[b].y,b);}}
        if(B[b].what==2){Nor;Setpos(B[b].x-1,B[b].y-1);if(ti(B[b].x-1)==20)cout<<"======";else cout<<"      ";Setpos(B[b].x,B[b].y-1);if(ti(B[b].x)==20)cout<<"======";else cout<<"      ";Setpos(B[b].x+1,B[b].y-1);if(ti(B[b].x+1)==20)cout<<"======";else cout<<"      ";if(B[b].life!=0){B[b].y-=B[b].vy;Setpos(B[b].x,B[b].y);Color(5);if(B[b].How==0){Setpos(B[b].x-1,B[b].y),cout<<"��";Setpos(B[b].x,B[b].y-1),cout<<"���� ��";Setpos(B[b].x+1,B[b].y),cout<<"��";}else if(B[b].How==1){Setpos(B[b].x-1,B[b].y-1),cout<<"�I  �J";Setpos(B[b].x,B[b].y),cout<<"�w";Setpos(B[b].x+1,B[b].y-1),cout<<"�L  �K";} if(a==1) Pan(2,B[b].x,B[b].y,b);}}
        if(B[b].what==3||B[b].what==5){Nor;Setpos(B[b].x,B[b].y);if(ti(B[b].x)==20)cout<<"==";else cout<<"  ";if(B[b].life!=0){B[b].y-=B[b].vy;B[b].x-=B[b].vx;Setpos(B[b].x,B[b].y);if(B[b].How==1) Color(5);else Color(4);cout<<"��";}}
        if(B[b].what==4){Nor;Setpos(B[b].x,fmax((float)0,B[b].y-8));if(ti(B[b].x)==20){for(int i=max(0,(int)B[b].y-8);i<=B[b].y;i++)cout<<"==";}else {for(int i=max(0,(int)B[b].y-8);i<=B[b].y;i++)cout<<"  ";}if(B[b].life!=0){B[b].y-=B[b].vy;Setpos(B[b].x,fmax((float)0,B[b].y-8));Color(6); for(int i=max(0,(int)B[b].y-8);i<=B[b].y;i++)cout<<"�T"; if(a==1) Pan(4,B[b].x,B[b].y,b);}}
        if(B[b].what==6||B[b].what==8||B[b].what==9){Nor;Setpos(B[b].x-1,B[b].y);if(ti(B[b].x)-1==20)cout<<"==";else cout<<"  ";Setpos(B[b].x+1,B[b].y);if(ti(B[b].x)+1==20)cout<<"==";else cout<<"  ";Setpos(B[b].x,B[b].y-1);if(ti(B[b].x)==20)cout<<"======";else cout<<"      ";if(B[b].life!=0){B[b].y-=B[b].vy;B[b].x-=B[b].vx;Setpos(B[b].x,B[b].y-1);if(B[b].what==6){if(B[b].How<=1) Color(1); else Color(6);}if(B[b].what==9){if(B[b].How<=1) Color(4); else Color(8);}if(B[b].what==8)Color(5);Setpos(B[b].x-1,B[b].y);cout<<"��";Setpos(B[b].x+1,B[b].y);cout<<"��";Setpos(B[b].x,B[b].y-1);if(B[b].How%2==1) cout<<"����"; else cout<<"�z��{"; if(a==1) Pan(6,B[b].x,B[b].y,b);}}
        if(B[b].what==7){Nor;Setpos(B[b].x,B[b].y);if(B[b].How<0) for(int i=19;i>=20+B[b].How;i--) {Setpos(i,B[b].y);cout<<"  ";}if(B[b].How>0) for(int i=21;i<=20+B[b].How;i++) {Setpos(i,B[b].y);cout<<"  ";}if(B[b].life!=0){B[b].y-=B[b].vy;if(B[b].How<0) for(int i=19;i>=20+B[b].How;i--) {Setpos(i,B[b].y);cout<<"�U"; if(a==1) Pan(7,i,B[b].y,b);}if(B[b].How>0) for(int i=21;i<=20+B[b].How;i++) {Setpos(i,B[b].y);cout<<"�U"; if(a==1) Pan(7,i,B[b].y,b);}}}
        if(B[b].what==10||B[b].what==11||B[b].what==12){Nor;Setpos(B[b].x,B[b].y);if(ti(B[b].x)==20)cout<<"==";else cout<<"  ";if(B[b].life!=0){B[b].x-=B[b].vx;B[b].y-=B[b].vy;if(B[b].How==1){B[b].vy-=0.2;}else B[b].vx-=0.35;if(B[b].x>=25) B[b].x=25,B[b].vx*=-0.8;if(B[b].what==11&&B[b].y<=1) B[b].y=1,B[b].vy*=-1;if(B[b].what==12&&B[b].y<=1) B[b].y=1,B[b].vx=0,B[b].vy=-0.5,B[b].How=1;Setpos(B[b].x,B[b].y);if(B[b].what==11)Color(1);else if(B[b].what==12)Color(5);else Color(0);if(B[b].t%4<2)cout<<"�z";else cout<<"��";if(a==1) Pan(B[b].what,B[b].x,B[b].y,b);}}
        if(B[b].what>=13&&B[b].what<=17){Nor;Setpos(B[b].x,B[b].y);if(ti(B[b].x)==20)cout<<"====";else cout<<"    ";if(B[b].life!=0){B[b].x-=B[b].vx;B[b].y-=B[b].vy;Setpos(B[b].x,B[b].y);if(B[b].what==14) Color(1);else if(B[b].what==15) Color(4);else if(B[b].what==16) Color(5);else if(B[b].what==17) Color(3);else Color(2);cout<<"��";if(B[b].what==14)cout<<"*";if(B[b].what==15)cout<<"";if(B[b].what==16)cout<<"<";if(B[b].what==17)cout<<"X";} if(a==1) Pan(1,B[b].x,B[b].y,b);}
        if(B[b].what==98&&B[b].life!=0){B[b].y-=B[b].vy;Setpos(B[b].x,B[b].y);if(ti(B[b].x==20))cout<<"==";else cout<<"  ";if(B[b].y<=3)B[b].life=0;} 
        if(B[b].what>=99){if(B[b].y<=3)B[b].life=0;if(B[b].life!=0){B[b].y-=B[b].vy;Setpos(B[b].x,B[b].y);Color(5);if(B[b].what==99)cout<<"��";if(B[b].what>=100&&B[b].what<200){if(B[b].what%5==0)cout<<"��";if(B[b].what%5==1)cout<<"��";if(B[b].what%5==2)cout<<"��";if(B[b].what%5==3)cout<<"ǿ";if(B[b].what%5==4)cout<<"��";}if(B[b].what>=200&&B[b].what<300){if(B[b].what%6==0)cout<<"��";if(B[b].what%6==1)cout<<"��";if(B[b].what%6==2)cout<<"��";if(B[b].what%6==3)cout<<"��";if(B[b].what%6==4)cout<<"֮";if(B[b].what%6==5)cout<<"��";}if(B[b].what>=300&&B[b].what<400){if(B[b].what%8==0)cout<<"��";if(B[b].what%8==1)cout<<"��";if(B[b].what%8==2)cout<<"��";if(B[b].what%8==3)cout<<"��";if(B[b].what%8==4)cout<<"��";if(B[b].what%8==5)cout<<"��";if(B[b].what%8==6)cout<<"��";if(B[b].what%8==7)cout<<"��";}if(B[b].what>=400&&B[b].what<500){if(B[b].what%8==0)cout<<"��";if(B[b].what%8==1)cout<<"��";if(B[b].what%8==2)cout<<"��";if(B[b].what%8==3)cout<<"��";if(B[b].what%8==4)cout<<"��";if(B[b].what%8==5)cout<<"��";if(B[b].what%8==6)cout<<"��";if(B[b].what%8==7)cout<<"ǰ";}if(B[b].what>=500&&B[b].what<600){if(B[b].what%8==0)cout<<"��";if(B[b].what%8==1)cout<<"��";if(B[b].what%8==2)cout<<"��";if(B[b].what%8==3)cout<<"��";if(B[b].what%8==4)cout<<"��";if(B[b].what%8==5)cout<<"��";if(B[b].what%8==6)cout<<"��";if(B[b].what%8==7)cout<<"��";} if(a==1) Pan(1,B[b].x,B[b].y,b);}}
        if(B[b].what==-1){Nor;Setpos(B[b].x,B[b].y);if(ti(B[b].x)==20)cout<<"==";else cout<<"  ";if(Boss==0) B[b].life=0;else if(((Boss==1&&abs(B[b].x-Bx1)+abs(B[b].y-By1)<1.5)||(Boss==2&&abs(B[b].x-Bx2)+abs(B[b].y-By2)<1.5)||(Boss==3&&abs(B[b].x-Bx3)+abs(B[b].y-By3)<1.5)||(B[b].t==10))&&B[b].life==1) Bblo-=8+Lv*2,B[b].life=0;if(B[b].life!=0){if(Boss==1)B[b].x=B[b].x+(Bx1-B[b].x)/(10-B[b].t)*1.0,B[b].y=B[b].y+(By1-B[b].y)/(10-B[b].t)*1.0;if(Boss==2)B[b].x=B[b].x+(Bx2-B[b].x)/(10-B[b].t)*1.0,B[b].y=B[b].y+(By2-B[b].y)/(10-B[b].t)*1.0;if(Boss==3)B[b].x=B[b].x+(Bx3-B[b].x)/(10-B[b].t)*1.0,B[b].y=B[b].y+(By3-B[b].y)/(10-B[b].t)*1.0;Setpos(B[b].x,B[b].y);Color(7);if(B[b].t%2==0) cout<<"��";else cout<<"��";}}
        if(B[b].what<=-2&&B[b].what>=-9){Nor;Setpos(B[b].x-1,B[b].y);if(ti(B[b].x)-1==20)cout<<"==";else cout<<"  ";Setpos(B[b].x+1,B[b].y);if(ti(B[b].x)+1==20)cout<<"==";else cout<<"  ";Setpos(B[b].x,B[b].y-1);if(ti(B[b].x)==20)cout<<"======";else cout<<"      ";if(B[b].life!=0){B[b].y-=B[b].vy;B[b].x-=B[b].vx;if(B[b].what<=-3&&B[b].what>=-7){if(B[b].x<=7)B[b].x=7;if(B[b].x>=28)B[b].x=28;else if(B[b].x>=B[b].a+1&&B[b].How==1)B[b].How=0;else if(B[b].x<=B[b].a-1&&B[b].How==0)B[b].How=1;if(B[b].How==1&&B[b].vx>=-1)B[b].vx-=0.2;if(B[b].How==0&&B[b].vx<=1)B[b].vx+=0.2;}if(B[b].what==-2) Color(3);if(B[b].what==-3) Color(4);if(B[b].what==-4) Color(1);if(B[b].what==-5) Color(0);if(B[b].what==-6) Color(6);if(B[b].what==-7) Color(5);if(B[b].what==-8) Color(2);if(B[b].what==-9) Color(14);if(T%7<=1&&B[b].what==-5)Color(1);else if(T%7<=1)Color(0);Setpos(B[b].x-1,B[b].y);cout<<"��";Setpos(B[b].x+1,B[b].y);cout<<"��";Setpos(B[b].x,B[b].y-1);if(B[b].what==-2) cout<<"�z�ک{";if(B[b].what==-3) cout<<"�z��{";if(B[b].what==-4) cout<<"�zˮ�{";if(B[b].what==-5) cout<<"�z��{";if(B[b].what==-6) cout<<"�z�ש{";if(B[b].what==-7) cout<<"�z�ũ{";if(B[b].what==-8) cout<<"�zѪ�{";if(B[b].what==-9) cout<<"�z�̩{"; if(a==1) Pan(-2,B[b].x,B[b].y,b);}}
        if(B[b].what==-11||B[b].what==-12){Nor;Setpos(B[b].x,B[b].y);if(ti(B[b].x)==20)cout<<"==";else cout<<"  ";if(B[b].life!=0){if(Magne>0)B[b].How++,B[b].x=B[b].x+(X-B[b].x)/(10-B[b].How)*1.0,B[b].y=B[b].y+(Y-B[b].y)/(10-B[b].How)*1.0;B[b].y-=B[b].vy;Setpos(B[b].x,B[b].y);if(B[b].what==-10) Color(5);if(B[b].what==-11) Color(7);if(T%7<=1)Color(0);cout<<"��"; if(a==1) Pan(-1,B[b].x,B[b].y,b);}}
        if(B[b].what==-13){Nor;Setpos(B[b].x,B[b].y-0.5);if(ti(B[b].x)==20)cout<<"===";else cout<<"   ";if(B[b].life!=0){if(B[b].a==13880086){if(Boss==0) B[b].life=0;else if(((Boss==1&&abs(B[b].x-Bx1)+abs(B[b].y-By1)<1.5)||(Boss==2&&abs(B[b].x-Bx2)+abs(B[b].y-By2)<1.5)||(Boss==3&&abs(B[b].x-Bx3)+abs(B[b].y-By3)<1.5)||(B[b].t==5))&&B[b].life==1) Bblo-=8+Lv*2,B[b].life=0;if(B[b].life!=0){if(Boss==1)B[b].x=B[b].x+(Bx1-B[b].x)/(5-B[b].t)*1.0,B[b].y=B[b].y+(By1-B[b].y)/(5-B[b].t)*1.0;if(Boss==2)B[b].x=B[b].x+(Bx2-B[b].x)/(5-B[b].t)*1.0,B[b].y=B[b].y+(By2-B[b].y)/(5-B[b].t)*1.0;if(Boss==3)B[b].x=B[b].x+(Bx3-B[b].x)/(5-B[b].t)*1.0,B[b].y=B[b].y+(By3-B[b].y)/(5-B[b].t)*1.0;}}else{if(B[B[b].a].life==0) B[b].life=0;else if((abs(B[b].x-B[B[b].a].x)+abs(B[b].y-B[B[b].a].y)<1.5||(B[b].t==5))&&B[b].life==1) Exp+=2,B[B[b].a].life=B[b].life=0;if(B[b].life!=0){B[b].x=B[b].x+(B[B[b].a].x-B[b].x)/(5-B[b].t)*1.0,B[b].y=B[b].y+(B[B[b].a].y-B[b].y)/(5-B[b].t)*1.0;}}Setpos(B[b].x,B[b].y-0.5);if(T%6<3)Color(5);else Color(4);cout<<"��";}}
    }if(br<bl) {br=-1,bl=0;memset(B,0,sizeof(B));}Color(0);
}
void Move(){
    if(X<3) X=3;if(Y<1) Y=1,Vy=0;if(Y>29) Y=29,Vy=0;
    if(Ice!=0){X-=Vx/2.0;Y+=Vy/2.0;Vy=fmax(Vy-0.025,(float)0);if(T%6==0&&Up==0&&Y<Ding) Y+=0.25;if(T%6==3&&Up==0&&Y>=Ding) Y-=0.25;if(Up==0&&Y<=Ding-1.25) Vy=0.25;if(Up==0&&Y>=Ding+1.25&&Wind==0) Vy=-0.25;if(Up==0&&Down==0&&Vx>0&&X<=18) Up=0,Down=0,Vx=0,Vy=0,X=18,Setpos(20,Y-2.5),cout<<"==========";else if(Down==2&&X<=22) Up=0,Down=1,Vx=0,Vy=0,X=22,Setpos(20,Y-2.5),cout<<"==========";else if(Up==0&&Down==1&&Vx<0&&X>=22) Up=0,Down=1,Vx=0,Vy=0,X=22,Setpos(20,Y-2.5),cout<<"==========";else if(Up>0&&Down==0&&X>18) Up=0,Vx=0,Vy=0,X=18,Setpos(20,Y-2.5),cout<<"==========";else if(Down==2) Vx+=0.175;else if(Up>0&&Upt==0) Vx-=0.175;else if(Up>0&&Upt>0) {Vx=fmax(Vx-0.125,(float)0);if(Upt==1&&T%2==0)Map(-1,0);if(T%2==0)Upt--;}}
    else{X-=Vx;Y+=Vy;Vy=fmax(Vy-0.05,(float)0);if(Wind==0){if(T%6==0&&Up==0&&Y<Ding) Y+=0.5;if(T%6==3&&Up==0&&Y>=Ding) Y-=0.5;}else{if(T%2==0&&Up==0&&Y<Ding) Y+=0.5;if(T%2==1&&Up==0&&Y>=Ding) Y-=0.5;}if(Up==0&&Y<=Ding-1.25) Vy=0.5;if(Up==0&&Y>=Ding+1.25&&Wind==0) Vy=-0.5;if(Up==0&&Down==0&&Vx>0&&X<=18) Up=0,Down=0,Vx=0,Vy=0,X=18,Setpos(20,Y-2.5),cout<<"==========";else if(Down==2&&X<=22) Up=0,Down=1,Vx=0,Vy=0,X=22,Setpos(20,Y-2.5),cout<<"==========";else if(Up==0&&Down==1&&Vx<0&&X>=22) Up=0,Down=1,Vx=0,Vy=0,X=22,Setpos(20,Y-2.5),cout<<"==========";else if(Up>0&&Down==0&&X>18) Up=0,Vx=0,Vy=0,X=18,Setpos(20,Y-2.5),cout<<"==========";else if(Down==2) Vx+=0.35;else if(Up>0&&Upt==0) Vx-=0.35;else if(Up>0&&Upt>0) {Vx=fmax(Vx-0.25,(float)0);if(Upt==1)Map(-1,0); Upt--;}}
    for(int i=bl;i<=br;i++){
        if(B[i].what<98)if(B[i].x-B[i].vx<=5||B[i].x-B[i].vx>=30||B[i].y-B[i].vy<=0||B[i].y-B[i].vy>=30){B[i].life=0;Map(1,i);}
        for(int j=0;j<20;j++)if(B[i].what>0&&B[i].life!=0&&abs(B[i].x-I[j][0])<2&&B[i].y-I[j][1]<=2){Setpos(I[j][0],I[j][1]);if(I[j][0]==20) cout<<"===";else cout<<"   ";I[j][0]=I[j][1]=-1;B[i].life=0;Exp+=2;}
        if(B[i].t>=100)B[i].life=0;if(B[i].life==0&&i==bl) bl++;
        Map(1,i);if(B[i].life==0) continue;
        else{B[i].t++;
            if(B[i].what==1){if(B[i].y<=25&&B[i].How==0) B[i].vy=0,B[i].How=1;if(B[i].t==30) B[i].y+=1.5,B[i].How=2;if(B[i].t==35) B[i].vy=1.5,B[i].How=3;}
            if(B[i].what==2){if(B[i].t%3==0) B[i].How=!B[i].How;} 
            if(B[i].what==3||B[i].what==5){if(B[i].what==3&&B[i].y<=20) B[i].vy=0;if(B[i].what==5&&B[i].y<=21) B[i].vy=0;if(B[i].t>30&&B[i].t%2==0) B[i].How=!B[i].How;if(B[i].what==5&&B[i].t<=30&&B[i].x<X) B[i].vx=-0.2;else if(B[i].what==5&&B[i].t<=70&&B[i].x>X) B[i].vx=0.2;else B[i].vx=0;if(B[i].t==45){B[i].life=0;br++;B[br].what=4;B[br].x=B[i].x;B[br].y=32;B[br].vy=3;B[br].life=1;}}
            if(B[i].what==6||B[i].what==8||B[i].what==9){if(B[i].vx<0.25&&B[i].vy<0.25&&B[i].t>=50){B[i].life=0;if(B[i].life==0&&i==bl) bl++;Map(1,i);break;}if(B[i].t%5==0) B[i].How=rand()%4;if(B[i].what==9){if(B[i].t==7){X9:float xx=(rand()%41)/40.0,yy=(rand()%41)/40.0;if(xx<=0.5&&yy<=0.5) goto X9;for(int j=1;j<=4;j++){br++,B[br].what=9;B[br].t=11;B[br].x=B[i].x,B[br].y=B[i].y,B[br].vx=xx,B[br].vy=yy;if(j%2==0)swap(B[br].vx,B[br].vy),B[br].vy*=-1;if(j<=2)B[br].vx*=-1,B[br].vy*=-1;B[br].life=1;}B[i].life=0;}}if(B[i].what==8){if(B[i].x>X&&B[i].vx<1.2) B[i].vx+=fmax((float)0,0.2-B[i].t/25);if(B[i].x<X&&B[i].vx>-1.2) B[i].vx-=fmax((float)0,0.2-B[i].t/25);if(B[i].y>Y&&B[i].vy<1.2) B[i].vy+=fmax((float)0,0.2-B[i].t/25);if(B[i].y<Y&&B[i].vy>-1.2) B[i].vy-=fmax((float)0,0.2-B[i].t/25);}}
            if(B[i].what>=13&&B[i].what<=15&&B[i].How!=0){if(B[i].x==B[i].How)B[i].vx=0,B[i].How=0;}
            if(B[i].what==16){if(B[i].x<X&&B[i].vx>=-1) B[i].vx-=0.2;else if(B[i].x>X&&B[i].vx<=1) B[i].vx+=0.2;}
        }
        if(B[i].life==1&&B[i].a==0&&B[i].what>0){if(B[i].y>Y&&abs(B[i].x-X)<=3&&((B[i].x-X)*(B[i].x-X)+(B[i].y-Y)*(B[i].y-Y))<Dis) Dis=(B[i].x-X)*(B[i].x-X)+(B[i].y-Y)*(B[i].y-Y),Disb=i;else if(((B[i].x-X)*(B[i].x-X)+(B[i].y-Y)*(B[i].y-Y))<Dis1) Dis1=(B[i].x-X)*(B[i].x-X)+(B[i].y-Y)*(B[i].y-Y),Disb1=i;}
    }
}
void Guai(int R,int r){
    if(R==-1){br++;B[br].what=-1;B[br].x=X+rand()%3-1;B[br].y=Y+rand()%3-1;B[br].life=1;}
    if(R<=-2&&R>=-11){br++;B[br].what=R;B[br].x=B[br].a=r;B[br].y=29;if(R<=-3&&R>=-7)B[br].vx=-1;B[br].vy=1;B[br].life=1;}
    if(R==0){br++;B[br].what=1;B[br].x=r;B[br].y=29;B[br].vy=1;B[br].life=1;}
    if(R==1){br++;B[br].what=2;B[br].x=r;B[br].y=29;B[br].vy=1;B[br].life=1;}
    if(R==2||R==3){br++;B[br].what=2*R-1;B[br].x=r;B[br].y=29;B[br].vy=1;B[br].life=1;}
    if(R==4){br++;B[br].what=6;if(r<5)r=5;if(r>30)r=30;B[br].x=r;if(r==11||r==25) B[br].y=29-(rand()%20);else B[br].y=29;X4:B[br].vx=(rand()%21-10)/30.0;B[br].vy=(rand()%25)/30.0;if(B[br].vx<=0.8&&B[br].vy<=0.8)goto X4;int rx=rand()%50;if(rx==0) B[br].vx=0;B[br].life=1;}
    if(R==5){br++;B[br].How=r;B[br].what=7;if(B[br].How<0) B[br].x=19;if(B[br].How>0) B[br].x=21;B[br].y=29;B[br].vy=1;B[br].life=1;}
}
void CpGuai(int R,float x,float y,float xx,float yy){
    if(R==4){br++;B[br].what=6;B[br].x=x;B[br].y=y;B[br].vx=xx;B[br].vy=yy;B[br].life=1;}
    if(R==6||R==7||R==8){br++;B[br].what=4+R;B[br].x=x;B[br].y=y;B[br].vx=xx;B[br].vy=yy;B[br].life=1;}
}
void MesGuai(int a,int rr){
    int R=rand()%rr,r=-10086;
    if(R==0){if(a==1) r=(5+rand()%8)*2;if(a<=3&&a!=1) r=10+rand()%16;if(a==4) r=rand()%75-20;if(a==5) r=2+rand()%4;if(r!=-10086) Guai(a,r);}
}
void NorGuai(int a,int b){	
    if(a==1) {if(b==1||b==41) Guai(0,15),Guai(0,17),Guai(0,19);if(b==21||b==61) Guai(0,21),Guai(0,23),Guai(0,25);if(b==81) Guai(0,11),Guai(0,13),Guai(0,15),Guai(0,17),Guai(0,19);if(b==101||b==141) Guai(0,17),Guai(0,19),Guai(0,21),Guai(0,23),Guai(0,25);if(b==121) Guai(0,15),Guai(0,17),Guai(0,19),Guai(0,21),Guai(0,23);if(b>=160&&b<=260&&b%10==0) Guai(0,b/10-1);if(b>=270&&b<=370&&b%10==0) Guai(0,52-b/10);if(b>=460&&b<=560&&b%10==0) Guai(0,b/10-37),Guai(0,b/10-36),Guai(0,b/10-35);if(b>=570&&b<=670&&b%10==0) Guai(0,78-b/10),Guai(0,77-b/10),Guai(0,76-b/10);if(b>=760&&b<=960&&b%10==0) Guai(0,b/10-66),Guai(0,b/10-65),Guai(0,103-b/10),Guai(0,104-b/10);if(b>=1000&&b<=1300) MesGuai(0,30-b/50);}
    if(a==2) {if(b<=200&&b%30==1) {int r=rand()%4;if(r==1) r=0;for(int i=0;i<4;i++) if(i!=r) Guai(1,i*4+9);}if(b>200&&b<=220&&b%5==1) Guai(1,18);if(b>220&&b<=300&&b%7==1) Guai(1,b/5-26);if(b>350&&b<=370&&b%5==1) Guai(1,22);if(b>370&&b<=450&&b%7==1) Guai(1,96-b/5);if(b==461||b==501||b==541) Guai(1,13),Guai(1,17),Guai(1,21);if(b==481||b==521||b==561) Guai(1,17),Guai(1,21),Guai(1,25);if(b>=561&&b<=861&&b%20==1) Guai(1,b/40+5);if(b>=561&&b<=861&&b%20==11) Guai(1,35-b/40);if(b>=801&&b<=961&&b%15==1) Guai(1,20);if(b>=1000&&b<=1300) MesGuai(1,30-b/50);}
    if(a==3) {if(b==1||b==61) Guai(3,15),Guai(2,17),Guai(2,19);if(b==31||b==91) Guai(2,21),Guai(2,23),Guai(3,25);if(b>=120&&b<=220&&b%10==0) Guai(2,b/10+3);if(b>=240&&b<=340&&b%10==0) Guai(2,49-b/10);if(b>=360&&b<=460&&b%20==0) Guai(2,b/10-21),Guai(2,61-b/10);if(b>=480&&b<=580&&b%20==0) Guai(3,b/10-33),Guai(3,73-b/10);if(b>=600&&b<750&&b%30==0) {for(int i=0;i<5;i++) Guai(3,i*3+10);}if(b>=750&&b<830&&b%10==0) if(b<=200&&b%40==1) Guai(2,X);if(b>=830&&b<910&&b%20==0) Guai(2,X);if(b>=910&&b<980&&b%10==0) Guai(2,X);if(b>=1000&&b<=1300) MesGuai(rand()%2+2,40-b/50);}
    if(a==4) {if(b==1) CpGuai(4,10,29,-0.4,0.7),CpGuai(4,14,29,-0.2,0.7),CpGuai(4,21,29,0,0.65);if(b==41) CpGuai(4,10,29,-0.2,0.7),CpGuai(4,14,29,-0.1,0.7),CpGuai(4,18,29,0,0.65);if(b==81) CpGuai(4,5,20,-0.4,0.35),CpGuai(4,10,29,-0.4,0.7),CpGuai(4,14,29,-0.2,0.7),CpGuai(4,30,20,0.25,0.4),CpGuai(4,21,29,0,0.65);if(b==121) CpGuai(4,5,20,-0.2,0.35),CpGuai(4,10,29,-0.2,0.7),CpGuai(4,14,29,-0.1,0.7),CpGuai(4,30,20,0.4,0.4),CpGuai(4,18,29,0,0.65);if(b==161) CpGuai(4,10,29,-0.4,0.7),CpGuai(4,14,29,-0.2,0.7),CpGuai(4,21,29,0,0.6),CpGuai(4,10,29,-0.2,0.7),CpGuai(4,14,29,-0.1,0.7),CpGuai(4,18,29,0,0.65);if(b>=200&&b<=500&&b%40==1) {float r=0,rr;for(int i=1;i<=5;i++){X5:rr=0.7+(rand()%5)/10.0;if(rr==r)goto X5;r=rr;CpGuai(4,i*3+7,29,0,0.5+(rand()%50)/80.0);}}if(b>540&&b<=565&&b%5==1) CpGuai(4,5,8,-2,0.2);if(b>590&&b<=615&&b%5==1) CpGuai(4,30,8,1.5,0.2);if(b>640&&b<=665&&b%5==1) CpGuai(4,5,8,-1.5,0.3);if(b>690&&b<=715&&b%5==1) CpGuai(4,30,8,2,0.3);if(b>=750&&b<=950&&b%20==1) {float r=0,rr;for(int i=1;i<=3;i++){X6:rr=0.7+(rand()%5)/10.0;if(rr==r)goto X6;r=rr;CpGuai(4,i*5+7+(rand()%3),29,0,0.5+(rand()%50)/200.0);}}if(b>=1000&&b<=1300) MesGuai(4,5);}
}
void RandGood(){
    if(Biao>0){Biao--;Guai(-1,0);}
    if(Gd[1]==0){Gd[1]=rand()%1000+1;if(Win==7)Gd[1]=10086;Gd[3]=rand()%16+8;}
    else if(Gd[1]<=5){Guai(-2-Gd[1],Gd[3]);memset(Gd,0,sizeof(Gd));}
    else if(Gd[1]>=20&&Gd[1]<27){Guai(-8,Gd[3]);memset(Gd,0,sizeof(Gd));}
    else if(Gd[1]>=30&&Gd[1]<37){Guai(-9,Gd[3]);memset(Gd,0,sizeof(Gd));}
    else if(Gd[1]>=40&&Gd[1]<70){Gd[2]++;if(Gd[2]%2==1)Guai(-10,Gd[3]);if(Gd[2]>=9)memset(Gd,0,sizeof(Gd));}
    else if(Gd[1]>=70&&Gd[1]<100){Gd[2]++;if(Gd[2]%2==1)Guai(-11,Gd[3]);if(Gd[2]>=9)memset(Gd,0,sizeof(Gd));}
    else if(Boss!=0&&Gd[1]>=450&&Gd[1]<=500){Guai(-2,Gd[3]);memset(Gd,0,sizeof(Gd));}
    else Gd[1]=0;
    for(int i=0;i<20;i++){if(I[i][0]==-1) continue;Setpos(I[i][0],I[i][1]);Color(0);if(I[i][0]==20) cout<<"===";else cout<<"   ";I[i][1]++;if(I[i][0]>=28||I[i][0]<=0||I[i][1]>=29) I[i][0]=I[i][1]=-1;else Color(1),Setpos(I[i][0],I[i][1]),cout<<"��";Color(0);}
}
void Panboss(int bx,int by){
    float Nox[4],Noy[4];Nox[0]=X,Noy[0]=Y;
    if(Down==1&&X==22) Nox[1]=X+1,Noy[1]=Y-0.5,Nox[2]=X-1,Noy[2]=Y-0.5;
    else if(Down==2) Nox[1]=X+1,Noy[1]=Y-0.5,Nox[2]=-10,Noy[2]=-10;
    else if(Down==1||X<18) Nox[1]=X-1,Noy[1]=Y-0.5,Nox[2]=-10,Noy[2]=-10;
    else Nox[1]=X+1,Noy[1]=Y-0.5,Nox[2]=X-1,Noy[2]=Y-0.5;
    for(int i=0;i<3;i++){if((Boss==1||Boss==6)&&Wind==0&&Thun==0&&abs(Nox[i]-bx)<1&&abs(Noy[i]-by)<1&&Bgo1[4]==0) Blo-=20,Bgo1[4]=1,Killb=20,Kill=1;if((Boss==2||Boss==6)&&Wind==0&&Thun==0&&abs(Nox[i]-bx)<1&&abs(Noy[i]-by)<1&&Bgo2[8]==0) Blo-=20,Bgo2[8]=1,Killb=20,Kill=1;}
}
void Boss1(){
    for(int j=0;j<20;j++)if(abs(Bx1-I[j][0])<2&&By1-I[j][1]<=2){Setpos(I[j][0],I[j][1]);if(I[j][0]==20) cout<<"===";else cout<<"   ";I[j][0]=I[j][1]=-1;Bblo-=8+Lv*2;Exp+=2;}
    if(Bbr==Bbl&&Bbr!=0) Bbr=Bbl=0;
    for(int i=1;i<=3+(Bbl-Bbr)/5;i++)if(Bbr<Bbl){Setpos(Bway[Bbr][0],Bway[Bbr][1]);if(Bway[Bbr][0]==20) cout<<"==";else cout<<"  ";Bbr++;}
    if(Bwhat1==5){int bx,by;Color(5);for(int i=0;i<10;i++){bx=Bx1-i*Bvx1/10.0;by=By1-i*Bvy1/10.0;Setpos(bx,by),cout<<"��";Bbl++;Bway[Bbl][0]=bx;Bway[Bbl][1]=by;}Color(0);}
    Bx1-=Bvx1;By1-=Bvy1;
    if(Bwhat1==0){X2:Bwhat1=rand()%7;if(Bwhat1==2||Bwhat1==3){if(By1<=10||By1>25) goto X2;}if(Bwhat1==4){if(By1<=15||Bx1<20) goto X2;Bgo1[2]=Bx1;Bgo1[3]=By1-1;}if(Bwhat1==5) {X0:Bgo1[3]=rand()%4+1;Bvx1=(rand()%101)/20.0;Bvy1=(rand()%101)/20.0;if(Bgo1[3]<=2) Bvx1*=-1;if(Bgo1[3]%2==1) Bvy1*=-1;if(abs(Bvx1)+abs(Bvy1)<=3||Out1)goto X0;}if(Bwhat1==6){if(By1<=17||By1>25) goto X2;}}
    if(Bwhat1==1){Bgo1[1]++,Bgo1[2]++;int R=rand()%(5-Bgo1[1]),r=rand()%(10-Bgo1[2]);if(Out1) R=0;if(R==0) {int vx=Bvx1,vy=Bvy1;Bgo1[1]=0;Bvx1=(rand()%101-20)/50.0;Bvy1=(rand()%101-20)/50.0;if(Bgo1[3]<=2) Bvx1*=-1;if(Bgo1[3]%2==1) Bvy1*=-1;if(Out1) r=0;} if(r==0) Chang1 }
    if(Bwhat1==2){Bgo1[1]++;if(Bgo1[1]>6){Bvy1=-0.3;br++;B[br].x=Bx1,B[br].y=By1-1;B[br].what=6;X3:B[br].vx=(rand()%21-10)/40.0;B[br].vy=(rand()%25)/30.0;if(B[br].vx<=0.8&&B[br].vy<=0.8)goto X3;int rx=rand()%50;if(rx==0) B[br].vx=0;B[br].life=1;}if(Bgo1[1]>8) Chang1}
    if(Bwhat1==3){Bgo1[1]++;if(Bgo1[1]>6&&Bgo1[1]%3==0){Bvy1=-0.3;br++;B[br].x=Bx1,B[br].y=By1-1;B[br].what=8;B[br].life=1;}if(Bgo1[1]>15) Chang1}
    if(Bwhat1==4){Bgo1[1]++;if(Bgo1[1]<=8){Setpos(Bgo1[2],Bgo1[3]);if(Bgo1[1]==1)cout<<" ";else if(Bgo1[1]>1&&Bgo1[2]==20) cout<<"==";else cout<<"  ";Bgo1[2]--;Setpos(Bgo1[2],Bgo1[3]);int r=rand()%4;if(r%2==0) Color(6);else Color(9);if(r<2) cout<<") ";else cout<<"��";Color(0);}if(Bgo1[1]==6) Bgo1[5]=X,Bgo1[6]=Y;if(Bgo1[1]==11){Map(0,(bool)Kill);Setpos(Bgo1[5],Bgo1[6]+1),cout<<"  ";Setpos(Bgo1[5],Bgo1[6]-1),cout<<"  ";Setpos(Bgo1[5]+1,Bgo1[6]),cout<<"  ";Setpos(Bgo1[5]-1,Bgo1[6]),cout<<"  ";int bx,by,bvx=Bgo1[2]-Bgo1[5],bvy=Bgo1[3]-Bgo1[6];Color(6);int i=0;while(1){bx=Bgo1[2]-i*bvx/30.0;by=Bgo1[3]-i*bvy/30.0;if(bx<=5||bx>=30||by<0||by>=29) break;Panboss(bx,by);Setpos(bx,by),cout<<"��";Bbl++;Bway[Bbl][0]=bx;Bway[Bbl][1]=by;i++;}Color(0);Map(-1,0);Chang1}}
    if(Bwhat1==5){Bgo1[1]++,Bgo1[2]++;int R=rand()%(5-Bgo1[1]),r=rand()%(10-Bgo1[2]);if(Out1) R=0;if(R==0) {int vx=Bvx1,vy=Bvy1;Bgo1[1]=0;X1:Bvx1=(rand()%101-20)/20.0;Bvy1=(rand()%101-20)/20.0;if(Bgo1[3]<=2) Bvx1*=-1;if(Bgo1[3]%2==1) Bvy1*=-1;if(abs(Bvx1)+abs(Bvy1)<=3||abs(Bvx1-vx)<=1||abs(Bvy1-vy)<=1)goto X1;if(Out1) r=0;} if(r==0) Chang1 }
    if(Bwhat1==6){Bgo1[1]++;if(Bgo1[1]>6&&Bgo1[1]%10==0){By1-=1;br++;B[br].x=Bx1,B[br].y=By1-1;B[br].what=9;X30:B[br].vy=1;B[br].life=1;}if(Bgo1[1]>31) Chang1}
}
void Boss2(){
    for(int j=0;j<20;j++)if(abs(Bx2-I[j][0])<2&&By2-I[j][1]<=2){Setpos(I[j][0],I[j][1]);if(I[j][0]==20) cout<<"===";else cout<<"   ";I[j][0]=I[j][1]=-1;Bblo-=8+Lv*2;Exp+=2;}
    if(Bbr==Bbl&&Bbr!=0) Bbr=Bbl=0;
    for(int i=1;i<=3+(Bbl-Bbr)/5;i++)if(Bbr<Bbl){Setpos(Bway[Bbr][0],Bway[Bbr][1]);if(Bway[Bbr][0]==20) cout<<"==";else cout<<"  ";Bbr++;}
    Bx2-=Bvx2;By2-=Bvy2;
    if(Bwhat2==0){X21:Bwhat2=rand()%7;if(Bwhat2==2){X31:for(int i=1;i<=3;i++){Bgo2[i*2+1]=rand()%28+1,Bgo2[i*2]=rand()%25+5;if((abs(Bgo2[i*2]-Bx2)<=2&&abs(Bgo2[i*2+1]-By2)<=2)||(abs(Bgo2[i*2]-X)<=2&&abs(Bgo2[i*2+1]-Y)<=2))goto X31;}if(Bgo2[2]==Bgo2[4]||Bgo2[2]==Bgo2[6]||Bgo2[6]==Bgo2[4]||Bgo2[5]==Bgo2[3]||Bgo2[3]==Bgo2[7]||Bgo2[5]==Bgo2[7]) goto X31;}if(Bwhat2==3){Bgo2[2]=rand()%2;}if(Bwhat2==4||Bwhat2==5||Bwhat2==6){Bvy2=-1.5;Bvx2=-0.5;}}
    if(Bwhat2==1){Bgo2[1]++,Bgo2[2]++;int R=rand()%(5-Bgo2[1]),r=rand()%(30-Bgo2[2]);if(Out2) R=0;if(R==0) {int vx=Bvx2,vy=Bvy2;Bgo2[1]=0;Bvx2=(rand()%101-20)/50.0;Bvy2=(rand()%101-20)/50.0;if(Bgo2[3]<=2) Bvx2*=-1;if(Bgo2[3]%2==1) Bvy2*=-1;if(Out2) r=0;} if(r==0) Chang2 }
    if(Bwhat2==2){Bgo2[1]++;float bx,by,bvx,bvy;if(Bgo2[1]<21){for(int i=1;i<=3;i++){bvx=Bgo2[i*2]-Bx2,bvy=Bgo2[i*2+1]-By2;if(Bgo2[1]<=10){Setpos(Bx2+(Bgo2[1]-1)*bvx/10.0,By2+(Bgo2[1]-1)*bvy/10.0);if(abs(Bx2+(Bgo2[1]-1)*bvx/10.0-20)<0.5)cout<<"==";else cout<<"  ";bx=Bx2+Bgo2[1]*bvx/10.0;by=By2+Bgo2[1]*bvy/10.0;Setpos(bx,by);}else Setpos(Bgo2[i*2],Bgo2[i*2+1]);int r=rand()%4;if(r%2==0) Color(3);else Color(10);if(r<=1) cout<<"��";else cout<<"��";Color(0);}}if(Bgo2[1]==21){Map(0,(bool)Kill);Color(3);int j=0;for(int j=0;j<=30;j++)for(int i=1;i<=3;i++)for(int k=1;k<=4;k++){if(k==1) bvx=j,bvy=0;if(k==2) bvx=-j,bvy=0;if(k==3) bvx=0,bvy=j;if(k==4) bvx=0,bvy=-j;bx=Bgo2[i*2]+bvx,by=Bgo2[i*2+1]+bvy;if(bx<=5||bx>=30||by<0||by>=30) {continue;}Panboss(bx,by);Setpos(bx,by),cout<<"��";Bbl++;Bway[Bbl][0]=bx;Bway[Bbl][1]=by;}Color(0);Map(-1,0);Chang2}}
    if(Bwhat2==3){Bgo2[1]++;if(Bgo2[1]<=18){if(Bgo2[3]==0) Setpos(Bgo2[4]-3,Bgo2[5]),cout<<"  ",Setpos(Bgo2[4]+3,Bgo2[5]),cout<<"  ",Color(0),Setpos(20,Bgo2[5]),cout<<"==";if(Bgo2[3]==1) Setpos(Bgo2[4],Bgo2[5]-3.5),cout<<"    ",Setpos(Bgo2[4],Bgo2[5]+2.5),cout<<"    ",Color(0),Setpos(20,Bgo2[5]+2.5),cout<<"====",Setpos(20,Bgo2[5]-3.5),cout<<"====";if(Bgo2[1]%4==0)Bgo2[3]=!Bgo2[3];if(Bgo2[1]%6<3)Color(3);else Color(5);if(Bgo2[3]==0) Setpos(X-3,Y),cout<<"��",Setpos(X+3,Y),cout<<"��",Bgo2[4]=(int)(X+0.5),Bgo2[5]=(int)(Y+0.5);if(Bgo2[3]==1) Setpos(X,Y-3),cout<<" ",Setpos(X,Y+3),cout<<" ",Bgo2[4]=(int)(X+0.5),Bgo2[5]=(int)(Y+0.5);Color(0);}if(Bgo2[1]==18){if(Bgo2[3]==0) Setpos(Bgo2[4]-3,Bgo2[5]),cout<<"  ",Setpos(Bgo2[4]+3,Bgo2[5]),cout<<"  ",Color(0),Setpos(20,Bgo2[5]),cout<<"==";if(Bgo2[3]==1) Setpos(Bgo2[4],Bgo2[5]-3.5),cout<<"    ",Setpos(Bgo2[4],Bgo2[5]+2.5),cout<<"    ",Color(0),Setpos(20,Bgo2[5]+2.5),cout<<"====",Setpos(20,Bgo2[5]-3.5),cout<<"====";}if(Bgo2[1]>18&&Bgo2[1]<=25){Bgo2[3]=Bgo2[2];if(Bgo2[3]==0) Setpos(Bgo2[4]-3,Bgo2[5]),cout<<"  ",Setpos(Bgo2[4]+3,Bgo2[5]),cout<<"  ",Color(0),Setpos(20,Bgo2[5]),cout<<"==";if(Bgo2[3]==1) Setpos(Bgo2[4],Bgo2[5]-3.5),cout<<"    ",Setpos(Bgo2[4],Bgo2[5]+2.5),cout<<"    ",Color(0),Setpos(20,Bgo2[5]+2.5),cout<<"====",Setpos(20,Bgo2[5]-3.5),cout<<"====";if(Bgo2[1]%4<2)Color(3);else Color(5);if(Bgo2[3]==0) Setpos(Bgo2[4]-3,Bgo2[5]),cout<<"��",Setpos(Bgo2[4]+3,Bgo2[5]),cout<<"��";if(Bgo2[3]==1) Setpos(Bgo2[4],Bgo2[5]-3),cout<<" ",Setpos(Bgo2[4],Bgo2[5]+3),cout<<" ";Color(0);}if(Bgo2[1]==25){if(Bgo2[2]==0){Color(3);for(int i=4;i<=29;i++){Setpos(i,Bgo2[5]),cout<<"��";Bbl++;Panboss(i,Bgo2[5]);Bway[Bbl][0]=i;Bway[Bbl][1]=Bgo2[5];}}if(Bgo2[2]==1){Color(3);for(int i=0;i<=28;i++){Setpos(Bgo2[4],i),cout<<"��";Bbl++;Panboss(Bgo2[4],i);Bway[Bbl][0]=Bgo2[4];Bway[Bbl][1]=i;}}Chang2}}
    if(Bwhat2==4||Bwhat2==5||Bwhat2==6){Bgo2[1]++;if(By2>27)Bvy2=0;if(Bx2>23)Bvx2=0;if(Bgo2[1]>13&&Bgo2[1]%3==0){float t=By2-Y,g=0.35;if(Boss==6) t/=2.0;CpGuai(Bwhat2+2,Bx2,By2,(Bx2-X)/t*1.0+(t-1)*g/2.0,1);}if(Bgo2[1]>20) Chang2}
}
void Boss3(){
    #define Bean br++;B[br].what=13;B[br].x=Bx3-1,B[br].y=By3-1;B[br].vy=1;B[br].life=1;
    for(int j=0;j<20;j++)if(abs(Bx3-I[j][0])<2&&By3-I[j][1]<=2){Setpos(I[j][0],I[j][1]);if(I[j][0]==20) cout<<"===";else cout<<"   ";I[j][0]=I[j][1]=-1;Bblo-=8+Lv*2;Exp+=2;}
    Bx3-=Bvx3;By3-=Bvy3;
    if(Bwhat3<=8){if(Bx3>X&&Bvx3<1.5) Bvx3+=0.3;if(Bx3<X&&Bvx3>-1.5) Bvx3-=0.3;}
    if(Bwhat3==0){X22:Bwhat3=rand()%12;if(Bwhat3==11&&abs(Bx3-20)<=1)goto X22;if(Bwhat3==11)Bgo3[2]=rand()%5;}
    if(Bwhat3==1){Bgo3[1]++;if(Bgo3[1]==6){br++;B[br].what=13;B[br].x=(int)Bx3-1,B[br].y=By3-1;B[br].vy=1;B[br].vx=1;B[br].How=(int)Bx3-4;B[br].life=1;br++;B[br].what=13;B[br].x=(int)Bx3-1,B[br].y=By3-1;B[br].vy=1;B[br].vx=-1;B[br].How=(int)Bx3+2;B[br].life=1;br++;B[br].what=13;B[br].x=(int)Bx3-1,B[br].y=By3-1;B[br].vy=1;B[br].life=1;Chang3}}
    if(Bwhat3>=2&&Bwhat3<=6){Bgo3[1]++;if(Bgo3[1]==6){br++;B[br].x=(int)Bx3-1,B[br].y=By3-1;B[br].what=11+Bwhat3;B[br].vy=0.5+(rand()%100)/80.0;if(Bwhat3==5)B[br].vy=B[br].vy*3/4.0;B[br].life=1;Chang3}}
    if(Bwhat3==7){Bgo3[1]++;if(Bgo3[1]==6){br++;B[br].what=14;B[br].x=(int)Bx3-1,B[br].y=By3-1;B[br].vy=1;B[br].vx=1;B[br].How=(int)Bx3-4;B[br].life=1;br++;B[br].what=14;B[br].x=(int)Bx3-1,B[br].y=By3-1;B[br].vy=1;B[br].vx=-1;B[br].How=(int)Bx3+2;B[br].life=1;br++;B[br].what=14;B[br].x=(int)Bx3-1,B[br].y=By3-1;B[br].vy=1;B[br].life=1;Chang3}}
    if(Bwhat3==8){Bgo3[1]++;if(Bgo3[1]==6){br++;B[br].what=15;B[br].x=(int)Bx3-1,B[br].y=By3-1;B[br].vy=1;B[br].vx=1;B[br].How=(int)Bx3-4;B[br].life=1;br++;B[br].what=15;B[br].x=(int)Bx3-1,B[br].y=By3-1;B[br].vy=1;B[br].vx=-1;B[br].How=(int)Bx3+2;B[br].life=1;br++;B[br].what=15;B[br].x=(int)Bx3-1,B[br].y=By3-1;B[br].vy=1;B[br].life=1;Chang3}}
    if(Bwhat3==9){Bvx3=0;Bgo3[1]++;if(Bgo3[1]==6||Bgo3[1]==8){Bean}if(Bgo3[1]>=8)Chang3}
    if(Bwhat3==10){Bvx3=0;Bgo3[1]++;if(Bgo3[1]==6||Bgo3[1]==8||Bgo3[1]==10||Bgo3[1]==12){Bean}if(Bgo3[1]>=12)Chang3}
    if(Bwhat3==11){Bvx3=0;Bgo3[1]++;if(Bgo3[1]>=8)for(int i=1;i<=4;i++){br++;B[br].what=80+100*Bgo3[2]+Bgo3[1]*4+i;B[br].x=Bx3-1,B[br].y=By3-1+i;B[br].vy=4;B[br].life=1;br++;B[br].what=99;B[br].x=Bx3,B[br].y=By3-1+i;B[br].vy=4;B[br].life=1;br++;B[br].what=99;B[br].x=Bx3-2,B[br].y=By3-1+i;B[br].vy=4;B[br].life=1;}if(Bgo3[1]>=20){for(int i=1;i<=4;i++){br++;B[br].what=98;B[br].x=Bx3-1,B[br].y=By3-1+i;B[br].vy=4;B[br].life=1;br++;B[br].what=98;B[br].x=Bx3,B[br].y=By3-1+i;B[br].vy=4;B[br].life=1;br++;B[br].what=98;B[br].x=Bx3-2,B[br].y=By3-1+i;B[br].vy=4;B[br].life=1;}Chang3}}
}
void Ball(int ball){
    if(ball==1){if(Fir<3&&T%8==0) Fir++;if(Fir>0){br++;B[br].what=-13;B[br].x=X;B[br].y=Y+rand()%3-1;B[br].life=1;if(Dis<=30) B[br].a=Disb,B[Disb].a=1,Fir--;else if(Boss!=0) B[br].a=13880086,Fir--;else if(Dis!=13880087) B[br].a=Disb,B[Disb].a=1,Fir--;else if(Dis1!=13880087) B[br].a=Disb1,B[Disb1].a=1,Fir--;else B[br].life=0;Dis=Dis1=13880087;}}
    if(ball==2){if(T%4==0)ib=(ib+1)%20,I[ib][1]=Y-2;if(T%16==0)I[ib][0]=X;if(T%16==4)I[ib][0]=X-1;if(T%16==8)I[ib][0]=X+1;if(T%16==12)I[ib][0]=X-2;if(T%12==9)I[ib][0]=X+2;if(Water==1){for(int i=X-6;i<=X+6;i++)ib=(ib+1)%20,I[ib][0]=i,I[ib][1]=Y-2-0.5*abs(i-X);}}
    if(ball==3){if(Wind>5){if(Y<Ding-1)Vy=5;else Vy=0;if(Up>=1) Vx=-5;if(Down==2) Vx=5;}if(Wind<5){if(Y>Ding-1)Vy=-5;else Vy=0;if(Up>=1) Vx=-5;if(Down==2) Vx=5;}if(Wind==5){if(Boss==2) Ding=12.25;else Ding=6.25;if(Boss!=0) Bblo-=16+Lv*4;if(Boss==1) Chang1 if(Boss==2) Chang2 if(Boss==3) Chang3 system("color 3F");Sleep(20);system("color 6F");Sleep(10);system("color 0F");system("cls");for(int i=bl;i<=br;i++)if(B[i].what>0)B[i].life=0;Setpos(20,0);for(int i=1;i<=60;i++) printf("=");}}
    if(ball==4){if(Thun==1){if(Boss!=0) Bblo-=16+Lv*4;if(Boss==1) Chang1 if(Boss==2) Chang2 if(Boss==3) Chang3 system("color 9F");Sleep(20);system("color 6F");Sleep(10);system("color 0F");system("cls");for(int i=bl;i<=br;i++)if(B[i].what>0)B[i].life=0;Setpos(20,0);for(int i=1;i<=60;i++) printf("=");}}
    if(ball==5){system("cls"); Color(5);Setpos(10,10);cout<<"���츳��";Y:int rr=rand()%4+2;Setpos(12,10);if(rr==Ren) goto Y;if(rr==2)cout<<"˲��";if(rr==3)cout<<"��֮��";if(rr==4)cout<<"������";if(rr==5)cout<<"��������Ծ";Setpos(14,10);cout<<"��ǰ�츳��";if(Ren==1)cout<<"С�޵�";if(Ren==2)cout<<"˲��";if(Ren==3)cout<<"��֮��";if(Ren==4)cout<<"������";if(Ren==5)cout<<"��������Ծ";Setpos(16,10);cout<<"���񣿣�y/n��";G:char g=_getch();if(g=='y')Ren=rr;else if(g!='n')goto G;system("cls");Setpos(20,0);Color(0);for(int i=1;i<=60;i++) printf("=");}
    if(ball==6){Color(4);for(float i=1;i<=Bblo;i+=Bblomax/20.0)cout<<"�{";Color(0);cout<<' '<<Bblo<<"                              ";Color(0);}
    if(ball==7){Color(1);if(Win==7&&T%6<3)Color(3);for(float i=1;i<=Blo;i+=Blomax/20.0)cout<<"�{";Color(0);if(Win==7&&T%6<3)Color(3);printf(" %0.1f                              ",Blo);}
}
int main(){
    system("mode con cols=60 lines=37");CONSOLE_CURSOR_INFO cursor_info={1,0};SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info);srand((unsigned)time(NULL));
    Win=0;Ren=1;Lv=1;Blo=Blomax=100;Expmax=300;Hui=15;X=18,Y=6;
    ReStart:system("cls");memset(B,0,sizeof(B));memset(I,-1,sizeof(I));T=0;bl=0;br=-1;Upt=0;
    Start:Blo=Blomax * 100;Ding=6.25;
    memset(Bgo1,0,sizeof(Bgo1));memset(Bgo2,0,sizeof(Bgo2));memset(Bgo3,0,sizeof(Bgo3));
    if(Win%2==0) T=0;if(Win%2==0&&D==0){if(Win>0)Ball(5);Boss=0;lL:L=rand()%4+1;for(int i=0;i<=Win/2-1;i++)if(L==Ll[i]) goto lL;Ll[Win/2]=L;}if(Win%2==1&&D==0){if(Win==7)Boss=6,T=0,Blomax+=100;else{bl:Boss=rand()%3+1;for(int i=0;i<=3;i++)if(Boss==Bl[i]) goto bl;}Bl[Win/2]=Boss;Bwhat1=Bwhat2=Bwhat3=0,Bx1=10,By1=20,Bx2=15,By2=20,Bx3=21,By3=20;system("color 4C");Sleep(20);system("color 0F");Map(0,1);Sleep(1000);}if(Win%2==1){Bblomax=500+(Win/2)*500;Bblo=Bblomax;if(Boss==2) Ding=12.25;}
    while(1){
        T++;
        if(Wind==0){if(GetAsyncKeyState(VK_LEFT)&0x8000) Vy=-(10-abs(Ding-Y)*1.5)/20.0;if(GetAsyncKeyState(VK_RIGHT)&0x8000) Vy=(10-abs(Ding-Y)*1.5)/20.0;}if(GetAsyncKeyState(VK_UP)&0x8000&&u1==0) {u1++;if(Down==1){Down=0;Up=0;if(Ren==2)Map(-1,0),Vx=0,X=18,Li=5;else Vx=7,Vy=0.3;}else if(Up==0&&Wind==0) {Down=0;Up=1;if(Ren==2)Map(-1,0),Vx=1,X=10,Map(0,3),Li=5;else Vx=2,Vy=0.1;}else if(Up==1&&Wind==0) {Down=0;Up=2;if(Ren==2)Map(-1,0),Vx=1,X-=6,Map(0,3),Li=5;else Vx=1.5,Vy=0.1;}else if(Ren==3&&Up==2&&Wind==0) {Down=0;Up=3;Vx=1;Vy=0.5;Upt=30;}else if(Ren==4&&Up==2&&Wind==0) {Down=0;Up=3;Vx=1.8;Vy=0.1;}}if(GetAsyncKeyState(VK_DOWN)&0x8000&&u2==0) {u2++;if(Down==1&&Ren==5){Down=2;Up=0;Vx=-1.7;}else {Down=1;Up=0;if(Ren==2)Map(-1,0),Vx=0,X=22,Map(0,3),Li=5;else {if(Upt!=0) Map(-1,0),Upt=0;Vx=-7;}}}if((GetAsyncKeyState(VK_UP)&0x8000) ?0:1) u1=0;if((GetAsyncKeyState(VK_DOWN)&0x8000) ?0:1) u2=0;if(kbhit()){char g=_getch();if(g==' ') Sleep(100),Setpos(4,1),Sy++,system("pause");}if(Sy==1) Setpos(4,1),printf("                           "),Sy--;
        if(Drug==0) Blo=fmin((float)Blomax,Blo+Hui/100.0);else if(T%10==0)Blo--;if(T%20==0) {if(Kill!=0) Kill=0;if(Lvl!=0) Lvl=0;}if(Killb>0) Killb--;if(Li>0) Li--;if(Ice>0) Ice--;if(Drug>0) Drug--;if(Magne>0) Magne--;
        if(Fire>0) Ball(1),Fire--;if(Water>0) Ball(2),Water--;if(Wind>0) Ball(3),Wind--;if(Thun>0) Ball(4),Thun--;
        if(Boss==0) NorGuai(L,T%1500);RandGood();if(T%20==1)Exp++;
        if(T%50==1){Exp++;system("cls");Setpos(20,0);Color(0);for(int i=1;i<=60;i++) printf("=");if(Win==0&&T<300){Setpos(4,6);cout<<"��/�� ��Ծ/�·������� Щ΢�ƶ������ּ����أ�"; Setpos(8,6);cout<<"����Կ�������Ч�������������300������������";Setpos(8,6);cout<<"��� 7 ����ʤ������� BOSS �����츳��";Setpos(10,15);cout<<"�ո������ͣ��";}}
        Map(-1,0);
        if(Boss==1) Boss1();if(Boss==2) Boss2();if(Boss==3) Boss3();if(Boss==6) Boss1(),Boss2(),Boss3();
        Move();Map(0,(bool)Kill);Color(0);
        Setpos(1,1);Blo=fmin(Blo,(float)Blomax);if(Boss==0)cout<<"Ѫ��: "<<(int)Blo<<"  ";Color(0);Setpos(1,9),cout<<"��������: "<<D<<"  ";Setpos(2,1);Exp=min(Exp,Expmax);if(Exp>=Expmax)Exp=0,Lv++,Lvl++,Hui++,Blomax+=5;if(Lvl>0)Color(5);cout<<"����: "<<Lv;Color(0);Setpos(2,9);cout<<"����: "<<Exp<<"  ";if(Boss>0) Setpos(3,1),cout<<"Ѫ��     : ",Ball(7);if(Boss>0&&Boss!=6) Setpos(4,1),cout<<"����Ѫ��: ",Ball(6);if(Boss==6) Setpos(1,9),printf("ʱ��: %0.1f s  ",T/15.0);
        if(Win==0) Sleep(55);if(Win==1) Sleep(50);if(Win==2) Sleep(35);if(Win==3) Sleep(40);if(Win==4) Sleep(25);if(Win==5) Sleep(30);if(Win==6) Sleep(20);if(Win>=7) Sleep(17);
        if(Boss==3&&Bblo<=0){for(int i=1;i<=4;i++){br++;B[br].what=98;B[br].x=Bx3-1,B[br].y=By3-1+i;B[br].vy=4;B[br].life=1;br++;B[br].what=98;B[br].x=Bx3,B[br].y=By3-1+i;B[br].vy=4;B[br].life=1;br++;B[br].what=98;B[br].x=Bx3-2,B[br].y=By3-1+i;B[br].vy=4;B[br].life=1;}}
        if((Win%2==0&&T>=1400)||(Win%2==1&&Bblo<=0)||(Win==7&&T>=450)||Blo<=0) {Map(-1,0);break;}
    }
	if(Blo<=0){
		Sleep(1000);
		D++;
		system("color 7F");
		Setpos(15,11);
		Color(4);
		cout<<"GAME OVER...";
		Sleep(2000);
		goto ReStart;
	}
	else if(Win==6){
		system("color 7F");
		Setpos(15,11);
		Color(4);
		cout<<"���30�� !";
		Sleep(2000);
		Setpos(30,0);
		Win++;
		D=0;
	}
	else if(Win==7){
		Sleep(1000);
		system("color 6E");
		Setpos(15,11);
		Color(5);
		cout<<"YOU WIN !";
		Sleep(2000);
		Setpos(30,0);
		return 0;
	}else Sleep(1000),Win++,D=0;
	goto Start;
} 

