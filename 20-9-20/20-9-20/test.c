#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



////��Ŀ���ƣ�
//
////��ӡ���������Ƶ�����λ��ż��λ
//
////��Ŀ���ݣ�
//
////��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//
//
//
//int main()
//
//{
//
//	int m = 0;
//
//	scanf("%d", &m);
//
//
//
//	//11
//
//	//00000000000000000000000000001011
//
//	//
//
//	int i = 0;
//
//	//ż��λ
//
//	for (i = 31; i >= 1; i -= 2)
//
//	{
//
//		printf("%d ", (m >> i) & 1);
//
//	}
//
//	printf("\n");
//
//	//����λ
//
//	for (i = 30; i >= 0; i -= 2)
//
//	{
//
//		printf("%d ", (m >> i) & 1);
//
//	}
//
//	return 0;
//
//}




//���������������в�ͬλ�ĸ���

//��Ŀ���ݣ�

//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��

//�������� :

//1999 2299

//������� : 7

//

//11

//00000000000000000000000000001010

//00000000000000000000000000000001

//00000000000000000000000000000001

//int get_diff_bit(int m, int n)
//
//{
//
//	int i = 0;
//
//	int count = 0;
//
//	for (i = 0; i < 32; i++)
//
//	{
//
//		if (((m >> i) & 1) != ((n >> i) & 1))
//
//		{
//
//			count++;
//
//		}
//
//	}
//
//	return count;
//
//}


//
//#include <stdio.h>
//
//
//
//int get_diff_bit(int m, int n)
//
//{
//
//	int i = 0;
//
//	int count = 0;
//
//	int tmp = m^n;//ͳ��tmp���м���1�Ϳ�����
//
//	while (tmp)
//
//	{
//
//		tmp = tmp&(tmp - 1);
//
//		count++;
//
//	}
//
//	return count;
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
//	int m = 0;
//
//	int n = 0;
//
//
//
//	//����
//
//	scanf("%d%d", &m, &n);
//
//	//���m��n�Ķ����Ƶ�ÿһλ��Ȼ��Ƚϼ���
//
//	int count = get_diff_bit(m, n);
//
//
//
//	//���
//
//	printf("%d\n", count);
//
//	return 0;
//
//}


//void SwapArr(int arr1[], int arr2[], int sz)
//
//{
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//
//	{
//
//		int tmp = arr1[i];
//
//		arr1[i] = arr2[i];
//
//		arr2[i] = tmp;
//
//	}
//
//}
//
//int main()
//
//{
//
//	int arr1[] = { 1, 3, 5, 7, 9 };
//
//	int arr2[] = { 2, 4, 6, 8, 0 };
//
//	int i = 0;
//
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	SwapArr(arr1, arr2, sz);
//
//
//
//	for (i = 0; i < sz; i++)
//
//	{
//
//		printf("%d ", arr1[i]);
//
//	}
//
//	printf("\n");
//
//
//
//	for (i = 0; i < sz; i++)
//
//	{
//
//		printf("%d ", arr2[i]);
//
//	}
//
//	printf("\n");
//
//
//
//	return 0;
//
//}

     

//void Init(int arr[10], int sz)
//
//{
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//
//	{
//
//		arr[i] = 0;
//
//	}
//
//}
//
//
//
//void Print(int arr[], int sz)
//
//{
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//
//	{
//
//		printf("%d ", arr[i]);
//
//	}
//
//	printf("\n");
//
//}
//
//
//
//void Reverse(int arr[], int sz)
//
//{
//
//	int left = 0;
//
//	int right = sz-1;
//
//	while (left < right)
//
//	{
//
//		int tmp = arr[left];
//
//		arr[left] = arr[right];
//
//		arr[right] = tmp;
//
//		left++;
//
//		right--;
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
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Print(arr, sz);
//
//	//Init(arr, sz);//��ʼ������Ϊȫ0
//
//	Reverse(arr, sz);
//
//	Print(arr, sz);
//
//
//
//	return 0;
//
//}