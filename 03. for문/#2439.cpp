#include <iostream>
using namespace std;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;

	for (int i = 1; i < n+1; i++)
	{
		int blank = n-i;
		for (int j = 0; j < blank; j++)
			cout << " ";
		for (int k = 0; k < n-blank; k++)
			cout << "*";
		cout << '\n';
	}
}