#include<iostream.h>
#include<conio.h>
void main()
{
	int n1=0,n2=1,n3,i,number;
	clrscr();
	cout<<"enter number";
	cin>>number;
	cout<<n1<<endl<<n2<<endl;
	for(i=2;i<number;i++)
	{
	n3=n1+n2;
	cout<<n3<<endl;
	n1=n2;
	n2=n3;
	}
	getch();
}
