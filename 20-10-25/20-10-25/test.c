#define _CRT_SECURE_NO_WARNINGS



#include <errno.h>

#include <assert.h>

#include <ctype.h>

#include <string.h>
#include <stdio.h>

typedef struct Node
{
	int data;
	struct Node* next;
}Node;

//typedef struct
//{
//	int data;
//	Node* next;
//}Node;

//struct Node
//{
//	int data;
//	struct Node* next;
//};

//struct 
//{
//	char name[20];
//	short age;
//	char sex[5];
//}s1;//全局变量
//
//struct
//{
//	char name[20];
//	short age;
//	char sex[5];
//}*ps;
//
//int main()
//{
//	//int *p1, *p2;
//	//局部变量
//	ps = &s1;
//	/*struct Node n;*/
//
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//};

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	memset(arr, 1, 40);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 3, 3, 3 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//
//	return 0;
//}

//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest);
//	assert(src);
//
//	void* ret = dest;
//	if (dest < src)
//	{
//		//前->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//后->前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//
//	my_memmove(arr+2, arr, 16);
//
//	return 0;
//}

//void* my_memcpy(void*dest, const void*src, size_t count)
//{
//	void*ret = dest;
//	assert(dest);
//	assert(src);
//
//	while (count--)
//	{
//		//拷贝一个字节
//		*(char*)dest = *(char*)src;
//		//dest = (char*)dest+1;
//		//src = (char*)src+1;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}


//void* my_memcpy(void*dest, const void*src, size_t count)
//{
//	void*ret = dest;
//	assert(dest);
//	assert(src);
//
//	while (count--)
//	{
//		//拷贝一个字节
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest+1;
//		src = (char*)src+1;
//	}
//	return ret;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int arr2[20] = {0};
//  
//	//my_memcpy(arr1+2, arr1, 16);
//	//my_memmove(arr1+2, arr1, 16);
//	memcpy(arr2, arr1+2, 16);
//
//	return 0;
//}


//int main()
//{
//	char c = 'Z';
//	int ret = islower(c);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	char ch = 'h';//65 97
//	////printf("%c\n", ch + 32);
//	//char c = tolower(ch);
//	toupper(ch);
//	printf("%c\n", ch);
//
//	return 0;
//}

//int main()
//{
//	//
//	//当调用库函数，发生错的时候，就会有些错误码
//	//错误码会放在errno这个全局变量中
//	//#include <errno.h>
//
//	//printf("%s\n", strerror(errno));
//	//文件操作
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		/*printf("%s\n", strerror(errno));*/
//		perror("91班打印错误信息");
//	}
//	else
//	{
//		printf("打开成功\n");
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	//
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* cp = str1;
//	
//	/*if (*s2 == '\0')
//	{
//		return (char*)str1;
//	}*/
//
//	while (*cp)
//	{
//		//一次匹配查找的过程
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* str1 = "abbbcdef";
//	char* str2 = "bbc";
//	char* ret = my_strstr(str1, str2);
//	printf("%s\n", ret);
//
//	return 0;
//}