#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
1������ƥ����ַ��� ������ȫƥ��  ƥ����� = �ַ�������
2�������ƥһ���ַ�������Ҫ��¼��ƥ���ַ�����ַ
3�����ƥ��һ��δ�ɹ� �ص���¼��ƥ���ַ�����ַ+1
4�����ƥ��ı�ƥ���ַ����Ľ�β  ƥ����� ������ �ַ�������
*/

char * mystrstr(char * dest, char *src)
{
	char * p = NULL;
	char * temp = src;
	while (*dest)//
	{
		p = dest;
		while (*dest == *temp && *dest)//ƥ����� = �ַ������� l l     l o
		{
			dest++;
			temp++;
		}
		if (!*temp)//\0
			//if (*temp=='\0')//\0
			return p;
		else
			temp = src;
		dest = p;
		dest++;
	}

	//����ֵ���
	//return p;
	return NULL;
}

int main07()
{

	char *p = mystrstr("helllo", "lol");
	printf("%s\n", p);

	system("pause");
	return EXIT_SUCCESS;
}