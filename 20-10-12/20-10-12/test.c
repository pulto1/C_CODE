#define _CRT_SECURE_NO_WARNINGS

#include <assert.h>

#include <stdio.h>

void menu()
{
	printf("********************************\n");
	printf("****** 1. add    2. sub ********\n");
	printf("****** 3. mul    4. div ********\n");
	printf("******      0. exit     ********\n");
	printf("********************************\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}


//void calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	ret = pf(x, y);
//	printf("����ǣ�%d\n", ret);
//}

int main()
{
	int x;
	int y;
	int ret;
	int input = 0;

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������������� ");
			scanf("%d%d", &x, &y);
			ret = Add(x, y);
			printf("ret = %d\n", ret);
			break;
		case 2:
			printf("������������� ");
			scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("ret = %d\n", ret);
			break;
		case 3:
			printf("������������� ");
			scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("ret = %d\n", ret);
			break;
		case 4:
			printf("������������� ");
			scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("ret = %d\n", ret);
			break;
		case 0:
			printf("�˳�������\n");
			break;
		default:
			printf("ѡ���������ѡ��!\n");
			break;
		}
	} while (input);

	return 0;
}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//
//int main()
//{
//	//����ָ������
//	//��ŵ��Ǻ���ָ��
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//
//	int(*pf[4])(int, int) = {Add, Sub};
//
//	return 0;
//}

////��������
//void(* signal(int, void(*)(int) )  )(int);
//
//typedef void(*pf_t)(int);
//pf_t signal(int, pf_t);
//
//
//typedef unsigned int uint;
//
////signal��һ����������
////signal�����ĵ�һ��������int���͵�
////signal�����ĵڶ���������һ������ָ�룬�ú���ָ��ָ��һ������Ϊint
////��������Ϊvoid�ĺ���
////signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��һ������Ϊint
////��������Ϊvoid�ĺ���
////
//
//typedef int* pi_t;
//#define PINT_T int*
//#define MAX 1000
//
//int main()
//{
//	int* p1, p2;
//	pi_t p3, p4;
//	PINT_T p5, p6;
//
//	return 0;
//}

//char* my_strcpy(char*dest, const char*src)
//{
//	//printf("hehe\n");
//	//return NULL;
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//����ָ��
//	//printf("%p\n", &my_strcpy);
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	char* (*pf)(char*, const char*) = &my_strcpy;
//	(*pf)(arr1, arr2);
//
//	printf("%s\n", arr1);
//	return 0;
//}