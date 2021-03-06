#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	string N;
	char Num[101] = { 0, };
	int i = 0, arr[10] = { 0, }, MAX = 0, index = -1;

	cin >> N;

	strcpy_s(Num, sizeof(Num), N.c_str());

	for (; Num[i] != '\0'; i++) // 자릿수의 숫자 판별 및 카운트
	{
		if (Num[i] == '0')
			arr[0]++;
		else if (Num[i] == '1')
			arr[1]++;
		else if (Num[i] == '2')
			arr[2]++;
		else if (Num[i] == '3')
			arr[3]++;
		else if (Num[i] == '4')
			arr[4]++;
		else if (Num[i] == '5')
			arr[5]++;
		else if (Num[i] == '6')
			arr[6]++;
		else if (Num[i] == '7')
			arr[7]++;
		else if (Num[i] == '8')
			arr[8]++;
		else if (Num[i] == '9')
			arr[9]++;
	}
	for (i = 0; i < 10; i++) // 가장 많이 사용된 숫자 판별
	{
		if (MAX <= arr[i])
		{
			MAX = arr[i];
			index = i;
		}
	}

	printf("%d", index);

	return 0;
}
