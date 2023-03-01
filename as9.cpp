//Addition of two distances using overloaded + operator
//Program adds two distances using overloaded + operator

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
	void operator+(Dist x)
	{
		km=km+x.km;
		m=m+x.m;
		while(m>=1000)
		{
			km++;
			m=m-1000;
		}
	}
	void display()
	{
		cout << "KM : "<< km <<"\nM : " << m << "\n";
	}
};
int main()
{
	Dist a, b;
	a.read();
	b.read();
	//a+b;
	a.operator+(b);
	a.display();
	
}
