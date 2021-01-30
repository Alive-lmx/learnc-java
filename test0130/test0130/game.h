#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 3
#define COL 3

void menu();//菜单界面
void initBoard(int row,int col,char board[][COL]);//初始化棋盘

void printBoard(int row, int col, char board[][COL]);//打印键盘

void playerMove(int row, int col, char board[][COL]);//玩家落子

void computerMove(int row, int col, char board[][COL]);//电脑落子

int isFull(int row, int col, char board[][COL]);//判断棋盘是否已经满了

char checkWin(int row, int col, char board[][COL]);//判断胜负

void game();//
