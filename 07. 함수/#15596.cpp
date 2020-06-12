#include <iostream>
#include <vector>
using namespace std;

long long sum(std::vector<int> &a)
{
	int count = a.size();
	int sum_data = 0;
	for (int i=0; i < count; i++)
		sum_data += a.at(i);

	return (long long)sum_data;
}

int main()
{

}