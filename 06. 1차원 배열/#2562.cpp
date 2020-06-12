#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int data[9];

	int data_max = 0;
	int data_max_index;
	
	for (int i=0; i<9; i++)
	{
		int input;
		cin >> input;
		data[i] = input;

		if (data_max < data[i])
		{
			data_max = data[i];
			data_max_index = i;
		}
	}

	cout << data[data_max_index] << endl;
	cout << (data_max_index+1) << endl;
}