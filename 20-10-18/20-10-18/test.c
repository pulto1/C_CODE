#define _CRT_SECURE_NO_WARNINGS

#include <string.h>

#include <assert.h>

#include <stdio.h>

int main()
{

	////��ά����
		int a[3][4] = { 0 };
	//	printf("%p\n", &a[0][0]);
	//	printf("%p\n", a[0] + 1);
	//	printf("%p\n", &a[0] + 1);
	//
	
	
		printf("%d\n", sizeof(a));//12*4=48
		printf("%d\n", sizeof(a[0][0]));//4
		printf("%d\n", sizeof(a[0]));//16
		printf("%d\n", sizeof(a[0] + 1));//4
		printf("%d\n", sizeof(*(a[0] + 1)));//4
		printf("%d\n", sizeof(a + 1));//4
		printf("%d\n", sizeof(*(a + 1)));//16
		printf("%d\n", sizeof(&a[0] + 1));//4
		printf("%d\n", sizeof(*(&a[0] + 1)));//16
		printf("%d\n", sizeof(*a));//16
		printf("%d\n", sizeof(a[3]));//16

	////	//�ַ�����

	//	char *p = "abcdef";
	//
	//	printf("%d\n", sizeof(p));//4
	//	printf("%d\n", sizeof(p + 1));//4
	//	printf("%d\n", sizeof(*p));//1
	//	printf("%d\n", sizeof(p[0]));//1   p[0] == *(p+0) == *p
	//	printf("%d\n", sizeof(&p));//4
	//	printf("%d\n", sizeof(&p + 1));//4
	//	printf("%d\n", sizeof(&p[0] + 1));//4
	//
	//	printf("%d\n", strlen(p));//6
	//	printf("%d\n", strlen(p + 1));//5
	//	//printf("%d\n", strlen(*p));//err
	//	//printf("%d\n", strlen(p[0]));//err
	//	printf("%d\n", strlen(&p));//���ֵ
	//	printf("%d\n", strlen(&p + 1));//���ֵ
	//	printf("%d\n", strlen(&p[0] + 1));//5

		//char arr[] = "abcdef";
	
		//printf("%d\n", sizeof(arr));//7
		//printf("%d\n", sizeof(arr + 0));//4
		//printf("%d\n", sizeof(*arr));//1
		//printf("%d\n", sizeof(arr[1]));//1
		//printf("%d\n", sizeof(&arr));//4
		//printf("%d\n", sizeof(&arr + 1));//4
		//printf("%d\n", sizeof(&arr[0] + 1));//4
	
		//printf("%d\n", strlen(arr));//6
		//printf("%d\n", strlen(arr + 0));//6
		////printf("%d\n", strlen(*arr));//err
		////printf("%d\n", strlen(arr[1]));//err
		//printf("%d\n", strlen(&arr));//6
		//printf("%d\n", strlen(&arr + 1));//���ֵ
		//printf("%d\n", strlen(&arr[0] + 1));//5

	//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//	printf("%d\n", sizeof(arr));//6
	//	printf("%d\n", sizeof(arr + 0));//4
	//	printf("%d\n", sizeof(*arr));//1
	//	printf("%d\n", sizeof(arr[1]));//1
	//	printf("%d\n", sizeof(&arr));//4
	//	printf("%d\n", sizeof(&arr + 1));//4
	//	printf("%d\n", sizeof(&arr[0] + 1));//4
	//
	//	printf("%d\n", strlen(arr));//���ֵ
	//	printf("%d\n", strlen(arr + 0));//���ֵ
	//	//printf("%d\n", strlen(*arr));//err
	//	//printf("%d\n", strlen(arr[1]));//err
	//	printf("%d\n", strlen(&arr));//���ֵ
	//	printf("%d\n", strlen(&arr + 1));//���ֵ
	//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ

	//	//һά����
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));//16
	//printf("%d\n", sizeof(a + 0));//4
	//printf("%d\n", sizeof(*a));//4
	//printf("%d\n", sizeof(a + 1));//4
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//4
	//printf("%d\n", sizeof(*&a));//16
	//printf("%d\n", sizeof(&a + 1));//4
	//printf("%d\n", sizeof(&a[0]));//4
	//printf("%d\n", sizeof(&a[0] + 1));//4
	return 0;
}
//////ʵ��һ�����������������ַ����е�k���ַ�
////void left_move(char arr[], int k)
////{
////	int i = 0;
////	int len = strlen(arr);
////	for (i = 0; i < k; i++)
////	{
////		//��ת1���ַ�
////		char tmp = arr[0];
////		int j = 0;
////		for (j = 0; j < len - 1; j++)
////		{
////			arr[j] = arr[j + 1];
////		}
////		arr[len - 1] = tmp;
////	}
////}
//
////�����ַ���
//void reverse(char* left, char* right)
//{
//	char tmp = 0;
//	assert(left != NULL);
//	assert(right != NULL);
//
//	while (left<right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	reverse(arr, arr+k-1);
//	reverse(arr+k, arr + len - 1);
//	reverse(arr, arr+len-1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//
//	printf("%s\n", arr);
//	left_move(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}