#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main801()
{

	char arr[] = "hello world";//ABllo world
	char * p;
	p = arr;
	*p = 'A';//arr[0] p[0]

	p++;//arr[1] p[1]
	*p = 'B';
	printf("%s\n", arr);
	printf("%d\n", sizeof(arr));//12
	printf("%d\n", strlen(arr));//11
	printf("%d\n", sizeof(p));//4
	printf("%d\n", strlen(p));//1 4 10

	system("pause");
	return EXIT_SUCCESS;
}

int main08()
{
	char * arr = "hello world";//常量区
	char  arr1[] = "hello world";//栈区
	printf("%s\n", arr);
	printf("%c\n", arr[0]);
	char * p = arr;
	printf("%p\n", p);
	//字符串常量是一个常量的数组 可以读取字符或者字符串  但是不能修改
	//p[0] = 'A';
	//*p = 'A';
	p = arr1;
	printf("%p\n", p);

	//p[0] = 'A';
	//*p = 'A';
	//printf("%s", p);
}