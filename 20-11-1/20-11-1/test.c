#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Test(void)
{
	char *str = (char *)malloc(100);
	strcpy(str, "hello");
	free(str);
	str = NULL;

	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}

//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//char *GetMemory(void)
//{
//	//����ջ�ռ��ַ������
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);//?
//}
//
//
//int main()
//{
//	Test();
//	return 0;
//}

//int* f1()
//{
//	����ջ�ռ��ַ������
//	int x = 10;
//	return &x;
//}
//��������Լ��
//����ջ֡
//int main()
//{
//	Test();
//	int *p = f1();
//	printf("hehe\n");
//	printf("%p\n", p);
//
//	return 0;
//}

//void GetMemory(char ** p)
//{
//	*p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//void test()
//{
//	int*p = (int*)malloc(12);
//	if (p == NULL)
//		return;
//	//ʹ�ÿռ�
//	if (1)
//		return;
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//	return 0;
//}

//int main()
//{
//	int*p = (int*)malloc(10*sizeof(int));
//	free(p);
//	free(p);
//
//	return 0;
//}

//int main()
//{
//	int*p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 0;
//	}
//	int i = 0;
//	//�ͷŶ�̬�����ڴ�ռ��һ����-err
//	for (i = 0; i < 5; i++)
//	{
//		*p = 1;
//		p++;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//}

//int main()
//{
//	int*p = malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	//�Զ�̬�����ڴ��Խ�����
//	for (i = 0; i <= 10; i++)
//	{
//		p[i] = i;
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int *p = (int*)malloc(INT_MAX);
//	//���ܴ��ڵĶ�NULLָ��Ľ����ò���
//	*p = 0;
//
//	return 0;
//}

//int main()
//{
//	int *p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 0;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i + 1;
//	}
//	/*������С*/
//	int* ptr = (int*)realloc(p, 200000*sizeof(int));
//	if (ptr == NULL)
//	{
//		perror("realloc");
//	}
//	else
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	for (i = 10; i < 20; i++)
//	{
//		p[i] = i + 1;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	/*int* p = calloc(10, sizeof(int));*/
//	int* p = malloc(10*sizeof(int));
//
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	//��̬�ڴ濪��
//	int* p = (int*)malloc(25*sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 25; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 25; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		//����-�ͷ��ڴ�
//			free(p);
//			p = NULL;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char c = 'w';
//
//	char arr[200] = {0};
//	int arr2[5] = { 0 };
//
//	//��̬�ڴ濪��
//
//	return 0;
//}
