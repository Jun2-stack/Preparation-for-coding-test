#include<stdio.h>
#include<stdlib.h>

int main()
{
	char input[51] = { 0, };
	char temp[10] = { 0, };
	int NN = 0, i = 0, j = 0, count = 0;

	scanf_s("%s", &input, sizeof(input));

	for (i = 0; input[i] !='\0'; i++) // ���ڸ� ����
	{
		if (input[i] >= 48 && input[i] <= 57)
		{
			temp[j] = input[i];
			j++;
		}
	}
	NN = atoi(temp); // ������ ��ȯ
	printf("%d\n", NN);

	for (i = 1; i <= NN; i++) // ��� ���ϱ�
	{
		if (NN % i == 0)
		{
			count++;
		}
	}

	printf("%d", count);

	return 0;
}