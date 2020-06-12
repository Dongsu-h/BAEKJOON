#include <iostream>
using namespace std;

int main()
{
	int test;
	cin >> test;
	for (int i=0 ; i<test; i++)
	{
		int student_count;
		cin >> student_count;
		
		int* student_score = new int[student_count];
		int total_score = 0;
		double average_score = 0;
		for (int j=0; j<student_count; j++)
		{
			cin >> student_score[j];
			total_score += student_score[j];
			average_score = (double)total_score / (double)student_count;
		}

		int student_upper_count = 0;
		for (int k=0; k < student_count; k++)
		{
			if ( average_score < student_score[k] )
				student_upper_count++;
		}
		double student_upper_percent = (double)student_upper_count / (double)student_count * 100;

		cout << fixed;
		cout.precision(3);
		cout << student_upper_percent << "%" << endl;
	}
}