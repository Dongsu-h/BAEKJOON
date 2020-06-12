#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* score = new int[n];

	int total_score = 0;
	int max_score = 0;

	for (int i=0; i<n; i++)
	{
		cin >> score[i];
		total_score += score[i];
		max_score = max_score < score[i] ? score[i] : max_score;
	}
	
	double average_score = (double)total_score / (double)n / (double)max_score * 100;
	cout << average_score << endl;
}