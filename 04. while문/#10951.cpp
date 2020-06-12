#include <iostream>
using namespace std;
int main()
{
	// 하기 주석 해도 4ms, 안해도 4ms
	//cin.tie(NULL);
	//ios::sync_with_stdio(false);
	int a, b;
	while (1)
	{
		cin >> a >> b;
		if (cin.eof() == true)
			break;
		cout << a+b << endl;
	}
}