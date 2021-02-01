#define _CRT_SECURE_NO_WARNINGS 

#include"game.h"

int main(){
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