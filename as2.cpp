/*Program to find GCD/HCF of three input numbers using pass by pointer*/

#include<iostream>
using namespace std;
class GCD1
{
	int i, res;
	
	public : 
	
	void logic(int *x, int *y, int *z)
	{
		i=1;
		while(*x>=i && *y>=i && *z>=i)
                {
			if(*x%i==0 && *y%i==0 && *z%i==0)
			{
				res=i;
			}
			i++;

		}

		cout << "GCD/HCF : " << res << "\n";
	}
};

int main()
{
	GCD1 g;
	int a, b, c;
	cout << "Enter 3 numbers : ";
	cin >> a >> b >> c;
	g.logic( &a, &b, &c);
	
	
}
