#include<stdio.h>

int sum(int x) // 각 숫자의 개수 계산 함수
{
	int num = 0;
	
	while (x != 0)
	{
		num++;
		x = x / 10;
	}

	return num;
}

int main()
{
	int N, num = 0, i, count = 0;

	scanf_s("%d", &N);

	for (i = 1; i <= N; i++)
	{
		num = sum(i);
		count += num; // 숫자의 총 개수
	}
	printf("%d", count);
}