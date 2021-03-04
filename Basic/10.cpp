#include<stdio.h>

int digit_sum(int x)
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
		if (sum > max)
		{
			max = sum;
			res = num;
		}
		else if (sum == max)
			if (num > res)
				res = num;
	}

	printf("%d", res);

	return 0;
}