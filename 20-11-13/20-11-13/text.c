#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>

#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 0; i<10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}

int main()
{
	extern void print(char *str);
	extern int g_val;
	printf("%d\n", g_val);
	print("hello bit.\n");
	return 0;
}

int g_val = 2016;
void print(const char *str)
{
	printf("%s\n", str);
}

//enum { SIZE = 5 };
//int main(void)
//{
//	double a[SIZE] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
//	double b = 0.0;
//	size_t ret_code = 0;
//	FILE *fp = fopen("test.bin", "wb"); // �����ö�����ģʽ
//	fwrite(a, sizeof(*a), SIZE, fp); // д double ������
//	fclose(fp);
//	fp = fopen("test.bin", "rb");
//	// �� double ������
//	while ((ret_code = fread(&b, sizeof(double), 1, fp)) >= 1)
//	{
//		printf("%lf\n", b);
//	}
//	if (feof(fp))
//		printf("End of file reached successfully\n");
//	else if (ferror(fp))
//	{
//		perror("error when reading");
//	}
//	fclose(fp);
//	fp = NULL;
//}

//int main()
//{
//	int c; // ע�⣺int����char��Ҫ����EOF
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp) 
//	{
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//	while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
//	{
//		putchar(c);
//	}
//	//�ж���ʲôԭ�������
//	if (ferror(fp))
//		puts("\nI/O error when reading");
//	else if (feof(fp))
//		puts("\nEnd of file reached successfully");
//	fclose(fp);
//}

//int main()
//{
//	int n;
//	FILE * pFile;
//	char buffer[27];
//	pFile = fopen("myfile.txt", "w+");
//	for (n = 'A'; n <= 'Z'; n++)
//		fputc(n, pFile);
//	rewind(pFile);
//	fread(buffer, 1, 26, pFile);
//	fclose(pFile);
//	buffer[26] = '\0';
//	puts(buffer);
//	return 0;//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	
//	if (pf == NULL)
//	{
//		return 1;
//	}
//
//	fputs("ABCDEF", pf);
//
//	fseek(pf, 4, SEEK_SET);
//
//	fputc('W', pf);
//	int ret = ftell(pf);
//	printf("ret = %d\n", ret);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct Stu s = { 0 };
//	FILE* pf = fopen("test.dat", "rb");
//	if (pf == NULL)
//	{
//		perror("open file for reading");
//		return 1;
//	}
//	//���ļ�
//	fread(&s, sizeof(struct Stu), 1, pf);
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct Stu s = { "����", 20, 99.2f };
//	FILE* pf = fopen("test.dat", "wb");
//	if (pf == NULL)
//	{
//		perror("open file for writting");
//		return 1;
//	}
//	//д�ļ�
//	fwrite(&s, sizeof(struct Stu), 1, pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
