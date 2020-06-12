#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	int Quadrant = 0;

	if (x > 0 && y > 0)
		Quadrant = 1;
	else if (x > 0 && y < 0)
		Quadrant = 4;
	else if (x < 0 && y > 0)
		Quadrant = 2;
	else if (x < 0 && y < 0)
		Quadrant = 3;

	cout << Quadrant << endl;
}