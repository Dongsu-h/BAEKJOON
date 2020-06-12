#include <iostream>
using namespace std;

void show_star() { cout << "*"; }
void show_blank() { cout << " "; }
void show_even_star(int count)
{
	if (count == 1)
		show_star();
	else
	{
		for (int i=1; i<count+1; i++)
		{
			if (i%2 == 0)	show_blank();
			else			show_star();
		}
	}
	cout << endl;
}
void show_odd_star(int count)
{
	if (count < 2)
		return;

	for (int i=1; i<count+1; i++)
	{
		if (i%2 == 0)	show_star();
		else			show_blank();
	}
	cout << endl;
}
void show_star(int count)
{
	show_even_star(count);
	show_odd_star(count);
}
int main()
{
	int n;
	cin >> n;

	for (int i=0; i<n; i++)
		show_star(n);
}