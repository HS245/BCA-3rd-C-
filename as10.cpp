//.Program to compare two strings using friend operator overloading.

#include<iostream>
#include<cstring>
using namespace std;
class comp
{
	char s1[50];
	public :
	void read()
	{
		cout << "Enter into the string : ";
		cin >> s1;
	}
	friend void operator==(comp, comp);
};
void operator==(comp c1, comp c2)
{
	int c;
	c=strcmp(c1.s1, c2.s1);
	if(c==0)
	{
		cout << "The strings are equal\n";
	}
	else
	{
		cout << "The strings are not equal\n";
	}
}
int main()
{
	comp x, y;
	x.read();
	y.read();
	x==y;
}
