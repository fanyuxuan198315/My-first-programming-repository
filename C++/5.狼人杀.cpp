#include <iostream>//C++输入输出流库
#include <cstdlib>//使用srand函数要用到这个库
#include <ctime>//使用time函数要用到这个库
#include <Windows.h>
#include <conio.h>
long long sr=0;
using namespace std;
void brc()
{
	system("cls");
	long long jy=1,wd=3;
	long long sy=3,wj=3;
	srand((int)time(0));
	long long n=rand()%15+1;
	cout<<"                                你是"<<n<<"号"<<endl;
	cout<<"                               正在分配身份"<<endl;
	Sleep(1500);
	long long m[20];
	for(long long i=1;i<=15;i++)
		m[i]=1;
	long long s[20]={0};
	long long yy[20]={0};
	long long l=0,w=0,j=0,p=0;
	for(long long i=1;i<=15;i++)
	{
		do
		{
			long long a=rand()%4+1;
			if(a==1&&l<1)
			{
				l++;
				s[i]=1;
				sr=i;
			}
			else if(a==2&&w<2)
			{
				w++;
				s[i]=2;
			}
			else if(a==4&&p<3)
			{
				p++;
				s[i]=4;
			}
			else if(a==3&&j<9
			)
			{
				j++;
				s[i]=3;
			}
		}
		while(s[i]==0);
	}
	if(s[n]==1)
		cout<<"                               你是>>杀手<<"<<endl;
	else if(s[n]==2)
		cout<<"                               你是>>预言家<<"<<endl;
	else if(s[n]==3)
		cout<<"                               你是>>平民<<"<<endl;
	else
		cout<<"                               你是>>法师<<"<<endl;
	cout<<"                             游戏将在5秒后开始"<<endl; 
	Sleep(5000);
	long long c=15;
	long long f=0,flag=0;
	long long day=1;
	long long lr;
	long long tp[20]={0};
	do
	{
		lr=0;
		system("cls");
		cout<<"                                 第"<<day<<"晚开始"<<endl;
		cout<<"你是"<<n<<"号"<<endl;
		long long x;
		for(long long i=1;i<=15;i++) 
		{
			if(i==n&&m[n]==1)
			{
				if(s[n]==1)
				{
					cout<<"                                 你是杀手"<<endl;
					for(long long j=1;j<=15;j++)
						if(m[j]==1&&s[j]!=1)
							cout<<j<<" ";
					cout<<endl;
					cout<<"                                 你选择杀掉"<<endl; 
					long long a;
					cin>>a;
					m[a]=0;
					cout<<endl;
					cout<<"                                 杀手杀了"<<a<<"号"; 
					if(s[a]==1)
						cout<<"(杀手)"<<endl;
					else if(s[a]==2)
						cout<<"(预言家)"<<endl;
					else if(s[a]==3)
						cout<<"(平民)"<<endl;
					else
						cout<<"(法师)"<<endl;
					c--;
				}	
				else
				if(s[n]==2)
				{
					cout<<"                                 你是预言家"<<endl;
					cout<<"                               ";
					for(long long j=1;j<=15;j++)
						if(m[j]==1)
							cout<<j<<" ";
					cout<<endl<<"                              你选择预言谁的身份"<<endl;
					long long a;
					cin>>a;
					if(s[a]==1)
					{
						cout<<"                        "<<a<<"号是杀手，请注意"<<endl;
						Sleep(1000);
					}
					else
						cout<<"                            "<<a<<"号是好人"<<endl; 
				}
			}
			else if(s[i]==1&&m[i]==1)
			{
				long long a;
				do
				{
					a=rand()%15+1;
				}
				while(a==i||m[a]==0||s[a]==1);
				cout<<"                           杀手杀掉了"<<a<<"号"; 
				if(s[a]==1)
					cout<<"(杀手)"<<endl;
				else if(s[a]==2)
					cout<<"(预言家)"<<endl;
				else if(s[a]==3)
					cout<<"(平民)"<<endl;
				else
					cout<<"(法师)"<<endl;
				m[a]=0;
				c--;
				break;//
			}
			else if(s[i]==2)
			{
				if(flag==0||m[flag]==0)
				{
					long long a;
					do
					{
						a=rand()%15+1;
					}
					while(a==i||m[a]==0);
					if(s[a]==1)
						yy[a]=1;	
					else if(s[a]==3)
						yy[a]=3;
				}	
			}
			else if(s[i]==4)
			{
				f=0;
				while(f==0)
				{
					long long a;
					a=rand()%3+1;
					if(a==3)break;
					if(a==1)
					{
						if(sy>0)
						{
							sy--;
							f=1; 
							long long b;
							do
							{
								b=rand()%15+1;
								b=rand()%15+1;
							}
							while(b==i||m[b]==0);
							m[b]=0;
							cout<<"                           法师毒死了"<<b<<"号"; 
							if(s[b]==1)
								cout<<"(杀手)"<<endl;
							else if(s[b]==2)
								cout<<"(预言家)"<<endl;
							else if(s[b]==3)
								cout<<"(平民)"<<endl;
							c--;
							if(s[b]==1&&n!=sr)
							{
								cout<<endl<<"							   "<<sr<<"号是杀手！"; 
								cout<<endl<<"								杀手已死亡！"<<endl;
								cout<<"                          	游戏结束"<<endl;
								return ;
							}
							break;//
						}
					}
					else if(a==2&&day>1)
					{
						if(jy>0)
						{
							jy--;
							f=1; 
							long long b;
							do
							{
								b=rand()%15+1;
							}
							while(b==i||m[b]==1);
							c++;
							cout<<"                           法师复活了"<<b<<"号"<<endl;
							m[b]=1;
							if(m[sr]==0&&n!=sr)
							{
								cout<<endl<<"							   "<<sr<<"号是杀手！"; 
								cout<<endl<<"						杀手已死亡！"<<endl;
								cout<<"                          	游戏结束"<<endl;
								return ;
							}
							break;//
						}
					}
					
				}
			}
		}
		if(s[n]==4)
		{
			cout<<"                                 你是法师"<<endl;
			cout<<"存活状况："<<endl; 
			for(long long j=1;j<=15;j++)
				if(m[j]==1)
					cout<<j<<" ";
			cout<<endl;
			cout<<"                        你选择 1.* 杀 *还是 2.* 救 * 3.* 啥都不做 *"<<endl;
			long long a,f=0;
			while(f==0)
			{
				cin>>a;
				if(a==3) break;
				if(a==1)
				{
					if(wd>0)
					{
						wd--;
						f=1; 
						cout<<"                                你选择了杀人"<<endl;
						for(long long i=1;i<=15;i++)
							if(m[i]==1)
								cout<<i<<" ";
						cout<<endl; 
						long long b;
						cin>>b;
						if(s[b]==1)
							cout<<"(杀手)"<<endl;
						else if(s[b]==2)
							cout<<"(预言家)"<<endl;
						else if(s[b]==3)
							cout<<"(平民)"<<endl;
						else
							cout<<"(法师)"<<endl;
						m[b]=0;
						c--; 
						if(m[sr]==0&&n!=sr)
						{
							cout<<endl<<"							   "<<sr<<"号是杀手！"; 
							cout<<endl<<"						杀手已死亡！"<<endl;
							cout<<"                          	游戏结束"<<endl;
							return ;
						}
					}
					else
					{
						cout<<">>毒药<<不足"<<endl; 
					}
				}
				else if(a==2)
				{
					if(wj>0)
					{
						wj--;
						f=1; 
						cout<<"你选择了复活"<<endl;
						cout<<"阵亡名单："<<endl;
						for(long long i=1;i<=15;i++)
							if(m[i]==0)
								cout<<i<<"号,身份:"<<s[i]<<" "<<endl;;
						long long b;
						cin>>b;
						m[b]=1;
						c++;
					}
					else
					{
						cout<<">>复活药水<<不足"<<endl; 
					}
				}
			}
		}
		Sleep(1000);
		long double p[20]={0};
		cout<<"                                 第"<<day<<"晚结束"<<endl;
		cout<<endl;
		if(m[n]==0)
		{
			cout<<"                             你已经>>死<<了";	
			break;
		}
		
		cout<<"                                    存活："<<endl;
		cout<<"                       ";
		for(long long i=1;i<=15;i++)
			if(m[i]==1)
				cout<<i<<" ";
		cout<<endl;
		cout<<"                                    请投票...."<<endl;
		for(long long i=1;i<=15;i++)
		{
			if(i==n&&m[n]==1)
			{
				cout<<endl;
				cout<<"                                 你选择投几号"<<endl; 
				long long a=99;
				while(a==99) 
				{
					cin>>a;
					if(a==99)
						for(long long i=1;i<=15;i++)
							if(m[i]==1)
								cout<<"                                    "<<i<<"."<<s[i]<<endl;
				}
				if(s[i]==3&&day>4)
					p[a]+=1.5;
				else
					p[a]++;	
				cout<<endl;
				cout<<"                                    "<<i<<"->"<<a<<endl;
				if(s[a]==3)
				{
					tp[a]=i;
				}
			}
			else if(s[i]==1&&m[i]==1)
			{
				long long a;
				do
				{
					a=rand()%15+1;	
				}
				while(m[a]==0||a==i||s[a]==1);
				p[a]++;
				cout<<"                                    "<<i<<"->"<<a<<endl;
				if(s[a]==3)
				{
					tp[a]=i;
				}
			}
			else if(s[i]==2&&m[i]==1)
			{
				if(flag!=0)
				{
					p[f]++;
					cout<<"                                    "<<i<<"->"<<flag<<endl;
				}
				else
				{
					long long a;
					do
					{
						a=rand()%15+1;	
					}
					while(m[a]==0||a==i||yy[a]==3);
					p[a]++;
					if(s[a]==3)	
					{
						tp[a]=i;
					}
					cout<<"                                    "<<i<<"->"<<a<<endl;
				}
			} 
			else if(s[i]==3&&m[i]==1)
			{
				if(tp[i]==0)
				{
					long long a;
					do
					{
						a=rand()%15+1;	
					}
					while(m[a]==0||a==i);
					p[a]++;
					cout<<"                                    "<<i<<"->"<<a<<endl;
				}
				else
				{
					if(m[tp[i]]==1)
					{
						p[tp[i]]++;
						cout<<"                                    "<<i<<"->"<<tp[i]<<endl;
					}
					else
					{
						long long a;
						do
						{
							a=rand()%15+1;	
						}
						while(m[a]==0||a==i);
						p[a]++;
						cout<<"                                    "<<i<<"->"<<a<<endl;
					}
				}
			}
			else if(s[i]==4&&m[i]==1)
			{
				long long a;
				do
				{
					a=rand()%15+1;	
				}
				while(m[a]==0||a==i);
				p[a]++;
				cout<<"                                    "<<i<<"->"<<a<<endl;
			}
		}
		system("cls");
		cout<<"                                 投票情况："<<endl;
		for(long long i=1;i<=15;i++)
			if(m[i]==1)
				cout<<"                                 "<<i<<"号"<<"  票数："<<p[i]<<endl; 
		long long sw,max=-100; 
		for(long long i=1;i<=15;i++)
		{
			if(p[i]>max)
			{
				sw=i;
				max=p[i];
			}
		}
		m[sw]=0;
		cout<<"                                  "<<sw<<"死了"<<endl;
		c--;
		cout<<"                              "<<sw<<"号的身份是"; 
		if(s[sw]==1)
			cout<<"杀手"<<endl;
		else if(s[sw]==2)
			cout<<"预言家"<<endl;
		else if(s[sw]==3)
			cout<<"平民"<<endl;
		else 
			cout<<"法师"<<endl; 
		if(s[sw]==1&&n!=sr)
		{
			cout<<endl<<"							   "<<sr<<"号是杀手！"; 
			cout<<endl<<"						杀手已死亡！"<<endl;
			cout<<"                          	游戏结束"<<endl;
			return ;
		}
		day++;  
		if(s[n]!=1)   
		{
			for(long long i=1;i<=15;i++)
			if(s[i]==1&&m[i]==1)
				lr=1;
		}
		else
		{
			if(s[n]==1&&c==2)
				lr=0;
		}
		system("pause"); 
		cout<<endl;
		if(m[sr]==0&&n!=sr)
		{
			cout<<endl<<"							   "<<sr<<"号是杀手！"<<endl; 
			cout<<endl<<"						杀手已死亡！"<<endl;
			cout<<"                          	游戏结束"<<endl;
			return ;
		}
	}
	while(m[n]==1&&c>1);
	if(sr==n&&m[n]==1)
	{
		cout<<"								你杀掉了所有人！！！"<<endl;
	}
	cout<<"                          	游戏结束"<<endl;
	return ;
}
int main()
{
    srand((int)time(0));  
	char a='1';
	while(1)
	{
		system("cls");
		cout<<"                                   			杀手游戏"<<endl;
		cout<<"------------------------------------------------------------------------------------------------------------------------";
		cout<<"                                 		   1.开始游戏"<<endl;
		cout<<"                                		  2.查看游戏规则"<<endl;
		a=getch();
		if(a=='1')
		{
			cout<<"                                 		   1. 15人场"<<endl;
			cout<<"                          			2. 30人娱乐战(10猎人)<敬请期待>"<<endl;
			a='2';
			while(a=='2')
			{
				a=getch();
				switch(a)
				{
					case '1':
						brc();
					break;
				}
				if(a=='1')
					break;
			}
			if(a=='1')
				break;
		}
		else if(a=='2')
		{
			cout<<"杀手：每当晚上的时候可使用杀人权杀掉一人"<<endl;//1
			cout<<"预言家：每天晚上可以知道一个人的身份"<<endl;//2 
			cout<<"平民：无技能,当玩家是平民时，在第5天拥有1.5票的投票权"<<endl;//3
			cout<<"猎人：此身份仅限于30人娱乐局中，死亡后可带走一人"<<endl; 
			cout<<"投票细则：\n（游戏中除了你以外全是由超级AI人工代替）"<<endl;
			cout<<"预言家如果预言到杀手将一直对他投票，如果预言到好人将永远不会对他投票"<<endl;
			cout<<"平民将投上一个晚上对他投票他的人"<<endl;
			cout<<"********利用好超级AI游戏规则找出杀手**********"<<endl;
			system("pause");
		}
	}
	return 0;
}
