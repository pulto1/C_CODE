#define _CRT_SECURE_NO_WARNINGS

#include <assert.h>
#include <stdio.h>

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

//#include <stdio.h>
//
//int main()
//{
//	int n = 10;
//	int m = 20;
//	int const * const p = &n;
//	*p = 20;
//	p = &m;
//	printf("%d\n", n);
//	return 0;
//}


//int main()
//{
//	//const ����ָ���ʱ��
//	//const����*����ߣ���ʾָ��ָ������ݣ�*p������ͨ��ָ��(p)���ı䣬����ָ�������p�������ǿ����޸ĵ�
//	//const����*���ұߣ���ʾָ��ָ������ݣ�*p������ͨ��ָ��(p)���ı䣬����ָ�������p�������ǲ������޸ĵ�
//	const int num = 10;
//	int n = 20;
//	int   *  p = &num;
//
//	
//
//	*p = 20;
//
//	p = &n;
//
//
//
//	printf("%d\n", num);
//
//
//
//	return 0;
//
//}

//void my_strcpy(char*dest, char* src)//
//
//{
//
//	while (*src != '\0')
//
//	{
//
//		*dest++ = *src++;//�����ַ���������'\0'
//
//	}
//
//	//
//
//	*dest = *src;//������'\0'
//
//}



//void my_strcpy(char*dest, char* src)//
//
//{
//
//	if ((dest == NULL) || (src == NULL))
//
//	{
//
//		return;
//
//	}
//
//
//
//	while (*dest++ = *src++)
//
//	{
//
//		;
//
//	}
//
//}



//assert - ���� - <assert.h>





//char* my_strcpy(char* dest, const char* src)//
//{
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
//
//
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[20] = "XXXXXXXXXX";
//	char*p = NULL;
//	my_strcpy(p, arr1);
//	//��������ʽ����
//	printf("%s\n",p );//hello
//	return 0;
//}

//int main()
//
//{
//
//	int i = 0;
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	//0-9 - Խ����
//
//	//��ѭ��
//
//	for (i = 0; i <= 12; i++)
//
//	{
//
//		arr[i] = 0;
//
//		printf("hehe\n");
//
//	}
//
//	//���н����ɶ��Ϊʲô��
//
//	return 0;
//
//}

//int main()
//
//{
//
//	int n = 0;
//
//	scanf("%d", &n);//3
//
//	int i = 0;
//
//	int j = 0;
//
//	int ret = 1;
//
//	int sum = 0;
//
//	//n!
//
//	//1!+2!+3!=1+2+6=9
//
//
//
//	for (j = 1; j <= n; j++)//n=3
//
//	{
//
//		for (i = 1; i <= j; i++)
//
//		{
//
//			ret *= i;
//
//		}
//
//		sum = sum + ret;
//
//	}
//
//
//
//	printf("sum = %d\n", sum);
//
//
//
//	return 0;
//
//}

//void test2()
//
//{
//
//	printf("test2()\n");
//
//}
//
//void test1()
//
//{
//
//	test2();
//
//}
//
//void test()
//
//{
//
//	test1();
//
//}
//
//
//
//int main()
//
//{
//
//	test();
//
//	return 0;
//
//}
