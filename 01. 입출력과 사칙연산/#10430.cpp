#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int Condition1 = (a+b)%c;
	int Condition2 = ((a%c)+(b%c))%c;
	int Condition3 = (a*b)%c;
	int Condition4 = ((a%c)*(b%c))%c;

	cout << Condition1 << endl;	
	cout << Condition2 << endl;
	cout << Condition3 << endl;
	cout << Condition4 << endl;

}