#define _CRT_SECURE_NO_WARNINGS

#include <string.h>

#include <stdio.h>

int main()

{

	int a = 10;

	int b = 20;

	int c = 30;

	int* arr[5] = { &a, &b, &c };

	int i = 0;

	for (i = 0; i < 3; i++)

	{

		printf("%d ", *(arr[i]));

	}

	return 0;

}

//int main()
//
//{
//
//	int a = 10;
//
//	
//
//	int* pa = &a;//
//
//	
//
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//
//	**ppa = 100;
//
//
//
//	printf("%d\n", a);
//	printf("%d\n", **ppa);
//	printf("%d\n", *ppa);
//	printf("%d\n", pa);
//	//int** *pppa = &ppa;//pppa������ָ��
//
//
//
//	return 0;
//
//}

//int main()
//
//{
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	int* p = arr;
//
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//
//	{
//
//		printf("%p <====> %p\n", p + i, &arr[i]);
//
//	}
//
//	//printf("%p\n", arr);
//
//	//printf("%p\n", &arr[0]);//��ӡ��һ��Ԫ�صĵ�ַ
//
//
//
//	return 0;
//
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}

////int my_strlen(char* str)
////
////{
////
////	int count = 0;
////
////	while (*str != '\0')
////
////	{
////
////		count++;
////
////		str++;
////
////	}
////
////	return count;
////
////}
//
//
//
//int my_strlen(char* str)
//
//{
//
//	char* start = str;
//
//	while (*str!='\0')
//
//	{
//
//		str++;
//
//	}
//
//	return str - start;
//
//}
//
//
//
//
//
//int main()
//
//{
//
//	char arr[] = "abc";
//
//	int len = my_strlen(arr);//
//
//
//
//	printf("%d\n", len);
//
//
//
//	return 0;
//
//}


//
//
////ָ��-ָ��  �õ�����ָ���ָ��֮���Ԫ�ظ���
//
////ǰ�᣺����ָ��ָ��ͬһ��ռ��
//
//
//
//
//
//int main()
//
//{
//
//	char ch[5] = { 0 };
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	printf("%d\n", &arr[9] - &arr[0]);
//
//	//printf("%d\n", &arr[9] - &ch[0]);//err
//
//
//
//	//
//
//	return 0;
//
//}

//int main()
//
//{
//
//	char arr[] = { 'a', 'b', 'c', 'd' };
//
//
//
//	char* p = &arr[3];
//
//	
//
//	int i = 0;
//
//	for (i = 0; i < 4; i++)
//
//	{
//
//		printf("%c ", *p--);
//
//	}
//
//	/*int i = 0;
//
//	for (i = 0; i < 4; i++)
//
//	{
//
//		printf("%c\n", *p++);
//
//	}
//
//*/
//
//
//
//	/*int i = 0;
//
//	for (i = 0; i < 4; i++)
//
//	{
//
//		printf("%c\n", *(p + i));
//
//	}*/
//
//	return 0;
//
//}

//int main()
//
//{
//
//	//int a = 10;
//
//	//int*p = &a;//��ʼ��
//
//
//
//	//p = NULL;
//
//	int a = 10;
//
//	int*p = &a;//pΪNULLָ�룬û��ָ��Ϸ��ռ�
//
//	if (p != NULL)
//
//	{
//
//		*p = 200;
//
//	}
//
//	return 0;
//
//}

//int* test()
//
//{
//
//	int a = 10;
//
//	return &a;
//
//}
//
//
//
//int main()
//
//{
//
//	int*p = test();//p����һ��Ұָ��
//
//
//
//	return 0;
//
//}

//int main()
//
//{
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	int *p = arr;
//
//	int i = 0;
//
//	for (i = 0; i <= 10; i++)
//
//	{
//
//		*p = 0;
//
//		p++;
//
//	}
//
//
//
//	return 0;
//
//}

//int main()
//
//{
//
//	int *p;//p����Ұָ��
//
//	//p��ָ��������ֲ��������ֲ���������ʼ����Ĭ�������ֵ
//
//	//
//
//	*p = 20;
//
//
//
//	return 0;
//
//}

//int main()
//
//{
//
//	char arr[] = "abcdef";
//
//	int* pc = arr;
//
//
//
//	int i = 0;
//
//	for (i = 0; i < 6; i++)
//
//	{
//
//		printf("%c\n", *(pc + i));
//
//	}
//
//
//
//	return 0;
//
//}

//int main()
//
//{
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	char* pa = arr;
//
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//
//	{
//
//		printf("%d\n", *(pa + i));
//
//	}
//
//
//
//	return 0;
//
//}

//int main()
//
//{
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	int* pa = arr;
//
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//
//	{
//
//		printf("%d\n", *(pa + i));
//
//	}
//
//
//
//	return 0;
//
//}

//int main()
//
//{
//
//	int a = 0x11223344;
//
//	//int* pa = &a;
//
//	//*pa = 0;//����4���ֽ�
//
//
//
//	
//
//	char* pc = &a;
//
//	*pc = 0;//����1���ֽ�
//
//
//
//	return 0;
//
//}

////ָ�����͵�����
//
////1. ָ����н����ò�����ʱ����һ���Է��ʼ����ֽ�
//
////2. ָ�����+-������ʱ��
//
//
//
//
//
//int main()
//
//{
//
//	int a = 0x11223344;
//
//	int* pa = &a;
//
//	char* pc = &a;
//
//
//
//	printf("%p\n", pa);
//
//	printf("%p\n", pa+1);
//
//
//
//	printf("%p\n", pc);
//
//	printf("%p\n", pc+1);
//
//
//
//	return 0;
//
//}

//int main()
//
//{
//
//	//char ch = 'w';//���ڴ�����1���ֽڵĿջ��ܣ���š�w��
//
//	//char * pc = &ch;
//
//
//
//	//printf("%p\n", &a);//ȡ��ַ
//
//
//
//
//
//
//
//
//
//	int a = 10;//���ڴ�����4���ֽڵĿռ䣬���10�������
//
//	int * pa = &a;//��ַҲ��һ��ֵ�����Դ洢��pa�����У� - pa����ָ�����
//
//	*pa = 20;//�����ò�����
//
//
//
//	printf("%d\n", a);//
//
//
//
//	return 0;
//
//}