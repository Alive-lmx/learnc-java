#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 3
#define COL 3

void menu();//�˵�����
void initBoard(int row,int col,char board[][COL]);//��ʼ������

void printBoard(int row, int col, char board[][COL]);//��ӡ����

void playerMove(int row, int col, char board[][COL]);//�������

void computerMove(int row, int col, char board[][COL]);//��������

int isFull(int row, int col, char board[][COL]);//�ж������Ƿ��Ѿ�����

char checkWin(int row, int col, char board[][COL]);//�ж�ʤ��

void game();//
