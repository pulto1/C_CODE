#define _CRT_SECURE_NO_WARNINGS

#include "my_strcat.h"

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	//1. ��Ŀ�ĵؿռ��'\0'
	while (*dest)
	{
		dest++;
	}
	//2. ��������
	while (*dest++ = *src++)
	{
		;
	}

	return ret;
}
