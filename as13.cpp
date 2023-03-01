//Program to assign the value of one book to another one using copy constructor.
#include<iostream>
#include<cstring>
using namespace std;
class book
{
	char bn[10], an[10];
	int y;
	public :
	
	book(char bn1[10], char an1[10], int y1)
	{
		strcpy(bn, bn1);
		strcpy(an, an1);
		y=y1;
	}
	void read()
	{
		cout<<"Enter book name : ";
		cin>>bn;
		cout<<"Enter author name : ";
		cin>>an;
		cout<<"Enter year : ";
		cin>>y;
	}
	book(book &a)
	{
		strcpy(bn, a.bn);
		strcpy(an, a.an);
		y=a.y;
	}
	void disp()
	{
		cout<<"Book : "<<bn<<"\n";
		cout<<"Book : "<<an<<"\n";
		cout<<"Book : "<<y<<"\n";
	}
};
int main()
{
	book k('Naa', 'Caa', 1);
	k.read();
	book m(k);
	m.disp();
}
