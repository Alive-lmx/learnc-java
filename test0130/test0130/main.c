#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

int main(){
	//int row = ROW;
	//int col = COL;
	//char board[ROW][COL];
	//initBoard(row, col, board);
	//printBoard(row, col, board);
	int choice = 0;
	do{
		menu();
		printf("请输入您的选择：");
		scanf("%d", &choice);
		switch (choice){
		case 0:
			printf("游戏结束！\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("您的输入有误！\n");
			break;
		}
	} while (choice);
		return 0;
}