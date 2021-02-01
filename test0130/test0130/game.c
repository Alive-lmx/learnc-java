#define _CRT_SECURE_NO_WARNINGS 

#include"game.h"
//菜单
void menu(){
	printf("☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★\n");
	printf("☆★☆★       0 退出游戏       ☆★☆★\n");
	printf("☆★☆★       1 开始游戏       ☆★☆★\n");
	printf("☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★\n");
}
//初始化棋盘
void initBoard(int row, int col, char board[ROW][COL]){
	int i, j;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			board[i][j] = ' ';//让棋盘数组元素都为空格
		}
	}
}
//打印棋盘
void printBoard(int row, int col, char board[][COL]){
	int i;
	printf("☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★\n");
	printf("\n");
	printf("              +---+---+---+\n");
	for (i = 0; i < row; i++){
		printf("              | %c | %c | %c | \n",board[i][0],
			board[i][1],board[i][2]);
		printf("              +---+---+---+\n");
	}
	printf("☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★\n");
}
//玩家落子
void playerMove(int row, int col, char board[][COL]){
	int x = 0;
	int y = 0;
	printf("玩家落子，请输入您要走的棋子坐标：");
	while (1){
		scanf("%d%d", &x, &y);
		//判断坐标范围，坐标上是否有棋子
		//玩家输入的坐标为x y,实际上存储在数组中的下标为 x-1 y-1
		if (x <= row && y <= col && board[x - 1][y - 1] == ' '){
			board[x - 1][y - 1] = '#';
			break;
		}
		else if (x > row || y > col){
			printf("您输入的坐标有误！请重新输入：");
		}
		else{
			printf("坐标被占用，请重新输入：");
		}

	}
}
//电脑落子
void computerMove(int row, int col, char board[][COL]){
	int x = 0;
	int y = 0;
	printf("电脑落子:\n");
	while (1){
		//电脑随机生成范围在0~row-1的随机数
		x = rand() % row;
		y = rand() % col;
		//数组元素下标从[0][0]开始哦~
		if (board[x][y] != ' '){
			continue;
		}
		else{
			board[x][y] = 'o';
			break;
		}

	}
}
//判断棋盘是否已经满了,如果棋盘满了，返回1，和棋
//若棋盘未满返回0
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
//判断胜负,玩家或电脑的棋子占据一整行或者一整列或者对角线时胜出
//如果棋盘满了，则平局，返回e,若棋盘没满返回u，继续走；
//返回#，玩家胜，返回o，电脑胜
char checkWin(int row, int col, char board[][COL]){
	int x = 0;
	int y = 0;
	//棋子占据一行的情况
	for (x = 0; x < row; x++){
		//第x行的第一个、第二个、第三个相等
		if (board[x][0]!=' ' && board[x][0] == board[x][1] 
			&& board[x][0] == board[x][2]){
			return board[x][0];
		}
	}
	//棋子占据一列的情况
	for (y = 0; y < col; y++){
		//第y列的第一个、第二个、第三个相等
		if (board[0][y]!=' ' && board[0][y] == board[1][y] 
			&& board[0][y] == board[2][y]){
			return board[0][y];
		}
	}
	//对角线相等的情况：
	if (board[0][0] != ' ' && board[0][0] == board[1][1] 
		&& board[0][0] == board[2][2]){
		return board[0][0];//主对角线相等
	}
	if (board[0][2] != ' ' && board[0][2] == board[1][1]
		&& board[0][2] == board[2][0]){
		return board[0][2];//副对角线相等
	}
	if (isFull(row, col, board)){
		return 'e';//isFull(row, col, board)=1，棋盘满了返回e
	}
	return 'u';//isFull(row, col, board)=0,棋盘未满返回u
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
		playerMove(row, col, board);//玩家先落子
		printBoard(row, col, board);
		ret = checkWin(row, col, board);//检查胜负
		if (ret != 'u'){
			break;
		}//若棋盘满了，就结束
		computerMove(row, col, board);//电脑落子
		printBoard(row, col, board);
		ret = checkWin(row, col, board);//检查胜负
		if (ret != 'u'){
			break;
		}//若棋盘满了，就结束
	}
	//打印游戏结束的棋局，也可不打印
	//printBoard(row, col, board);
	if (ret == '#'){
		printf("玩家胜利！恭喜您！\n");
	}
	else if (ret == 'o'){
		printf("电脑胜利！真是太可惜了~~\n");
	}
	else{
		printf("平局辣！再接再厉哦~\n");
	}
	
}
