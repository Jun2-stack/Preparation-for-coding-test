#include<stdio.h>
#include<stdlib.h>

int main()
{
	char input[51] = { 0, };
	char temp[10] = { 0, };
	int NN = 0, i = 0, j = 0, count = 0;

	scanf_s("%s", &input, sizeof(input));

	for (i = 0; input[i] !='\0'; i++) // 숫자만 추출
	{
		if (input[i] < 58)
		{
			temp[j] = input[i];
			j++;
		}
	}
	NN = atoi(temp); // 정수로 변환
	printf("%d\n", NN);

	for (i = 1; i <= NN; i++) // 약수 구하기
	{
		if (NN % i == 0)
		{
			count++;
		}
	}

	printf("%d", count);

	return 0;
}