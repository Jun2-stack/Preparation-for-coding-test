#include<stdio.h>

int digit_sum(int x) // 자릿수의 합 계산 함수
{
	int tmp, sum = 0;
	while (x > 0)
	{
		tmp = x % 10;
		sum += tmp;
		x /= 10;
	}
	return sum;
}

int main()
{
	int n, num, i, sum, max = -2147000000, res = 0;

	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &num);
		sum = digit_sum(num);
		if (sum > max) // 자릿수의 합이 최댓값인 수 저장
		{
			max = sum;
			res = num;
		}
		else if (sum == max) // 자릿수의 합의 같다면 큰 수 저장
			if (num > res)
				res = num;
	}

	printf("%d", res);

	return 0;
}
