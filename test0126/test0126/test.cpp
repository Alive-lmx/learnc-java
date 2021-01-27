#include<stdio.h>
//递归和非递归分别实现strlen
//int mystrlen(char* string){
//	int count = 0;
//	while (*string != '\0'){
//		count++;
//		string++;
//	}
//	return count;
//}
//int main(){
//	char string[] = "asdfghj";
//	int ret = mystrlen(string);
//	printf("%d\n", ret);
//	return 0;
//}

//递归
//int mystrlen(char* string){
//	if (*string != '\0'){
//		return 1 + mystrlen(string + 1);
//	}
//	else{
//		return 0;
//	}
//}
//int main(){
//	char string[] = "qwerty";
//	int ret = mystrlen(string);
//	printf("%d\n", ret);
//	return 0;
//
//}

//编写一个函数 reverse_string(char * string)（递归实现)
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//int reverse_string(char* string){
//	int length = mystrlen(string);
//	char str = *string;//将字符串中第一个字符放在str中
//	*string = *(string + length - 1);//最后一个字符放在string[0]中
//	*(string + length - 1) = '\0';//最后一个字符所在的位置是0
//	if (mystrlen(string) >= 2){
//		reverse_string(string + 1);
//	}
//	*(string + length - 1) = str;
//	return 0;
//}
//int main(){
//	char arr[] = "asdfgh";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//int DigitSum(int n){
//	int sum = 0;
//	int m = 0;
//	if (n != 0){
//		m = n % 10;
//		n = n / 10;
//		sum = m + DigitSum(n);
//	}
//	return sum;
//}
//int main(){
//	int a;
//	printf("请输入一个整数：");
//	scanf_s("%d", &a);
//	int ret = DigitSum(a);
//	printf("各数之和为：%d\n",ret);
//}


//编写一个函数实现n的k次方，使用递归实现。
//int Power(int n,int k){
//	int m = 0;
//	if (k == 0){//任何数的0次方都为1
//		return 1;
//	}
//	else{
//		m = n*Power(n,k - 1);
//	}
//	return m;
//}
//int main(){
//	int n = 0;
//	int k = 0;
//	printf("请输入n和k:");
//	scanf_s("%d %d", &n,&k);
//	int ret = Power(n, k);
//	printf("n的k次方为：%d\n", ret);
//	return 0;
//}


//递归和非递归分别实现求第n个斐波那契数
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1
//Fibonacci：1 1 2 3 5 8 13 21...
//1、递归：
//int Fibonacci(int n){
//	if (n == 1||n == 2){
//		return 1;
//	}
//	else{
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//}
//int main(){
//	int n;
//	printf("请输入您需要求的第n个Fibonacci数:");
//	scanf_s("%d", &n);
//	int ret = Fibonacci(n);
//	printf("第%d个Fibonacci数为：%d\n",n,ret);
//}


//2、非递归：
int Fibonacci(int n){
	int num1 = 1;
	int num2 = 1;
	int tmp=0;
	int i;
	if (n<3){
		return 1;
	}
	else{
		for (i = 0; i<n-2; i++){//需要除去第一个、第二个数，因此是n-2
			tmp = num1 + num2;
			num1 = num2;
			num2 = tmp;
		}
		return tmp;
	}
}

int main(){
	int n;
	printf("请输入您需要求的第n个Fibonacci数:");
	scanf_s("%d", &n);
	int ret = Fibonacci(n);
	printf("第%d个Fibonacci数为：%d\n", n, ret);
}
