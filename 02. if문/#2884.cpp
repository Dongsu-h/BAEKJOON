#include <iostream>
using namespace std;
int SubHour(int hour)
{
	if (hour == 0)	hour = 23;
	else			hour--;
	return hour;
}

int main()
{
	int hour, minute;
	cin >> hour >> minute;

	if(minute > 44)
		minute = minute - 45;
	else
	{
		int rem = 45 - minute;
		hour = SubHour(hour);
		minute = 60 - rem;
	}

	cout << hour << " " << minute << endl;
}