//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
///*
//1������ƥ����ַ��� ������ȫƥ��  ƥ����� = �ַ�������
//2�������ƥһ���ַ�������Ҫ��¼��ƥ���ַ�����ַ
//3�����ƥ��һ��δ�ɹ� �ص���¼��ƥ���ַ�����ַ+1
//4�����ƥ��ı�ƥ���ַ����Ľ�β  ƥ����� ������ �ַ�������
//*/
//
//char * mystrstr(char * dest, char *src)
//{
//	int i = 0;
//	int j = 0;
//
//	//ƥ�����
//	int count = 0;
//	int len = strlen(src);
//	char * p = NULL;
//	while (dest[i] != '\0')
//	{
//		//if (dest[i] == src[i]);
//
//		while (dest[i] == src[j] && dest[i])//ƥ����� = �ַ������� l l     l o
//		{
//			if (!count)
//				//���ƥ��ɹ�һ���ַ�  ��Ҫ��¼λ��
//				p = &dest[i];
//			count++;
//			i++; 
//			j++;
//			//ƥ��ɹ�
//			if (count == len)
//			{
//				return p;
//			}
//
//		}
//
//		//�����ı��ֵ  i  j  count  p
//		if (count < len)
//		{
//			i = i - count;
//			j = 0;
//			//count �� 0
//			count = 0;
//			//continue;
//		}
//
//		i++;
//	}
//
//	//����ֵ���
//	//return p;
//	return NULL;
//}
//
//int main()
//{
//
//	char *p = mystrstr("helllllo", "lllllo");
//	printf("%s\n", p);
//
//	system("pause");
//	return EXIT_SUCCESS;
//}