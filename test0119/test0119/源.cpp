#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>


////求10 个整数中最大值

//	int arr[10];//定义一个数组存放10个整数
//	int i, t;
//	printf("请输入10个整数：");
//	for (i = 0; i <= 9; i++){
//		scanf_s("%d", &arr[i]);//初始化数组
//		printf("\n");
//	}
//	i = 0;
//	t = arr[0];//打擂台，现把擂主设置为arr[0],再与下一个数比较
//	for (i = 1; i < 10; i++){
//		//如果擂主大，那么擂主不变
//		if (t>arr[i])
//			continue;
//		//如果擂主小，擂主则换为比他大的数
//		else{
//			t = arr[i];
//		}
//	}
//	printf("%d", t);
//	printf("\n");
//	return 0;


////在屏幕上输出9*9乘法口诀表

//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 1; i <= 9; i++){//控制列数
//		for (j = 1; j <= i; j++){//控制行数
//			sum = i*j;//计算结果
//			printf("%d*%d=%-4d", j, i, sum);
//		}

//		printf("\n");
//	}
//	return 0;

//完成上课的猜数字游戏


	//void play(int x){
	//	int number = 0;
	//	printf("请输入数字\n");

	//case0:
	//	{
	//		scanf("%d", &number);
	//		while (number != x)
	//		{
	//			if (number > x)
	//			{
	//				printf("大了！\n"); goto case0;
	//			}
	//			else
	//			{
	//				printf("小了！\n"); goto case0;
	//			}

	//		}printf("正确！\n");
	//	}
	//}

	//int main()
	//{
	//	int k;
	//	//int num = 65;
	//	int num;
	//	srand((int)time(NULL));//用时间作为随机数种子，产生的随机数不同
	//	num = rand() % 100;//产生0~100的随机数
	//menu:
	//	{
	//		printf("开始游戏\n1.开始\n2.退出\n");
	//		scanf("%d", &k);
	//		switch (k){
	//		case 1:
	//			play(num);
	//			goto menu;
	//		case 2:
	//			break;
	//		}
	//	}
	//	return 0;
	//	}


//实现一个函数，判断一个数是不是素数
//利用上面实现的函数打印100到200之间的素数
//int prime(int x){
//	int i;
//	int t = sqrt((double)x);
//	for (i = 2; i <= t; i++){
//		if (x%i == 0){
//			return 0;
//		}
//	}
//		return 1;
//}
//int main(){
//	int num, ret, j;
//	int count = 0;
//	for (num = 100; num <= 200; num++){
//			ret = prime(num);//调用prime函数
//			if (ret == 1){
//				printf("%d ", num);
//				count++;
//				if (count % 10 == 0)//10数字为一行输出，美观
//					printf("\n");
//			}
//			}
//
//}

//实现函数判断year是不是润年
//int LeapYear(int year){
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
//		return 0;
//	}
//	return 1;
//}
//int main(){
//	int year;
//	printf("请输入需要判断的年份：");
//	scanf("%d", &year);
//	int ret = LeapYear(year);
//	if (ret == 0)
//		printf("%d是闰年\n",year);
//	if (ret == 1)
//		printf("%d不是闰年\n", year);
//}

//实现一个函数来交换两个整数的内容
////实参与形参之间是单向的值传递
////函数参数是指针的形式可以实现修改实参的值
//void Exchange(int* x,int* y){
//	int t;
//	t = *x;
//	*x = *y;
//	*y = t;
//}
//int main(){
//	printf("请输入两个整数：");
//	int num1,num2;
//	int *p1, *p2;
//	scanf("%d %d", &num1, &num2);
//	p1 = &num1;
//	p2 = &num2;
//	Exchange(p1, p2);
//	printf("%d %d\n", num1, num2);
//}

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表
//void MulTable(int x){
//	int i, j;
//	int sum;
//	for (i = 1; i <= x; i++){
//		for (j = 1; j <= i; j++){
//			sum = i*j;
//			printf("%d*%d=%-4d", j, i, sum);
//		}
//		printf("\n");
//	}
//}
//int main(){
//	printf("请输入口诀表的行数：");
//	int x;
//	scanf("%d", &x);
//	MulTable(x);
//	return 0;
//}

//递归方式实现打印一个整数的每一位
//个位数可以直接打印
//void print(int n){
//	//整除10的商若大于一位数，则继续调用print函数
//	if (n > 9){
//		print(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//int main(){
//	int num;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//递归：

//int Factory(int n){
//	int f;
//	if (n == 0 || n == 1){
//		f = 1;
//	}
//	else if (n < 0){
//		printf("请输入一个大于0的整数！");
//	}
//	else
//		f = Factory(n - 1)*n;
//	return f;
//}
//int main(){
//	int n;
//	printf("请输入一个整数：");
//	scanf("%d", &n);
//	int ret = Factory(n);
//	printf("%d\n", ret);
//}

//非递归：
int main(){
	int n;
	int i = 2;
	printf("请输入一个整数：");
	scanf("%d", &n);
	int ret = 1;
	while (i <= n){
		ret = ret*i;
		i = i + 1;
	}
	printf("%d\n", ret);
}