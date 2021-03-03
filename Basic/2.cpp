#include<iostream>
using namespace std;

int main()
{
	int A, B, i, sum = 0;

	cin >> A >> B;
	for (i = A; i <= B; i++)
	{
		sum = sum + i;
		if(i!=B)
		{
			cout << i << "+"; // 주어진 마지막 자연수 전까지
		}
		else
		{
			cout << i << "="; // 주어진 마지막 자연수일 때
		}
	}
	cout << sum;

	return 0;
}
