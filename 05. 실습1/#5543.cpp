#include <iostream>
using namespace std;
int main()
{
	int bugger_low_price = 2000;
	int drink_low_price = 2000;
	int price;
	for (int i=0; i<3; i++)
	{
		cin >> price;
		if (bugger_low_price > price)
			bugger_low_price = price;
	}

	for (int i=0; i<2; i++)
	{
		cin >> price;
		if (drink_low_price > price)
			drink_low_price = price;
	}

	cout << (bugger_low_price + drink_low_price - 50) << endl;
	
}