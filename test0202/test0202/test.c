#define _CRT_SECURE_NO_WARNINGS
//#define N 7

#include<stdio.h>
#include<string.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//所有的钱都用来买汽水20瓶
//用20个空瓶10瓶水
//用10个空瓶换5瓶水
//5个空瓶换2瓶水,余下1个空瓶
//两个空瓶换1瓶水,余下1个空瓶
//喝完最后一瓶水，与余下1个空瓶换一瓶水
//20+10+5+2+1+1
//int buy(int money){
//	int count = money;//1元钱买一瓶水
//	int exchange = 1;//初值设置为1，让程序能够进入循环体
//	int remain ;
//	while(exchange!=0){
//		exchange = money / 2;//拿空瓶换的水
//		remain = money % 2;//没换完余下1个或0个空瓶
//		money = exchange + remain;//空瓶的数量=拿空瓶换的水的空瓶+上次换水余下的空瓶
//		count = count + exchange;//汽水的数量就是第一次买的水加上后来换的水
//	}
//	return count;
//}
//int main(){
//
//	int money = 0;
//	printf("请输入钱数：");
//	scanf("%d", &money);
//	int soda = buy(money);
//	printf("%d元钱可以购买%d瓶汽水\n", money, soda);
//	return 0;
//}

//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
//……
//void PrintTriangle(int arr[][N]){
//	int i, j, k;
//	arr[0][0] = 1;
//	arr[1][0] = 1;
//	arr[1][1] = 1;
//	for (i = 1; i < N; i++){
//		for (j = 0; j <= i; j++){
//			if (j==0||i == j){
//				arr[i][j] = 1;
//			}
//			else{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < N; i++){
//		//for (k = 0; k < N - i - 1; k++){
//		//	printf(" ");
//		//}//在每一行前打印空格，呈现三角形，可有可无
//		for (j = 0; j <= i; j++){
//			printf("%4d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main(){
//	printf("当N为%d时，杨辉三角如下：\n",N);
//	int arr[N][N] = { 0 };
//	PrintTriangle(arr);
//	return 0;
//}


//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

//int main(){
//	int k = 0;
//	for (k = 'a'; k <= 'd'; k++){
//		if ((k != 'a') + (k == 'c') + (k == 'd') + (k != 'd') == 3){
//			printf("凶手是：%c\n", k);//if语句中，（）中结果为真输出1，结果为假输出0
//		}
//	}
//	return 0;
//}


//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次
//int main(){
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++){
//		for (b = 1; b <= 5; b++){
//			for (c = 1; c <= 5; c++){
//				for (d = 1; d <= 5; d++){
//					for (e = 1; e <= 5; e++){
//						if (a*b*c*d*e == 120){
//							if (((b == 2)+( a == 3) ==1)&& ((b == 2)+ ( e == 4) ==1) && ((c == 1)+( d == 2) ==1)&& 
//								((c == 5) +(d == 3)==1) && ((e == 4) +( a == 1) == 1) ){
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//}

//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//void rotate(char str[], int k){
//	char t = '\0';
//	while (k--){
//		char* c = str;//str的首地址给c
//		t = *c;//str首地址存放的数据放到t中
//		while (*(c + 1) != '\0'){
//			*c = *(c + 1);//后面的元素向前移动
//			c++;
//		}
//		*c = t;//t中的数据存放到数组最后一个元素地址上
//	}
//	printf("%s\n", str);
//}
//int main(){
//	char str[] =  "abcd";
//	int k=0;
//	printf("请输入需要旋转的数字：");
//	scanf("%d", &k);
//	rotate(str,k);
//}


//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
int rotate(char str1[], char str2[],int k){
	char t = '\0';
	int num;
	while (k--){
		char* c = str1;//str的首地址给c
		t = *c;//str首地址存放的数据放到t中
		while (*(c + 1) != '\0'){
			*c = *(c + 1);//后面的元素向前移动
			c++;
		}
		*c = t;//t中的数据存放到数组最后一个元素地址上
		if (strcmp(str1, str2) == 1){
			num = 1;
			break;//每旋转一下，比较两个字符串，相同结束旋转
		}
		else{
			num = 0;
		}
	}
	return num;
	
}
int main(){
	char str1[] = "AABCD";
	char str2[] = "BCDAA";
	printf("两个字符串为：\n%s\n%s\n", str1, str2);
	int k = 5;
	int ret = rotate(str1, str2, k);
	if (ret==1){
		printf("str2是str1旋转后的字符串\n");
	}
else
	printf("str2不是str1旋转后的字符串\n");
}