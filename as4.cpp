//Difference between two object distances and return to the calling object 
//Program to for manipulating the objects of ‘Distance’ class. Support member functions to find difference among distance members of two objects and return the output to calling object.

#include<iostream>
using namespace std;
class Dist
{
	int km, m;
	public:
	void read()
	{	
		cout << "FORMAT KM & M\n";
		cout << "Enter distance : ";
		cin>>km>>m;
	}
	Dist logic(Dist x)
	{
		Dist t;
		t.km=km-x.km;
		t.m=m-x.m;
		while(t.m<0)
		{
			t.m=1000+t.m;
			t.km--;
		}
		return t;
	}
	void display()
	{
		cout << "KM : "<< km <<"\nM : " << m << "\n";
	}
};
int main()
{
	Dist a, b, c;
	a.read();
	b.read();
	c=a.logic(b);
	c.display();
	
}
