//Conversion from degree to radian
//.Program covert degree to radian using conversion routine in destination class.

#include<iostream>
using namespace std;
class Degree
{
	float d;
	public :
	Degree()
	{
		d=0;
	}
	void read()
	{
		cout << "Enter value in degree : ";
		cin>>d;
	}
	float input_d()
	{
		return d;
	}	
};

class Rad
{
	float r;
	public :
	
	Rad()
	{
		r=0;
	}
	Rad(Degree n)
	{
		r=n.input_d()*(3.14/180);
	}
	void display()
	{
		cout<<"Value in radian : "<<r<<"\n";
	}
};
int main()
{
	Degree d1;
	Rad r1;
	d1.read();
	r1=d1;
	r1.display();
}
