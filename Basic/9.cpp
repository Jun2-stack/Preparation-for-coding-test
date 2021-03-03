#include<stdio.h>

int main()
{
	int N, i = 1, j = 1, count = 0;

	scanf_s("%d", &N);

	for (i = 1; i<= N; i++)
	{
		for(j = 1, count = 0; j <= i && j * j <= i; j++) // 효율적인 약수 구하기
			if (i % j == 0)
			{
				count++;
				if (j * j < i) // 약수의 짝 구하기
					count++;
			}

		printf("%d ", count);
	}
	return 0;
}
