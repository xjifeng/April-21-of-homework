#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3


void initboard(char board[ROW][COL], int row, int col);//初始化棋盘


void displayboard(char board[ROW][COL], int row, int col);//打印棋盘

void playermove(char board[ROW][COL], int row, int col);//玩家选择坐标下棋

void robotmove(char board[ROW][COL], int row, int col);//电脑下棋;

int isfull(char board[ROW][COL], int row, int col);//判断平局

char iswin(char board[ROW][COL], int row, int col);//判断输赢；