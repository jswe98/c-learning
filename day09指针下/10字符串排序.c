//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//
////字符串排序  根据字符串首字符 按照a-z的顺序排序
////student tree new bee  bee new student tree
//
//void bubble(char ** arr,int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			//比对两个字符串的首字母
//			//1、指针判断
//			//if (**(arr + j) < **(arr + j + 1))
//			//{
//			//	char * temp = *(arr+j);
//			//	*(arr + j) = *(arr + j + 1);
//			//	*(arr + j + 1) = temp;
//			//}
//			//2、数组判断
//			//if (arr[j][0] > arr[j+1][0])
//			//{
//			//	char * temp = arr[j];
//			//	arr[j] = arr[j+1];
//			//	arr[j + 1] = temp;
//			//}
//			//3、混合判断
//			if (*arr[j] > *arr[j + 1])
//			{
//				char * temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	char *arr[] = { "cshdf", "ehsdhf", "bjhdjfhd","abee" };
//
//	/*arr[0][0]
//	student //arr[0]
//	tree//arr[1]
//	new
//	bee
//	*/
//	bubble(arr, 4);
//
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	//printf("%c\n", arr[0][0]);
//	//printf("%c\n", arr[1][0]);
//	//printf("%c\n", arr[2][0]);
//	//printf("%c\n", arr[3][0]);
//
//
//	system("pause");
//	return EXIT_SUCCESS;
//}