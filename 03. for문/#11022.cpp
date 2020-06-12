#include <iostream>
using namespace std;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int a, b, t;
	cin >> t;

	for (int i = 1; i < t+1; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << a+b << '\n';
	}
}