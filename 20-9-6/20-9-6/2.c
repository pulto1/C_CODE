#define _CRT_SECURE_NO_WARNINDS 1
#include <stdio.h>
int main()
//main����-��������
//�����main�����ĵ�һ�п�ʼִ�е�
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
//C�����е�һ���ؼ���
//sizeof(����)-�������ʹ������������ٿռ�Ĵ�С
//size����Ĵ�С��λ��-�ֽ�
	return 0;
}