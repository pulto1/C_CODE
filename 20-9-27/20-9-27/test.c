#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>

#include <string.h>

#include <stdio.h>

#include <math.h>



int main()

{

	int i = 0;

	for (i = 0; i <= 100000; i++)

	{

		//�ж�i�Ƿ�Ϊ������

		int sum = 0;

		//1. ����i��λ�� - n

		int tmp = i;

		int count = 1;

		while (tmp /= 10)

		{

			count++;

		}

		//2. ���i��ÿһλ�������ÿһλ��n�η���

		tmp = i;

		while (tmp)

		{

			sum += pow(tmp % 10, count);

			tmp /= 10;

		}

		//3. �Ƚϲ���ӡ

		if (i == sum)

		{

			printf("%d ", i);

		}

	}

	return 0;

}

//int main()
//
//{
//
//	int a = 0;
//
//	int n = 0;
//
//	scanf("%d%d", &a, &n);
//
//	int i = 0;
//
//	int sum = 0;
//
//	int k = 0;
//
//
//
//	for (i = 0; i < n; i++)
//
//	{
//
//		k = k * 10 + a;
//
//		sum += k;
//
//	}
//
//	printf("%d\n", sum);
//
//
//
//	return 0;
//
//}

//void reverse(char* str)
//
//{
//
//	int len = strlen(str);//������ַ����ĳ���
//
//	char* left = str;
//
//	char* right = str + len - 1;
//
//
//
//	while (left<right)
//
//	{
//
//		char tmp = *left;
//
//		*left = *right;
//
//		*right = tmp;
//
//		left++;
//
//		right--;
//
//	}
//
//}
//
//int main()
//
//{
//
//	char arr[100] = { 0 };//abcdef
//
//	//scanf("%s", arr);//�����ո�Ͳ��ټ��������
//
//	gets(arr);//��ȡһ�У��пո�Ҳ��
//
//	reverse(arr);//�����ַ�����
//
//	printf("%s\n", arr);
//
//	return 0;
//
//}

//void print(int*p, int sz)
//
//{
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//
//	{
//
//		//printf("%d ", *(p + i));
//
//		printf("%d ", *p++);
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
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//
//
//	print(arr, sz);
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
//	int n = 9;
//
//	//
//
//	//00000000000000000000000000001001
//
//	//
//
//	float *pFloat = (float *)&n;
//
//	printf("n��ֵΪ��%d\n", n);//9
//
//	//*pFloat - ���Ը��������ӽ�ȥ����n���ĸ��ֽڣ��ͻ���Ϊn��4���ֽ��зŵ��Ǹ�����
//
//	//0 00000000 00000000000000000001001
//
//	//(-1)^0 * 2^-126 * 0.00000000000000000001001
//
//	//0.000000
//
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);//0
//
//
//
//	*pFloat = 9.0;
//
//	//*pFloat ���Ը��������ӽǹ۲�n��4���ֽڵ�
//
//	//�Ը���������ʽ�洢9.0
//
//	//1001.0
//
//	//1.001*2^3
//
//	//(-1)^0 * 1.001 * 2^3
//
//	//01000001000100000000000000000000
//
//	//
//
//	printf("num��ֵΪ��%d\n", n);//
//
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);//9.0
//
//	return 0;
//
//}


//unsigned char i = 0;
//
//int main()
//
//{
//
//	for (i = 0; i <= 255; i++)
//
//	{
//
//		printf("hello world\n");
//
//	}
//
//	return 0;
//
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i<1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);//��Ϣ1��
//	}
//	return 0;
//}