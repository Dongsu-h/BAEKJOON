#include <iostream>
using namespace std;
int main()
{
	int total = 0;
	for (int i=0; i<5; i++)
	{
		int score;
		cin >> score;
		if (score < 40)
			score = 40;
		total += score;
	}
	
	cout << total/5 << endl;
}