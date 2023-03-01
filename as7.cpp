// Create a class, which keeps track of the number of its instances. Use constructors and destructors to maintain updated information about
active objects.

#include<iostream>
using namespace std;
class create
{
	int a;
	static int c;
	public:
	create(int b)
	{
		a=b;
	}
	static void count()
	{
		c++;
		cout<<"Number of instances created : " << c <<"\n";
	}

	~create()
	{
		cout<<"Delete\n";
	}
};
int create::c;
int main()
{
	create c(5), c1(2);
	c.count();
	c1.count();
}
