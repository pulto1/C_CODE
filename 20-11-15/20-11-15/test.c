#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX(X,Y)   ((X)>(Y)?(X):(Y))

int main()
{
	int a = 10;
	int b = 11;
	int ret = MAX(a++, b++);
	//	int ret = ((a++) > (b++) ? (a++) : (b++));
	printf("a = %d b=%d\n", a, b);
	printf("%d\n", ret);

	return 0;
}

//#define CAT(X,Y) X##Y
////## 
////Class91
//
//
//int main()
//{
//	int Class91 = 2020;
//	printf("%d\n", CAT(Class, 91));
//	//2020
//	return 0;
//}

//#define PRINT(FORMAT, X) printf("the value of "#X" is "FORMAT"\n", X)
//
//int main()
//{
//	int a = 100;
//	int b = 100;
//	float f = 5.5f;
//	PRINT("%d", a);
//	PRINT("%d", b);
//	PRINT("%f", f);
//
//	//print(a);
//	//print(b);
//
//	//printf("the value of a is %d\n", a);
//	//printf("the value of b is %d\n", b);
//
//	/*printf("hello world\n");
//	printf("hello ""world\n");*/
//
//	return 0;
//}

////#define MAX(X,Y)   (X>Y?X:Y)
////
////int Max(int x, int y)
////{
////	return x > y ? x : y;
////}
////#define SQUARE(X) (X)*(X)
//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	/*char*p = "MHEHEH";*/
//	/*printf("%d\n", SQUARE(5));*/
//	/*printf("%d\n", SQUARE(4+1));*/
//	printf("%d\n", 10*DOUBLE(100));
//
//
//	//int a = 10;
//	//int b = 20;
//	//int max = MAX(a, b);
//	//printf("max = %d\n", max);
//
//	//max = Max(a, b);
//	//printf("max = %d\n", max);
//
//	return 0;
//}

//#define MAX 100;
//int main()
//{
//	//int a = 100;;
//	//printf("%d\n", a);
//	printf("%d\n", MAX);
//	return 0;
//}

//#define MAX 1000
//#define reg register           //Ϊ register����ؼ��֣�����һ����̵�����
//#define do_forever for(;;)     //�ø�����ķ������滻һ��ʵ��
//#define CASE break;case        //��дcase����ʱ���Զ��� breakд�ϡ�
//// �������� stuff���������Էֳɼ���д���������һ���⣬ÿ�еĺ��涼��һ����б��(���з�)��
//#define DEBUG_PRINT printf("file:%s\tline:%d\t \
//                          date:%s\ttime:%s\n", \
//						  __FILE__, __LINE__, \
//						  __DATE__, __TIME__)

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	FILE*pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		perror("open file for writting");
//		return 1;
//	}
//	for (i = 0; i<10; i++)
//	{
//		fprintf(pf, "file:%s line:%d date:%s time:%s: %d\n", __FILE__, __LINE__,
//			__DATE__, __TIME__, arr[i]);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//__FILE__    //���б����Դ�ļ�
//__LINE__    //�ļ���ǰ���к�
//__DATE__    //�ļ������������
//__TIME__    //�ļ��������ʱ��
//__STDC__    //�����������ѭANSI C����ֵΪ1������δ����
