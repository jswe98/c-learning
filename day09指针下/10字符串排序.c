//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//
////�ַ�������  �����ַ������ַ� ����a-z��˳������
////student tree new bee  bee new student tree
//
//void bubble(char ** arr,int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			//�ȶ������ַ���������ĸ
//			//1��ָ���ж�
//			//if (**(arr + j) < **(arr + j + 1))
//			//{
//			//	char * temp = *(arr+j);
//			//	*(arr + j) = *(arr + j + 1);
//			//	*(arr + j + 1) = temp;
//			//}
//			//2�������ж�
//			//if (arr[j][0] > arr[j+1][0])
//			//{
//			//	char * temp = arr[j];
//			//	arr[j] = arr[j+1];
//			//	arr[j + 1] = temp;
//			//}
//			//3������ж�
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