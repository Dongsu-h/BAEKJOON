#include <iostream>
using namespace std;
int main()
{
	int a, b, total = 0;
	cin >> a >> b;
	
	total = total +  a * (b%10);
	cout << a * (b%10) << endl;
	b = b/10;
	
	total = total + (a * (b%10)) * 10;
	cout << (a * (b%10)) << endl;
	b = b/10;

	total = total + (a * (b%10)) * 100;
	cout << (a * (b%10)) << endl;

	cout << total << endl;
}