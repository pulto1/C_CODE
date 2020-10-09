
#define _CRT_SECURE_NO_WARNINGS 1





#include "game.h"



void menu()

{

	printf("******************************\n");

	printf("*******   1. play      *******\n");

	printf("*******   0. exit      *******\n");

	printf("******************************\n");

}



void game()

{

	char ret = 0;

	//���һ����������Ϸ

	//�洢���ݵ�

	char board[ROW][COL] = { 0 };//����Ӧ�ó�ʼ��Ϊ�ո�

	InitBoard(board, ROW, COL);//��ʼ������ - �ո�

	//��ӡ����

	DisplayBoard(board, ROW, COL);

	//�������·��֣�

	//����Ϸ��Ĺ�����

	//1. ���Ӯ - '*'

	//2. ����Ӯ - '#'

	//3. ƽ���� - 'Q'

	//4. ����   - 'C'





	while (1)

	{

		PlayerMove(board, ROW, COL);

		//�ж���Ӯ

		ret = CheckWin(board, ROW, COL);

		if (ret != 'C')

		{

			break;

		}

		DisplayBoard(board, ROW, COL);



		ComputerMove(board, ROW, COL);

		//�ж���Ӯ

		ret = CheckWin(board, ROW, COL);

		if (ret != 'C')

		{

			break;

		}



		DisplayBoard(board, ROW, COL);

	}

	if (ret == '*')

	{

		printf("���Ӯ\n");

	}

	else if (ret == '#')

	{

		printf("����Ӯ\n");

	}

	else if (ret == 'Q')

	{

		printf("ƽ��\n");

	}

	DisplayBoard(board, ROW, COL);

}



int main()

{

	int input = 0;

	srand((unsigned int)time(NULL));

	do

	{

		menu();

		printf("��ѡ��:>");

		scanf("%d", &input);

		switch (input)

		{

		case 1:

			game();//��������Ϸ

			break;

		case 0:

			printf("�˳���Ϸ\n");

			break;

		default:

			printf("ѡ�����\n");

			break;

		}

		//

	} while (input);

	return 0;

}