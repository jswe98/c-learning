#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main09()
{

	char arr[] = "hee��eello world";
	char ch = 'l';
	char ha[] = "��������";
	//char * p=strchr(arr, '��');//"��"��\0
	//if (strchr(arr, 104) != NULL)
	//{
	//	printf("�ҵ��ˣ�");
	//}


	char *p1=strstr(arr, "��");
	printf("%s", p1);

	system("pause");
	return EXIT_SUCCESS;
}