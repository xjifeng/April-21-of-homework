#include "game.h"


//初始化棋盘
void initboard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//打印棋盘
void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//打印数据
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i<row-1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}	
}
//玩家选择坐标下棋
void playermove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
	int i = 0; int j = 0;
		printf("请选择位置：");
		scanf_s("%d %d", &i, &j);
		//判断位置是否合法；
		if (i >= 1 && i <= row && j>=1 && j <= col)
		{
			if (board[i-1][j-1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("你输入的坐标已有棋子，请重新输入");
			}
		}
		else
		{
			printf("输入的坐标有误，请重新输入");
		}
	}
	
}
//电脑下棋
void robotmove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋\n");
	while (1)
	{
		 x = rand() % row;
		 y = rand() % col;
		 if (board[x][y]==' ')
		 {
			 board[x][y] = '#';
			 break;
		 }
	}

}
//判断平局
int isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for ( i = 0; i < row; i++)
	{
		int j = 0;
		for ( j = 0; j < col; j++)
		{
			if (board[i][j]==' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
//判断输赢
char iswin(char board[ROW][COL], int row, int col)
{
	//ROW
	int i = 0;
	for ( i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0]!= ' ')
		{
			return board[i][0];
		}
	}
	//COL
	int j = 0;
	for ( j = 0; j < col; j++)
	{
		if (board[0][i]== board[1][i] && board[0][i] == board[2][i] && board[0][i] !=' ')
		{
			return board[0][i];
		}
	}
	//对角线
	if (board[0][0]==board[1][1]&& board[2][2] == board[1][1]&&board[0][0]!=' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[2][0] == board[1][1] && board[0][2] != ' ')
	{
		return board[0][2];
	}
	if (isfull(board,row,col)==1)
	{
		return 'Q';
	}
	else
	{
		return 'C';
	}
}