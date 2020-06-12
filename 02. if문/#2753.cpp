#include <iostream>
using namespace std;
int main()
{
	int year, leap_year = 0;
	cin >> year;

	if (year % 4 != 0)
		leap_year = 0;
	else if ((year % 400 == 0) || (year % 100 != 0))
		leap_year = 1;
	
	cout << leap_year << endl;
}