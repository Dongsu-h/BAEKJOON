#include <iostream>
#include <algorithm>
using namespace std;

int GetNumberSize(int n)
{
	if (n > 9999)		return 5;
	else if (n > 999)	return 4;
	else if (n > 99)	return 3;
	else if (n > 9)		return 2;
	else if (n > 0)		return 1;
	else				return 0;
}

int d(int n)
{
	int nSize = GetNumberSize(n);
	int result = 0;
	if (n > 10000)
		return 0;

	switch(nSize)
	{
	case 5:
		result += (n/10000) + d(n - ((n/10000)*10000)) + n/10000;
		break;
	case 4:
		result += (n/1000)*1000 + d(n - ((n/1000)*1000)) + n/1000;
		break;
	case 3:
		result += (n/100)*100 + d(n - ((n/100)*100)) + n/100;
		break;
	case 2:
		result += (n/10)*10 + d(n - ((n/10)*10)) + n/10;
		break;
	case 1:
		result += n + n;
		break;
	}
	return result;
}

int CheckSelfNumber(int n)
{
	return 0;
}

#define CHECK_COUNT 10035
int main()
{
	int number = 0;
	int check[10036] = {0, };
	while(number < 10000)
	{
		int result = d(number);
		check[result]++;
		number++;
	}
	number = 0;
	while(number < 10000)
	{
		if (check[number] == 0)
			cout << number << endl;
		number++;
	}
}