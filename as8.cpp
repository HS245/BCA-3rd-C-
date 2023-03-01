//Program to find the negation value using friend operator overloading function.

#include<iostream>
using namespace std;
class NEGATE
{
	int x;
	public:
	void read()
	{
		cout<<"Enter a no. : ";
		cin>>x;
	}
	void disp()
	{
		cout<<"Negation : " << x << "\n";
	}
	friend NEGATE operator-(NEGATE);
};
NEGATE operator-(NEGATE n)
{
	n.x=-n.x;
	return n;
}
int main()
{
 NEGATE a, b;
 a.read();
 b=-a;
 b.disp();
}
