#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main04()
{

	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
		{
			printf("a�� ��%d\n", a);
		}
		else
		{
			printf("c�� : %d\n", c);
		}
	}
	else
	{
		if (b > c)
		{
			printf("b�� ��%d\n", b);
		}
		else
		{
			printf("c�� : %d\n", c);

		}
	}
	system("pause");
	return EXIT_SUCCESS;
}