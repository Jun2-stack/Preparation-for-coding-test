#include<stdio.h>

int sum(int x) // �� ������ ���� ��� �Լ�
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
		count += num; // ������ �� ����
	}
	printf("%d", count);
}