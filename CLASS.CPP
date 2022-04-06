#include<iostream.h>
#include<conio.h>
class student
{
 private:
	 int rollno;
	 char name[20];
	 char sclass[10];

 public:
	void get();
	void put();

};
void student::get()
{
cout<<"enter your rollno";
cin>>rollno;
cout<<"enter your name";
cin>>name;
cout<<"enter your class";
cin>>sclass;
}
void student::put()
{
 cout<<rollno<<"\t\t"<<name<<"\t\t"<<sclass<<endl;
}
void main()
{
clrscr();
student s1,s2;
s1.get();
s2.get();
cout<<"***************************************"<<endl;
cout<<"rollno\t\tname\t\tclass"<<endl;
cout<<"***************************************"<<endl;
s1.put();
s2.put();

getch();
}




