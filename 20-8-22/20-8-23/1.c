#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>


//дһ�������ж�һ���ǲ�������

//�����귵��1

//�������귵��0



//int is_leap_year(int y)
//
//{
//
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//
//		return 1;
//
//	else
//
//		return 0;
//
//}



int is_leap_year(int y)

{

	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));

}



int main()

{

	int y = 0;

	for (y = 1000; y <= 2000; y++)

	{

		//�ж����겢��ӡ

		if (is_leap_year(y) == 1)

		{

			printf("%d ", y);

		}

	}



	return 0;

}


//// дһ�����������ж�һ�����ǲ�������
//
////����������1
//
////������������0
//
//
//
//int is_prime(int n)
//
//{
//
//	int j = 0; 
//
//	for (j = 2; j <= sqrt(n);j++)
//
//	{
//
//		if (n%j == 0)
//
//			return 0;//��������
//
//	}
//
//return 1;//������
//
//}
//
//
//
//int main()
//
//{
//
//	int i = 0;
//
//	for (i = 101; i <= 200; i+=2)
//
//	{
//
//		//�ж�i�Ƿ�Ϊ����
//
//		if (is_prime(i) == 1)
//
//		{
//
//			printf("%d ", i);
//
//		}
//
//	}
//
//	return 0;
//
//}

//void Swap2(int* px, int* py)
//
//{
//
//	int tmp = *px;
//
//	*px = *py;
//
//	*py = tmp;
//
//}
//
//
//int main()
//
//{
//
//	int x = 0;
//
//	int y = 0;
//
//	scanf("%d%d", &x, &y);//10 20
//
//	//дһ��������x��y��ֵ���н���
//
//	printf("����ǰ��x=%d y=%d\n", x, y);//x=10 y=20
//
//	
//
//	//��ַ����
//
//	Swap2(&x, &y);
//
//
//
//	printf("������x=%d y=%d\n", x, y);//x=20 y=10
//
//	
//
//	return 0;
//
//}

////int main()
////{
////
////	int a = 10;
////
////	int max = get_max(1, 2);
////
////	//max = get_max(1, a);
////
////	//max = get_max(1+4, get_max(2,3));
////
////
////
////	return 0;
////
////}
//
//
////�β�-��ʽ����
//
////��ʵ�δ����βε�ʱ���β���ʵ�ε�һ����ʱ����
//
////���βε��޸Ĳ���Ӱ��ʵ��
//
////
//
////err
//
//void Swap1(int a, int b)
//
//{
//
//	int tmp = a;
//
//	a = b;
//
//	b = tmp;
//
//}
//
//
//
//int main()
//
//{
//
//	int x = 0;
//
//	int y = 0;
//
//	scanf("%d%d", &x, &y);//10 20
//
//	//дһ��������x��y��ֵ���н���
//
//	printf("����ǰ��x=%d y=%d\n", x, y);//x=10 y=20
//
//	//����
//
//	//ʵ��-ʵ�ʲ���
//
//	Swap1(x, y);
//
//	printf("������x=%d y=%d\n", x, y);//x=20 y=10
//
//
//
//	return 0;
//
//}

////void ��ʾ��������������κ�ֵ
//
//void test()//�����ǿ���û�в�����
//
//{
//	printf("test\n");
//}
//
//
//int main()
//
//{
//	test();
//	return 0;
//
//}



//void * memset(void * ptr, int value, size_t num);



//int main()
//
//{
//
//	char arr[] = "hello bit";
//
//	memset(arr, '*', 5);
//
//	printf("%s\n", arr);
//
//
//
//	return 0;
//
//}


//int get_max(int x, int y)
//
//{
//
//	int z = 0;
//
//	if (x > y)
//
//		z = x;
//
//	else
//
//		z = y;
//
//	return z;
//
//}
//
//
//int main()
//
//{
//
//
//
//	//дһ�������ҳ�2�����Ľϴ�ֵ
//
//	int num1 = 0;
//
//	int num2 = 0;
//
//
//
//	scanf("%d%d", &num1, &num2);
//
//
//
//	//�Լ��������Զ��庯��
//
//	int max = get_max(num1, num2);
//
//
//
//	printf("max = %d\n", max);
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
//	char arr[] = "hello bit";
//
//	memset(arr, '*', 5);
//
//	printf("%s\n", arr);
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
//	char arr1[] = "hello bit";
//
//	char arr2[20] = { 0 };
//
//	strcpy(arr2, arr1);//���ú���
//
//	printf("%s\n", arr2);
//
//
//
//	return 0;
//
//}



