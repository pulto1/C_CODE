#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "1.h"


int count;
int Fib(int n)
{

		if (n == 3)

		{

			count++;

		}


	if (n <= 2)

		return 1;

	else

		return Fib(n - 1) + Fib(n - 2);

}


//int Fib(int n)
//
//{
//
//	int a = 1;
//
//	int b = 1;
//
//	int c = 1;
//
//
//
//	while (n>2)
//
//	{
//
//		c = a + b;
//
//		a = b;
//
//		b = c;
//
//		n--;
//
//	}
//
//	return c;
//
//}
int main()

{
	int n = 0;

	scanf("%d", &n);

	int ret = Fib(n);

	//50 - 2^0

	//49 48 = 2^1

	//48 47 47 46 2^2

	//47 46 46 45 46 45 45 44 2^3

	//2^4

	//....

	//

	

	printf("ret = %d\n", ret);
	printf("count=%d\n", count);



	return 0;

}
//int Fac(int n)
//
//{
//
//	if (n <= 1)
//
//		return 1;
//
//	else
//
//		return n*Fac(n - 1);
//
//}
//
//
//
//int main()
//
//{
//
//	int n = 0;
//
//	scanf("%d", &n);
//
//	int ret = Fac(n);
//
//	printf("%d\n", ret);
//
//
//
//	return 0;
//
//}



////��д��������������ʱ���������ַ����ĳ��ȡ�
//
//
//
////int my_strlen(char* str)
////
////{
////
////	int count = 0;//������-ͳ���ַ��ĸ���
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
//	if (*str != '\0')
//
//	{
//
//		return 1 + my_strlen(str + 1);
//
//	}
//
//	else
//
//	{
//
//		return 0;
//
//	}
//
//}
//
//
//
//int main()
//
//{
//
//	char arr[] = "abc";
//
//	int len = my_strlen(arr);
//
//
//
//	printf("%d\n", len);//3
//
//	return 0;
//
//}

//my_strlen("abc")

//1+my_strlen("bc")

//1+1+my_strlen("c")

//1+1+1+my_strlen("")

//1+1+1+0

//3

//void print(int n)
//
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234 ---> 1 2 3 4
//	//�ݹ���������������أ�
//	print(num);
//	//print(1234)
//
//	//print(123) 4
//
//	//print(12) 3 4
//
//	//print(1) 2 3 4
//
//	//
//
//	//д����
//
//	//1234%10 = 4
//
//	//1234/10=123
//
//	//123%10=3
//
//	//123/10=12
//
//	//%10 /10
//
//	//
//
//	return 0;
//}

//int main()
//
//{
//
//	main();
//
//	return 0;
//
//}

//int main()
//
//{
//
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}





//int main()
//
//{
//
//	//1
//
//	int len = strlen("abcdef");
//
//	printf("%d\n", len);
//
//
//
//	//2 - ��ʽ����
//
//	printf("%d\n", strlen("abcdef"));
//
//	return 0;
//
//}


//int main()
//
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//void Add(int* p)
//
//{
//
//	*p = *p+1;
//
//}
//
//int main()
//
//{
//
//	int num = 0;
//
//	Add(&num);
//
//	printf("num = %d\n", num);//1
//
//
//
//	Add(&num);
//
//	printf("num = %d\n", num);//2
//
//	return 0;
//
//}


////�����ʾ��
//
//int binary_search(int arr[], int k)
//
//{
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//
//	int right = sz - 1;
//
//
//
//	while (left <= right)
//
//	{
//
//		int mid = (left + right) / 2;
//
//		if (arr[mid] < k)
//
//		{
//
//			left = mid + 1;
//
//		}
//
//		else if (arr[mid] > k)
//
//		{
//
//			right = mid - 1;
//
//		}
//
//		else
//
//		{
//
//			return mid;
//
//		}
//
//	}
//
//	//
//
//	return -1;//�Ҳ�����
//
//}
//
//
//
//int main()
//
//{
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	int k = 7;//��������������
//
//
//
//
//
//	//ʵ��һ��������arr�в���k
//
//	//����ҵ��ˣ������±�
//
//	//����Ҳ���������-1
//
//	//ʵ��
//
//	//ʵ�������鴫�ε����ԣ����ݵ���������Ԫ�صĵ�ַ
//
//	int ret = binary_search(arr, k);
//
//	if (ret == -1)
//
//	{
//
//		printf("�Ҳ���ָ��Ԫ��\n");
//
//	}
//
//	else
//
//	{
//
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//
//	}
//
//
//
//	return 0;
//
//}

//int binary_search(int arr[], int k, int sz)
//
//{
//
//	int left = 0;
//
//	int right = sz-1;
//
//
//
//	while (left<=right)
//
//	{
//
//		int mid = (left + right) / 2;
//
//		if (arr[mid] < k)
//
//		{
//
//			left = mid + 1;
//
//		}
//
//		else if (arr[mid] > k)
//
//		{
//
//			right = mid - 1;
//
//		}
//
//		else
//
//		{
//
//			return mid;
//
//		}
//
//	}
//
//	//
//
//	return -1;//�Ҳ�����
//
//}
//
//
//
//int main()
//
//{
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	int k = 7;//��������������
//
//	//ʵ��һ��������arr�в���k
//
//	//����ҵ��ˣ������±�
//
//	//����Ҳ���������-1
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//ʵ��
//
//	int ret = binary_search(arr, k, sz);
//
//	if (ret == -1)
//
//	{
//
//		printf("�Ҳ���ָ��Ԫ��\n");
//
//	}
//
//	else
//
//	{
//
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//
//	}
//
//
//
//	return 0;
//
//}




