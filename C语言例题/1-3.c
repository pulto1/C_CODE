#include <stdio.h>
int main()
{
	int max(int x,int y);  //�Ա����ú���max������
	int a,b,c;  //�������a,b,c
	scanf("%d,%d",&a,&b);  //�������a,b,c
	c=max(a,b);  //����max���������õ���ֵ����c
	printf("max=%d\n",c);  //���c��ֵ
	return 0;  //����������ֵΪ0
}
int max(int x,int y)  //����max����������Ϊ���ͣ�������ʽx,yΪ����
{
	int z;  //max�����е��������֣����屾�������õ��ı���zΪ����
	if(x>y)z=x;  //��x>y��������x��ֵ��������z
	else z=y;  //���򣨼�x>y������������y��ֵ��������z
	return(z);  //��z��Ϊmax����ֵ�����ص�����max������λ��
}