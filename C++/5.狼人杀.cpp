#include <iostream>//C++�����������
#include <cstdlib>//ʹ��srand����Ҫ�õ������
#include <ctime>//ʹ��time����Ҫ�õ������
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
	cout<<"                                ����"<<n<<"��"<<endl;
	cout<<"                               ���ڷ������"<<endl;
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
		cout<<"                               ����>>ɱ��<<"<<endl;
	else if(s[n]==2)
		cout<<"                               ����>>Ԥ�Լ�<<"<<endl;
	else if(s[n]==3)
		cout<<"                               ����>>ƽ��<<"<<endl;
	else
		cout<<"                               ����>>��ʦ<<"<<endl;
	cout<<"                             ��Ϸ����5���ʼ"<<endl; 
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
		cout<<"                                 ��"<<day<<"��ʼ"<<endl;
		cout<<"����"<<n<<"��"<<endl;
		long long x;
		for(long long i=1;i<=15;i++) 
		{
			if(i==n&&m[n]==1)
			{
				if(s[n]==1)
				{
					cout<<"                                 ����ɱ��"<<endl;
					for(long long j=1;j<=15;j++)
						if(m[j]==1&&s[j]!=1)
							cout<<j<<" ";
					cout<<endl;
					cout<<"                                 ��ѡ��ɱ��"<<endl; 
					long long a;
					cin>>a;
					m[a]=0;
					cout<<endl;
					cout<<"                                 ɱ��ɱ��"<<a<<"��"; 
					if(s[a]==1)
						cout<<"(ɱ��)"<<endl;
					else if(s[a]==2)
						cout<<"(Ԥ�Լ�)"<<endl;
					else if(s[a]==3)
						cout<<"(ƽ��)"<<endl;
					else
						cout<<"(��ʦ)"<<endl;
					c--;
				}	
				else
				if(s[n]==2)
				{
					cout<<"                                 ����Ԥ�Լ�"<<endl;
					cout<<"                               ";
					for(long long j=1;j<=15;j++)
						if(m[j]==1)
							cout<<j<<" ";
					cout<<endl<<"                              ��ѡ��Ԥ��˭�����"<<endl;
					long long a;
					cin>>a;
					if(s[a]==1)
					{
						cout<<"                        "<<a<<"����ɱ�֣���ע��"<<endl;
						Sleep(1000);
					}
					else
						cout<<"                            "<<a<<"���Ǻ���"<<endl; 
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
				cout<<"                           ɱ��ɱ����"<<a<<"��"; 
				if(s[a]==1)
					cout<<"(ɱ��)"<<endl;
				else if(s[a]==2)
					cout<<"(Ԥ�Լ�)"<<endl;
				else if(s[a]==3)
					cout<<"(ƽ��)"<<endl;
				else
					cout<<"(��ʦ)"<<endl;
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
							cout<<"                           ��ʦ������"<<b<<"��"; 
							if(s[b]==1)
								cout<<"(ɱ��)"<<endl;
							else if(s[b]==2)
								cout<<"(Ԥ�Լ�)"<<endl;
							else if(s[b]==3)
								cout<<"(ƽ��)"<<endl;
							c--;
							if(s[b]==1&&n!=sr)
							{
								cout<<endl<<"							   "<<sr<<"����ɱ�֣�"; 
								cout<<endl<<"								ɱ����������"<<endl;
								cout<<"                          	��Ϸ����"<<endl;
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
							cout<<"                           ��ʦ������"<<b<<"��"<<endl;
							m[b]=1;
							if(m[sr]==0&&n!=sr)
							{
								cout<<endl<<"							   "<<sr<<"����ɱ�֣�"; 
								cout<<endl<<"						ɱ����������"<<endl;
								cout<<"                          	��Ϸ����"<<endl;
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
			cout<<"                                 ���Ƿ�ʦ"<<endl;
			cout<<"���״����"<<endl; 
			for(long long j=1;j<=15;j++)
				if(m[j]==1)
					cout<<j<<" ";
			cout<<endl;
			cout<<"                        ��ѡ�� 1.* ɱ *���� 2.* �� * 3.* ɶ������ *"<<endl;
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
						cout<<"                                ��ѡ����ɱ��"<<endl;
						for(long long i=1;i<=15;i++)
							if(m[i]==1)
								cout<<i<<" ";
						cout<<endl; 
						long long b;
						cin>>b;
						if(s[b]==1)
							cout<<"(ɱ��)"<<endl;
						else if(s[b]==2)
							cout<<"(Ԥ�Լ�)"<<endl;
						else if(s[b]==3)
							cout<<"(ƽ��)"<<endl;
						else
							cout<<"(��ʦ)"<<endl;
						m[b]=0;
						c--; 
						if(m[sr]==0&&n!=sr)
						{
							cout<<endl<<"							   "<<sr<<"����ɱ�֣�"; 
							cout<<endl<<"						ɱ����������"<<endl;
							cout<<"                          	��Ϸ����"<<endl;
							return ;
						}
					}
					else
					{
						cout<<">>��ҩ<<����"<<endl; 
					}
				}
				else if(a==2)
				{
					if(wj>0)
					{
						wj--;
						f=1; 
						cout<<"��ѡ���˸���"<<endl;
						cout<<"����������"<<endl;
						for(long long i=1;i<=15;i++)
							if(m[i]==0)
								cout<<i<<"��,���:"<<s[i]<<" "<<endl;;
						long long b;
						cin>>b;
						m[b]=1;
						c++;
					}
					else
					{
						cout<<">>����ҩˮ<<����"<<endl; 
					}
				}
			}
		}
		Sleep(1000);
		long double p[20]={0};
		cout<<"                                 ��"<<day<<"�����"<<endl;
		cout<<endl;
		if(m[n]==0)
		{
			cout<<"                             ���Ѿ�>>��<<��";	
			break;
		}
		
		cout<<"                                    ��"<<endl;
		cout<<"                       ";
		for(long long i=1;i<=15;i++)
			if(m[i]==1)
				cout<<i<<" ";
		cout<<endl;
		cout<<"                                    ��ͶƱ...."<<endl;
		for(long long i=1;i<=15;i++)
		{
			if(i==n&&m[n]==1)
			{
				cout<<endl;
				cout<<"                                 ��ѡ��Ͷ����"<<endl; 
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
		cout<<"                                 ͶƱ�����"<<endl;
		for(long long i=1;i<=15;i++)
			if(m[i]==1)
				cout<<"                                 "<<i<<"��"<<"  Ʊ����"<<p[i]<<endl; 
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
		cout<<"                                  "<<sw<<"����"<<endl;
		c--;
		cout<<"                              "<<sw<<"�ŵ������"; 
		if(s[sw]==1)
			cout<<"ɱ��"<<endl;
		else if(s[sw]==2)
			cout<<"Ԥ�Լ�"<<endl;
		else if(s[sw]==3)
			cout<<"ƽ��"<<endl;
		else 
			cout<<"��ʦ"<<endl; 
		if(s[sw]==1&&n!=sr)
		{
			cout<<endl<<"							   "<<sr<<"����ɱ�֣�"; 
			cout<<endl<<"						ɱ����������"<<endl;
			cout<<"                          	��Ϸ����"<<endl;
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
			cout<<endl<<"							   "<<sr<<"����ɱ�֣�"<<endl; 
			cout<<endl<<"						ɱ����������"<<endl;
			cout<<"                          	��Ϸ����"<<endl;
			return ;
		}
	}
	while(m[n]==1&&c>1);
	if(sr==n&&m[n]==1)
	{
		cout<<"								��ɱ���������ˣ�����"<<endl;
	}
	cout<<"                          	��Ϸ����"<<endl;
	return ;
}
int main()
{
    srand((int)time(0));  
	char a='1';
	while(1)
	{
		system("cls");
		cout<<"                                   			ɱ����Ϸ"<<endl;
		cout<<"------------------------------------------------------------------------------------------------------------------------";
		cout<<"                                 		   1.��ʼ��Ϸ"<<endl;
		cout<<"                                		  2.�鿴��Ϸ����"<<endl;
		a=getch();
		if(a=='1')
		{
			cout<<"                                 		   1. 15�˳�"<<endl;
			cout<<"                          			2. 30������ս(10����)<�����ڴ�>"<<endl;
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
			cout<<"ɱ�֣�ÿ�����ϵ�ʱ���ʹ��ɱ��Ȩɱ��һ��"<<endl;//1
			cout<<"Ԥ�Լң�ÿ�����Ͽ���֪��һ���˵����"<<endl;//2 
			cout<<"ƽ���޼���,�������ƽ��ʱ���ڵ�5��ӵ��1.5Ʊ��ͶƱȨ"<<endl;//3
			cout<<"���ˣ�����ݽ�����30�����־��У�������ɴ���һ��"<<endl; 
			cout<<"ͶƱϸ��\n����Ϸ�г���������ȫ���ɳ���AI�˹����棩"<<endl;
			cout<<"Ԥ�Լ����Ԥ�Ե�ɱ�ֽ�һֱ����ͶƱ�����Ԥ�Ե����˽���Զ�������ͶƱ"<<endl;
			cout<<"ƽ��Ͷ��һ�����϶���ͶƱ������"<<endl;
			cout<<"********���úó���AI��Ϸ�����ҳ�ɱ��**********"<<endl;
			system("pause");
		}
	}
	return 0;
}
