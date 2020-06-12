#include <iostream>
using namespace std;
int main()
{
	int data[10] = {0, };
	int rem[42] = {0, };
	for (int i=0; i<10; i++)
	{
		int input;
		cin >> input;
		data[i] = input % 42;

		rem[data[i]]++;
	}
	
	int result = 0;
	for (int i=0; i<42; i++)
	{
		if (rem[i] != 0)
			result++;
	}
	cout << result << endl;
}