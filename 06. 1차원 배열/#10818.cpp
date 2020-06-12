#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int* data = new int[n];
	for (int i=0; i<n; i++)
	{
		int input;
		cin >> input;
		data[i] = input;
	}

	sort(data, data+n);
	cout << data[0] << " " << data[n-1] << endl;
}