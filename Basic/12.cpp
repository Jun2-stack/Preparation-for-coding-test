#include<stdio.h>

int cal(int x) // �� ������ ���� ��� �Լ�
{
	int num = 0;

	if (x < 10) // �� �ڸ� ��
		num = x;
	else if (x < 100) // �� �ڸ� ��
		num = 9 + (x - 10 + 1) * 2;
	else if (x < 1000) // �� �ڸ� ��
		num = 9 + 180 + (x - 100 + 1) * 3;
	else if (x < 10000) // �� �ڸ� ��
		num = 9 + 180 + 2700 + (x - 1000 + 1) * 4;
	else if (x < 100000) // �ټ� �ڸ� ��
		num = 9 + 180 + 2700 + 36000 + (x - 10000 + 1) * 5;
	else if (x < 1000000) // ���� �ڸ� ��
		num = 9 + 180 + 2700 + 36000 + 450000 + (x - 100000 + 1) * 6;
	else if (x < 10000000) // �ϰ� �ڸ� ��
		num = 9 + 180 + 2700 + 36000 + 450000 + 5400000 + (x - 1000000 + 1) * 7;
	else if (x < 100000000) // ���� �ڸ� ��
		num = 9 + 180 + 2700 + 36000 + 450000 + 5400000 + 63000000 + (x - 10000000 + 1) * 8;
	else // 100000000
		num = 9 + 180 + 2700 + 36000 + 450000 + 5400000 + 63000000 + 720000000 + 9;

	return num;
}

int main()
{
	int N;

	scanf_s("%d", &N);

	printf("%d", cal(N));
}