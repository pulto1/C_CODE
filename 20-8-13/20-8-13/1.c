#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()

{

	int i = 1;

	while (i <= 100)

	{

		printf("%d ", i);

		i+=2;

	}



	return 0;

}
//int main()
//
//{
//
//	int i = 1;
//	while (i <= 100)
//
//	{
//
//		if (i % 2 == 1)
//
//		{
//
//			printf("%d ", i);
//
//		}
//
//		i++;
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
//	int num = 0;
//
//	scanf("%d", &num);
//
//	if (num % 2 == 1)
//
//	{
//
//		printf("����\n");
//
//	}
//
//	else
//
//	{
//
//		printf("��������\n");
//
//	}
//
//	return 0;
//
//}
//int main()
//
//{
//
//	int a = 10;
//
//	if (4 == a)
//
//	{
//
//		printf("a == 4\n");
//
//	}
//
//	//if (a = 4)//bug
//
//	//{
//
//	//	printf("a == 4\n");
//
//	//}
//
//
//
//	return 0;
//
//}
//int main()
//
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//
//			printf("hehe\n");
//	}
//	else
//	{
//
//		printf("haha\n");
//	}
//	return 0;
//
//}

//int main()
//
//{
//	int age;
//	scanf("%d", &age);
//	if (age < 16)
//
//	{
//
//		printf("����\n");
//
//		printf("����̸����\n");
//
//	}
//
//	else if (age >= 16 && age < 30)
//
//		printf("����\n");
//
//	else if (age >= 30 && age < 50)
//
//		printf("׳��\n");
//
//	else if (age >= 50 && age < 90)
//
//		printf("����\n");
//
//	else
//
//		printf("�ϲ���\n");
//	return 0;
//
//}
//	//if (age < 18)
//
//	//	printf("δ����\n");
//
//
//
//
//
//	int age = 10;
//
//	if (age < 18)
//
//		printf("δ����\n");
//
//	else
//
//		printf("����\n");
//
//
//
//	return 0;
//
////}
////�ṹ��ؼ���
//
//
//
////ѧ������
//
//struct Stu
//
//{
//
//	char name[200];//����
//
//	short age;//����
//
//};
//
//
//
////.   �ṹ�����.�ṹ��ĳ�Ա
//
////->  �ṹ��ָ��->�ṹ��ĳ�Ա
//
//
//
//int main()
//
//{
//
//	//char arr[] = "hello";
//
//	struct Stu s1 = {"����", 30};//s��ѧ���ı���
//
//	struct Stu * ps = &s1;
//
//	//s1.name
//
//	printf("%s %d\n", (*ps).name, (*ps).age);
//
//
//
//	printf("%s %d\n", ps->name, ps->age);
//
//
//
//	printf("%s %d\n", s1.name, s1.age);
//
//
//
//	//struct Stu s2;//s��ѧ���ı���
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
//	char ch = 'b';
//
//	char* pc = &ch;
//
//	*pc = 'w';
//
//	printf("%c\n", ch);
//
//
//
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 11;//* - �����ò�����
//
//	
//
//	printf("%d\n", a);//10 -11?
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
//	int a = 100;//��������a��Ҫ���ڴ�����4���ֽڵĿռ�
//
//	int * p = &a;//& ȡ��ַ������ p����һ��ָ�����
//
//
//
//	char ch = 'w';
//
//	char * pc = &ch;
//
//
//
//	//�ڴ��ӵ�����ʲô���Ƕ���
//
//	//��ָ������ʲô���ǵ�ַ
//
//
//
//	//%p - ��ӡ��ַ - 16���Ƶ�
//
//	printf("%p\n", &a);
//	printf("%p\n",&ch);
//
//
//
//	return 0;
//
//}

////#define������ų���
//
////#define MAX 100
//
//#define �����
//
////�ӷ��ĺ�
//
//#define ADD(X, Y) ((X)+(Y))
//
//int main()
//
//{
//	//int a = MAX;
//
//	//printf("%d\n", a);//100
//
//	int sum = ADD(3,5);
//
//	printf("sum = %d\n", sum);
//
//	return 0;
//
//}