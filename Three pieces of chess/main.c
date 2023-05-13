#include "game.h"
void game()
{
	char board[ROW][COL] = {0};//棋盘数组的创建;
	initboard(board, ROW, COL);//初始化棋盘
	displayboard(board, ROW, COL);
	char ret;
	while (1)
	{
		//玩家下棋。
		playermove(board, ROW, COL);
		iswin(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋；
		robotmove(board, ROW, COL);
		iswin(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret!='C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else {
		printf("平局\n");
	}
}
void menu()
{
	printf("#################################\n");
	printf("########  1、开始游戏   #########\n");
	printf("########  2、退出游戏   #########\n");
	printf("#################################\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请输入您的选项:");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}

	} while (input);
	return 0;
}