#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main04()
{

	char arr[] = "\0he\nsfds\0llo";
	//char arr[] = { 'h','e','l','l','o' };
	int len = strlen(arr);
	printf("�ַ�������Ч���ȣ�%d\n", len);
	//printf("�ַ����ĳ��ȣ�%d", sizeof(arr));
	int index = 0;
	while (arr[index] != '\0')
	{
		index++;
	}
	printf("%d\n", index);
	system("pause");
	return EXIT_SUCCESS;
}