// Program add three times (hh:mm:ss) using passing object by value method.

#include<iostream>
using namespace std;
class TIME
{
	int h, m,s;
	public :
	void read()
	{
		cout << "Format : hh:mm:ss\n";
		cout << "Enter hour :";
		cin >> h;
		cout << "Enter minute :";
		cin >> m;
		cout << "Enter second :";
		cin >> s;
	}
	void logic(TIME x, TIME y)
	{
		h=h + x.h + y.h;
		m=m + x.m + y.m;
		s=s + x.s + y.s;
		while(m>=60)
		{
			h++;
			m=m-60;
		}
		while(s>=60)
		{
			m++;
			s=s-60;
		} 
		cout << "Time : " << h << ":" << m << ":" << s <<"\n";
	}
};
int main()
{
	TIME a, b, c;
	a.read();
	b.read();
	c.read();
	a.logic( b, c);
}
