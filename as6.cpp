//Increment a variable using static fn
//Program to increment a number with static member function.

#include<iostream>
using namespace std;
class incre
{
	static int i;
	public :
	static void in()
	{
		cout << "INCREMENT\n";
		//cout << "Enter a value : ";
		//cin >> i;
		i++;
		cout << " i : " << i << "\n"; 
	}
};
int incre::i=0;
int main()
{
	incre s, s1;
	s.in();
	s1.in();
}

