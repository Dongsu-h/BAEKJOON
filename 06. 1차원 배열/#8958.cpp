#include <iostream>
#include <cstring>
using namespace std;

int calculate_score(char *str)
{
	int total_score = 0;
	int prev_score = 0;
	
	int count = strlen(str);

	for (int i=0; i<count; i++)
	{
		if (str[i] ==  'O')
		{
			total_score += prev_score+1;
			prev_score++;
		}
		else
			prev_score = 0;
	}

	return total_score;
}

int main()
{
	int t_case;
	cin >> t_case;

	for (int i=0; i<t_case; i++)
	{
		char str[80] = { };
		cin >> str;
		
		cout << calculate_score(str) << endl;
	}
}