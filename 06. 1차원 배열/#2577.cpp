#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	
	int result = a * b * c;
	int numbering[10] = {0, };
	
	while(true)
	{
		if (result < 1)
			break;
		int rem = result%10;

		numbering[rem]++;

		result = result / 10;
	}

	for (int i=0; i<10; i++)
		cout << numbering[i] << endl;
}