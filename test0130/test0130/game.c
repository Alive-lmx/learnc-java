#define _CRT_SECURE_NO_WARNINGS 

#include"game.h"
//�˵�
void menu(){
	printf("���������������������\n");
	printf("�����       0 �˳���Ϸ       �����\n");
	printf("�����       1 ��ʼ��Ϸ       �����\n");
	printf("���������������������\n");
}
//��ʼ������
void initBoard(int row, int col, char board[ROW][COL]){
	int i, j;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			board[i][j] = ' ';//����������Ԫ�ض�Ϊ�ո�
		}
	}
}
//��ӡ����
void printBoard(int row, int col, char board[][COL]){
	int i;
	printf("���������������������\n");
	printf("\n");
	printf("              +---+---+---+\n");
	for (i = 0; i < row; i++){
		printf("              | %c | %c | %c | \n",board[i][0],
			board[i][1],board[i][2]);
		printf("              +---+---+---+\n");
	}
	printf("���������������������\n");
}
//�������
void playerMove(int row, int col, char board[][COL]){
	int x = 0;
	int y = 0;
	printf("������ӣ���������Ҫ�ߵ��������꣺");
	while (1){
		scanf("%d%d", &x, &y);
		//�ж����귶Χ���������Ƿ�������
		//������������Ϊx y,ʵ���ϴ洢�������е��±�Ϊ x-1 y-1
		if (x <= row && y <= col && board[x - 1][y - 1] == ' '){
			board[x - 1][y - 1] = '#';
			break;
		}
		else if (x > row || y > col){
			printf("������������������������룺");
		}
		else{
			printf("���걻ռ�ã����������룺");
		}

	}
}
//��������
void computerMove(int row, int col, char board[][COL]){
	int x = 0;
	int y = 0;
	printf("��������:\n");
	while (1){
		//����������ɷ�Χ��0~row-1�������
		x = rand() % row;
		y = rand() % col;
		//����Ԫ���±��[0][0]��ʼŶ~
		if (board[x][y] != ' '){
			continue;
		}
		else{
			board[x][y] = 'o';
			break;
		}

	}
}
//�ж������Ƿ��Ѿ�����,����������ˣ�����1������
//������δ������0
int isFull(int row, int col, char board[][COL]){
	int i, j;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			if (board[i][j] == ' '){
				return 0;
			}
		}
	}
	return 1;
}
//�ж�ʤ��,��һ���Ե�����ռ��һ���л���һ���л��߶Խ���ʱʤ��
//����������ˣ���ƽ�֣�����e,������û������u�������ߣ�
//����#�����ʤ������o������ʤ
char checkWin(int row, int col, char board[][COL]){
	int x = 0;
	int y = 0;
	//����ռ��һ�е����
	for (x = 0; x < row; x++){
		//��x�еĵ�һ�����ڶ��������������
		if (board[x][0]!=' ' && board[x][0] == board[x][1] 
			&& board[x][0] == board[x][2]){
			return board[x][0];
		}
	}
	//����ռ��һ�е����
	for (y = 0; y < col; y++){
		//��y�еĵ�һ�����ڶ��������������
		if (board[0][y]!=' ' && board[0][y] == board[1][y] 
			&& board[0][y] == board[2][y]){
			return board[0][y];
		}
	}
	//�Խ�����ȵ������
	if (board[0][0] != ' ' && board[0][0] == board[1][1] 
		&& board[0][0] == board[2][2]){
		return board[0][0];//���Խ������
	}
	if (board[0][2] != ' ' && board[0][2] == board[1][1]
		&& board[0][2] == board[2][0]){
		return board[0][2];//���Խ������
	}
	if (isFull(row, col, board)){
		return 'e';//isFull(row, col, board)=1���������˷���e
	}
	return 'u';//isFull(row, col, board)=0,����δ������u
}
void game(){
	srand((unsigned)time(NULL));
	char ret = ' ';
	int row = ROW;
	int col = COL;
	char board[ROW][COL] = {0};
	initBoard(row, col, board);
	printBoard(row, col, board);
	while (1){
		playerMove(row, col, board);//���������
		printBoard(row, col, board);
		ret = checkWin(row, col, board);//���ʤ��
		if (ret != 'u'){
			break;
		}//���������ˣ��ͽ���
		computerMove(row, col, board);//��������
		printBoard(row, col, board);
		ret = checkWin(row, col, board);//���ʤ��
		if (ret != 'u'){
			break;
		}//���������ˣ��ͽ���
	}
	//��ӡ��Ϸ��������֣�Ҳ�ɲ���ӡ
	//printBoard(row, col, board);
	if (ret == '#'){
		printf("���ʤ������ϲ����\n");
	}
	else if (ret == 'o'){
		printf("����ʤ��������̫��ϧ��~~\n");
	}
	else{
		printf("ƽ�������ٽ�����Ŷ~\n");
	}
	
}
