#include <iostream>
using namespace std;
int calculate(int n)
{
	int front, rear, result;
	front = n / 10;
	rear = n % 10;

	result = front + rear;
	return (rear*10) + (result%10);
}
int main()
{
	int Number_in, Number_New = -1;
	cin >> Number_in;
	int nCount = 0;
	while(Number_in != Number_New)
	{
		if (nCount == 0)
			Number_New = calculate(Number_in);
		else
			Number_New = calculate(Number_New);

		nCount++;
	}
	cout << nCount << endl;
}