#define _CRT_SECURE_NO_WARNINGS 

#include"game.h"

int main(){
	int choice = 0;
	do{
		menu();
		printf("����������ѡ��");
		scanf("%d", &choice);
		switch (choice){
		case 0:
			printf("��Ϸ������\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("������������\n");
			break;
		}
	} while (choice);
		return 0;
}