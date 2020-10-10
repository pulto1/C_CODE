#define _CRT_SECURE_NO_WARNINGS 1



#include "game.h"



void InitBoard(char board[ROW][COL], int row, int col)

{

	int i = 0;

	int j = 0;

	for (i = 0; i < row; i++)

	{

		for (j = 0; j < col; j++)

		{

			board[i][j] = ' ';

		}

	}

}



//

//void DisplayBoard(char board[ROW][COL], int row, int col)

//{

//	int i = 0;

//	for (i = 0; i < row; i++)

//	{

//		//��ӡ����

//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);

//		//��ӡ�ָ���

//		if (i<row-1)

//			printf("---|---|---\n");

//	}

//}

//





void DisplayBoard(char board[ROW][COL], int row, int col)

{

	int i = 0;

	for (i = 0; i < row; i++)

	{

		//��ӡ����

		int j = 0;

		for (j = 0; j < col; j++)

		{

			printf(" %c ", board[i][j]);

			if (j<col - 1)

				printf("|");

		}

		printf("\n");

		//��ӡ�ָ���

		if (i < row - 1)

		{

			for (j = 0; j < col; j++)

			{

				printf("---");

				if (j<col - 1)

					printf("|");

			}

		}

		printf("\n");

	}

}





void PlayerMove(char board[ROW][COL], int row, int col)

{

	int x = 0;

	int y = 0;

	printf("�����:>\n");



	while (1)

	{

		printf("����������:>");

		scanf("%d%d", &x, &y);

		//������귶Χ�Ϸ�

		if (x >= 1 && x <= row && y >= 1 && y <= col)

		{

			if (board[x - 1][y - 1] == ' ')

			{

				board[x - 1][y - 1] = '*';

				break;

			}

			else

			{

				printf("�����걻ռ�ã�����������\n");

			}

		}

		else

		{

			printf("����Ƿ�����������\n");

		}

	}

}



void ComputerMove(char board[ROW][COL], int row, int col)

{

	printf("������:>\n");



	while (1)

	{

		int x = rand() % row;//0-2

		int y = rand() % col;//0-2

		if (board[x][y] == ' ')

		{

			board[x][y] = '#';

			break;

		}

	}

}





static int IsFull(char board[ROW][COL], int row, int col)

{

	int i = 0;

	int j = 0;

	for (i = 0; i < row; i++)

	{

		for (j = 0; j < col; j++)

		{

			if (board[i][j] == ' ')

			{

				return 0;

			}

		}

	}



	return 1;//û�ո�

}



char CheckWin(char board[ROW][COL], int row, int col)

{

	int i = 0;

	//���Ƿ���3�����

	for (i = 0; i < row; i++)

	{

		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')

		{

			return board[i][0];

		}

	}

	//�е��ж�

	for (i = 0; i < col; i++)

	{

		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')

		{

			return board[0][i];

		}

	}

	//�Խ���

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')

	{

		return board[1][1];

	}

	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')

	{

		return board[1][1];

	}



	//�ж��Ƿ�Ϊƽ��

	//�ж������Ƿ����ˣ� - �����������Ƿ��пո�

	if (IsFull(board, row, col) == 1)

	{

		return 'Q';

	}

	//����ƽ�֣���Ϸ����

	return 'C';

}