#include<iostream.h>
#include<conio.h>
class fact
{
int x,i;
public:void get()
	{
	cout<<"Enter the number:";
	cin>>x;
	}
void cal()
{
long int f=1;
for(i=1;i<=x;i++)
{
	f=f*1;
}
cout<<"Fact number is:"<<f;
}
};
void main()
{
clrscr();
fact f1;
f1.get();
f1.cal();
getch();
}