//f(x) = 2*x+1;


////��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//
//
//
//
//
//int main()
//
//{
//
//	int i = 0;
//
//	int count = 0;
//
//	for (i = 1; i <= 100; i++)
//
//	{
//
//		if (i % 10 == 9)
//
//		{
//
//			count++;
//
//		}
//
//		if (i / 10 == 9)
//
//		{
//
//			count++;
//
//		}
//
//	}
//
//	printf("count = %d\n", count);
//
//	//
//
//	return 0;
//
//}


////дһ�����룺��ӡ100~200֮�������
//
////������ֻ�ܱ�1������������������
//
//
//int main()
//
//{
//
//	int i = 0;
//
//	int count = 0;
//
//	for (i = 101; i <= 200; i+=2)
//
//	{
//
//		//�ж�i�Ƿ�Ϊ����
//
//		//������2->i-1�������Գ�
//
//		int flag = 1;//����i������
//
//		int j = 0;
//
//		for (j = 2; j <= sqrt(i); j++)//sqrt��һ���⺯������i��ƽ�� - math.h
//
//		{
//
//			if (i%j == 0)
//
//			{
//
//				flag = 0;//��ǲ�������
//
//				break;
//
//			}
//
//		}
//
//		//1��2
//
//		if (flag == 1)
//
//		{
//
//			printf("%d ", i);
//
//			count++;
//
//		}
//
//	}
//
//	printf("\ncount = %d\n", count);
//
//	return 0;
//
//}


//int main()
//
//{
//
//	int i = 0;
//
//	int count = 0;
//
//	for (i = 100; i <= 200; i++)
//
//	{
//
//		int flag = 1;//����i������
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//sqrt��һ���⺯������i��ƽ�� - math.h
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//��ǲ�������
//				break;
//			}
//		}
//		//1��2
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main()
//
//{
//
//	int i = 0;
//
//	int count = 0;
//
//	for (i = 100; i <= 200; i++)
//
//	{
//
//		//�ж�i�Ƿ�Ϊ����
//
//		//������2->i-1�������Գ�
//
//		int flag = 1;//����i������
//
//		int j = 0;
//
//		for (j = 2; j < i; j++)
//
//		{
//
//			if (i%j == 0)
//
//			{
//
//				flag = 0;//��ǲ�������
//
//				break;
//
//			}
//
//		}
//
//		//1��2
//
//		if (flag == 1)
//
//		{
//
//			printf("%d ", i);
//
//			count++;
//
//		}
//
//	}
//
//	printf("\ncount = %d\n", count);
//
//	return 0;
//
//}
//int main()
//
//{
//
//	int i = 0;
//
//	int count = 0;
//
//
//
//	for (i = 100; i <= 200; i++)
//
//	{
//
//		//�ж�i�Ƿ�Ϊ����
//
//		//������2->i-1�������Գ�
//
//		int j = 0;
//
//		for (j = 2; j < i; j++)
//
//		{
//
//			if (i%j == 0)
//
//				break;
//
//		}
//
//		//1��2
//
//		if (j >= i)
//
//		{
//
//			printf("%d ", i);
//
//			count++;
//
//		}
//
//	}
//
//	printf("\ncount = %d\n", count);
//
//	return 0;
//
//}

////��ӡ1000�굽2000��֮�������
//
////�����жϵĹ���
//
////1. �ܱ�4�����Ҳ��ܱ�100����������
//
////2. �ܱ�400����Ҳ������
//
//int main()
//
//{
//
//	int year = 0;
//
//	int count = 0;//������
//
//	for (year = 1000; year <= 2000; year++)
//
//	{
//
//		//	//�ж�year�Ƿ�Ϊ���꣬������ʹ�ӡ
//
//			if (((year%4==0)&&(year%100!=0)) || (year%400==0))
//
//			{
//
//				printf("%d ", year);
//
//				count++;
//
//			}
//
//		/*if (year % 4 == 0 && year % 100 != 0)
//
//		{
//
//			printf("%d ", year);
//
//			count++;
//
//		}
//
//		if (year % 400 == 0)
//
//		{
//
//			printf("%d ", year);
//
//			count++;
//
//		}*/
//
//	}
//
//	printf("\ncount = %d\n", count);
//
//	return 0;
//
//}