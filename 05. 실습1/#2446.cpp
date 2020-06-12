#include <iostream>
using namespace std;
void show_blank(int count)
{
	for (int i=0; i<count; i++)
		cout << " ";
}
void show_star(int count)
{
	for (int i=0; i<count; i++)
		cout << "*";
}
void show(int b, int s)
{
	show_blank(b);
	show_star(s-1);
	cout << endl;
}
int main()
{
	int n;
	cin >> n;

	for (int i=0; i<n; i++)
	{
		int blank = i;
		int star = (n-blank)*2;
		show(blank, star);
	}

	for (int i=n-1; i>0; i--)
	{
		int blank = i-1;
		int star = (n-blank)*2;
		show(blank, star);
	}
}