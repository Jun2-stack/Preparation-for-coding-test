#include<iostream>
using namespace std;

int main()
{
	int n, m, i, sum = 0;

	cin >> n >> m;
	for (i = 1; i <= n; i++)
	{
		if (i % m == 0) // m의 배수의 합 구하기
		{
			sum = sum + i;
		}
	}
	cout << sum;

	return 0;
}
