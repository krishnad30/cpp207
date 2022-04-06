#include<iostream.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
cout<<"enter number";
cin>>a;
cout<<"enter number";
cin>>b;
cout<<"you enter number first is="<<a<<endl;
cout<<"you enter number second is="<<b<<endl;
a=a+b;
b=a-b;
a=a-b;
cout<<"after swap number first is=="<<a<<endl;
cout<<"after swap number second is=="<<b<<endl;
getch();
}