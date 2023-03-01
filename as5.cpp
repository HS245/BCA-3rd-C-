//Add 2 complex no. using friend fn
// Program add two complex nos. using friend function.

#include<iostream>
using namespace std;
class CADD
{
	int r, i;
	public :
	void read()
	{
		cout << "Enter a complex number : ";
		cin>>r>>i;
	}
	friend void add(CADD, CADD);
};
void add(CADD a, CADD b)
{
	int r, i;
	r=a.r+b.r;
	i=a.i+b.i;
	cout << "Result : " << r << " + i" << i <<"\n";
}
int main()
{
	CADD c1, c2;
	c1.read();
	c2.read();
	add(c1, c2);
}
