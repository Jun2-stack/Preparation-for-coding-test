#include<iostream>
using namespace std;

int main()
{
	int N, age, i, MIN = 2147483647, MAX = -2147483648, result = 0;

	cin >> N;

	for (i = 1; i <= N; i++)
	{
		cin >> age;
		if (MIN > age)
		{
			MIN = age;
		}
		if (MAX < age)
		{
			MAX = age;
		}
	}
	
	cout << MAX - MIN;

	return 0;
}