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
			cout << i << "+"; // A ~ B 
		}
		else
		{
			cout << i << "="; // B일 
		}
	}
	cout << sum;

	return 0;
}
