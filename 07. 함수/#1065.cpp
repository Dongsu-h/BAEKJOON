#include <iostream>
using namespace std;
bool Han(int number)
{
	if (number < 100)
		return true;
	else if (number == 1000)
		return false;

	int num[3] = {0, };

	for (int i=3; i>0; i--)
	{
		num[i-1] = number%10;
		number = number/10;
	}

	if (num[0]-num[1] == num[1]-num[2])
		return true;

	return false;
}

int main()
{
	int n;
	cin >> n;
	
	int han_count = 0;
	while(n > 0)
	{
		if (Han(n))
			han_count++;
		n--;
	}

	cout << han_count << endl;
}