//Conversion from F to C
//Program covert temperature from Fahrenheit to Celsius and vice versa

#include<iostream>
using namespace std;
class celsius
{	
	int c;
	public :
	//Basic to class
	celsius()
	{
		c=0;
	}
	celsius(int f)
	{
		c=(f-32)*5/9;
	}
	void display()
	{
		cout << "Temperature in Celsius: " <<c;
	}
	
	//Class to basic
	void logic()
	{
		cout<<"\n\nCLASS TO BASIC\n";
		cout << "Enter temperature in Celsius: ";
		cin>>c;
	}
	operator int()
	{
		int f;
		f=(c*9/5)+32;
		return f;
	}
};
int main()
{
	int f;
	celsius c;
	cout<<"BASIC TO CLASS\n";
	cout<<"Enter temperature in Farenheit : ";
	cin>>f;
	c=f;
	c.display();
	
	//Class to basic
	c.logic();
	f=c;
	cout<<"Temperature in Farenheit : " << f;
}
