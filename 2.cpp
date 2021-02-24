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
			cout << i << "+";
		}
		else
		{
			cout << i << "=";
		}
	}
	cout << sum;

	return 0;
}