#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int aa = 10;

char * test()
{
	//�ַ�����  ����λ����ջ��  
	//char arr[] = "hello world";
	//�ַ�������  ���ڳ�������ʱ   ������  ���ܱ��޸ĵ� �ڳ������ʱ ����
	char * arr = "hello world";
	//static 
	aa = 100;
	//��ָ֤���ַ��Ӧ��ֵ�������ݵ�
	return arr;
}
int main04()
{
	char * p = test();
	printf("%p\n", p);
	printf("%s\n", p);

	system("pause");
	return EXIT_SUCCESS;
}

//strstr   hello  world   llo