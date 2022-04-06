#include<iostream.h>
#include<conio.h>
class student
{
 private:
	 int productno;
	 char product[20];
	 int qty;
	 int price;

 public:
	void get();
	void put();

};
void student::get()
{
cout<<"enter your product no";
cin>>productno;
cout<<"enter your product";
cin>>product;
cout<<"enter your qty";
cin>>qty;
cout<<"enter your price";
cin>>price;
}
void student::put()
{
 cout<<productno<<"\t\t"<<product<<"\t\t"<<qty<<"\t\t"<<price<<endl;
}
void main()
{
clrscr();
student s[5];
for(int i=0;i<5;i++)
{
s[i].get();
}
cout<<"******************************************************************"<<endl;
cout<<"productno\t\tproduct\t\tqty\t\tprice"<<endl;
cout<<"******************************************************************"<<endl;
for(int j=0;j<5;j++)
{
s[j].put();
}

getch();
}




