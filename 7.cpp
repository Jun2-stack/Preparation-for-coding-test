#include<stdio.h>

int main()
{
	char virus[100] = { 0, }, origin[100] = { 0, };
	int i = 0, j = 0;

	scanf_s("%[^\n]s", &virus, sizeof(virus));

	for (i = 0; virus[i] != '\0'; i++)
	{
		if (virus[i] == ' ')
			continue;
		else
		{
			if (virus[i] >= 65 && virus[i] <= 90)
			{
				origin[j] = virus[i] + 32;
			}
			else
				origin[j] = virus[i];
			j++;
		}
	}
	printf("%s", origin);

	return 0;
}