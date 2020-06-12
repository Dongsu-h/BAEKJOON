#include <iostream>
#include <algorithm>
using namespace std;

// 1번 - 알고리즘(sort) 이용
// 메모리 - 1984 KB, 시간 0ms, 코드길이 168 B
int main()
{
	int a[3];
	for (int i=0; i < 3; i++)
		cin >> a[i];
	sort(a, a+3);
	cout << a[1] << endl;
}

// 2번 - if문
// 메모리 - 1984 KB, 시간 0ms, 코드길이 515 B
/*
bool compare(int a, int b)
{
	return a > b ? true : false;
}
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int result;
	if (compare(a, b))			
		if (compare(c, a))
			result = a;			// C > A > B
		else
			if (compare(b, c))
				result = b;		// A > B > C
			else
				result = c;		// A > C > B
	else
		if (compare(c, b))
			result = b;			// C > B > A
		else
			if (compare(a, c))
				result = a;		// B > A > C
			else
				result = c;		// B > C > A

	cout << result << endl;
}
*/