#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5 ,6,7,8,9,10};
	int *p1 = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p1 + i));
	}

	/*int (*p)[10] = &arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", (*p)[i]);
	}*/
	return 0;
}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	////int*p3;
//	////p3 + 1;//����4���ֽ�
//	////char* p4;
//	////p4 + 1;//����1�ֽڵ�
//
//	////arr;//��Ԫ�صĵ�ַ
//	////&arr;//ȡ����������ĵ�ַ
//	int*p1 = arr;
//	//p1 + 1;//����һ��Ԫ�ص�-4���ֽ�
//	//int *p3 = &arr;//int(*)[10]
//	printf("p1 = %p\n", p1);
//	printf("p1+1 = %p\n", p1+1);
//
//	int (*p2)[10] =  &arr;//int(*)[10]
//	//p2 + 1;//����һ������ģ�
//	printf("p2 = %p\n", p2);
//	printf("p2+1 = %p\n", p2+1);
//
//	printf("arr = %p\n", arr);
//	printf("arr+1 = %p\n", arr+1);
//
//	printf("&arr = %p\n", &arr);
//	printf("&arr+1 = %p\n", &arr+1);
//
//
//	return 0;
//}

////����ָ��-ָ�� - ָ�������ָ��
////
//int main()
//{
//	//1
//	//char arr[5];
//	//char (*pa)[5] = &arr;
//	//2
//	char* ch[5];//
//	char* (*pc)[5] = &ch;
//
//	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	////int*p = arr;//����������Ԫ�صĵ�ַ
//	////����ָ�� = ����ĵ�ַ
//	////&�������õ���������ĵ�ַ
//
//	//int(* p)[10] = &arr;//p��������ָ�룬��ָ��ָ����һ�����飬����10��Ԫ�أ�ÿ��Ԫ�ص�������int
//
//	return 0;
//}

//int main()
//{
//	char* p1 = "zhangsan";
//	char* p2 = "lisi";
//	char* p3 = "wangwu";
//
//	char* arr[] = { p1, p2, p3 };
//	//char*arr[] = { "zhangsan", "lisi", "wangwu" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3 };//arr1 - int*
//	int arr2[] = { 2, 3, 4 };//arr2 - int*
//	int arr3[] = { 3, 4, 5 };//arr3 - int*
//
//	//ָ�������ʹ��
//	int* arr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int* arr[3] = {&a, &b, &c};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//
//	if (arr1 == arr2)
//	{
//		printf("arr1 == arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2\n");
//	}
//
//	if (p1 == p2)
//	{
//		printf("p1 == p2\n");
//	}
//	else
//	{
//		printf("p1 != p2\n");
//	}
//	return 0;
//}

//int main()
//{
//	//char ch = 'w';
//	//char* pc = &ch;
//	//printf("%c\n", *pc);//'w'
//
//	//char* p = "abcdef";//"abcdef" - �����ַ���
//	//printf("%s\n", p);
//
//	char arr[10] = "abcdef";
//	char* p2 = arr;
//	*p2 = 'h';
//	printf("%s\n", p2);
//
//	return 0;
//	//char*
//	//int*
//	//float*
//	//double*
//	//short*
//	//�ṹ��*
//}


////����һ���������飬ʵ��һ��������
////�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
////����ż��λ������ĺ�벿�֡�
////����ָoffer��
//
//void move_arr(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		//�������һ��ż��
//		while ((left<right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//���ұ���һ������
//		while ((left<right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//1 3 5 7 9 
//	//2 4 6 8 10
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//10
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	move_arr(arr, sz);
//	print_arr(arr, sz);
//}

////����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//	scanf("%d", &money);//20
//	if (money == 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//
//	//total += money;//�����ˮ
//	//empty = money;
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;//����������ˮ���ȵ���
//	//	empty = empty / 2 + empty%2;//�̵�����Ŀ�ƿ
//	//}
//	
//	printf("total = %d\n", total);
//
//	return 0;
//}

//struct student
//{
//	int num;
//	char name[32];
//	float score;
//}stu;//stu�ǽṹ�������
//
//typedef struct student
//{
//	int num;
//	char name[32];
//	float score;
//}stu;//�ṹ��������
//
//int main()
//{
//	return 0;
//}


//
////     *
////    ***
////   *****
////  *******
//// *********
////***********
//// *********
////  *******
////   *****
////    ***
////     *
//
//
//
//int main()
//{
//	//��ӡһ������
//	int line = 0;//�ϰ���������
//	int i = 0; //���ڴ�ӡ������
//	scanf("%d", &line);//6
//	//��->line
//	for (i = 1; i <= line; i++) //����ӡline��
//	{
//		//��ӡһ��
//		//��ӡ�ո��ٴ�ӡ*
//		int j = 0;
//		for (j = 0; j <line-i; j++) //��ӡÿ�еĿո���
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i-1; j++) //��ӡÿ�е�*��
//		{
//			printf("*");
//		}
//		printf("\n");  //��ӡ��һ��֮����л���
//	}
////	//��->line-1
//	for (i = 1; i <= line - 1; i++) //�°벿�ֹ���ӡline-1��
//	{
//		//��ӡһ��
//		//��ӡ�ո��ٴ�ӡ*
//		int j = 1;
//		for (j = 0; j < i; j++) //��ӡÿ�еĿո���
//		{
//			printf(" ");
//		}
//		for (j = 0; j <(line-i)*2-1; j++)//��ӡÿ�е�*��
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
