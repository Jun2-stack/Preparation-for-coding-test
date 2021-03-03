#include<iostream>
using namespace std;

int main()
{
	int N, i, sum = 1;

	cin >> N;
	cout << 1;
	
	for (i = 2; i < N; i++)
	{
		if (N % i == 0)
		{
			sum = sum + i;
			cout << "+" << i;
		}
	}
	cout << "=" << sum;

	return 0;
}
