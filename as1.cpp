//Assign Date with data member day, month and year. Write a program to set date and show the date with inline function. 

#include<iostream>
using namespace std;
class Date
{
	 int d, m, y;
	 
	 public :
	 void input()
	 {	 
	 	 cout << "Format : dd/mm/yyyy\n";	
	 	 cout << "Day : ";
	 	 cin >> d;
	 	 cout << "Month : ";
	 	 cin >> m;
	 	 cout << "Year : ";
	 	 cin >> y;
	 }
	 inline void output()
	 {
	 	cout << "Date : " << d << "/" << m << "/" << y <<"\n";
	 }
};
int main()
{
	Date a;
	a.input();
	a.output();
	
}
