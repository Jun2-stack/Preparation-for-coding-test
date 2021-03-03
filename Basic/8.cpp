#include<stdio.h>

int main()
{
	char str[31] = { 0, };
	int i = 0, count = 0;

	scanf_s("%s", &str, sizeof(str));

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '(') // 왼쪽 괄호
			count++;
		else // 오른쪽 괄호
			count--;
	}
	if (str[i-1] == '(') // 마지막 괄호 확인
	{
		printf("NO");
		return 0;
	}
	if (count == 0)
		printf("YES");
	else
		printf("NO");

	return 0;
}
