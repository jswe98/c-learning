#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//1��������Ϊ�������������˻�Ϊָ��
//2���ڴ�������ʱ��Ҫ��������ĸ���

void print01(int * arr,int len)
{
	//��������������������  ����ת��Ϊָ��  sizeof(int *)  4  �����������ֵ������Ϊ�����ѭ����������
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
}
int main301()
{

	int arr[] = { 1,2,3,4,6,0,7,8,9,10 };

	print01(arr,sizeof(arr)/sizeof(arr[0]));
	system("pause");
	return EXIT_SUCCESS;
}
void print(char * arr)
{
	//���ַ�ʽ��������ַ������� \0
	int len = strlen(arr);
	int i = 0;
	while (arr[i] != '\0')
	{
		i++;
	}
}
int main302(void)
{
	//char arr[] = "hello world";
	char arr[] = { 'h','e','l','l','o' };
	print(arr);
	return 0;
}