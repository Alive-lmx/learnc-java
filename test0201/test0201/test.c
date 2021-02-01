#include<stdio.h>
//#include<string.h>
#include<math.h>
////写一个函数打印arr数组的内容，不使用数组下标，使用指针。
////arr是一个整形一维数组
//void Print(int arr[],int len){
//	int i;
//	int* p = arr;
//	for (i = 0; i < len; i++){
//		printf("%d ", *(p + i));
//	}
//}
//int main() {
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Print(arr,len);
//	printf("\n");
//	return 0;
//}


//写一个函数，可以逆序一个字符串的内容。
//hello world
//dello worlh
//dlllo woreh
//……
//void reverse(char* str, int len){//char* str等价于char str[]
//	char* left = str;
//	char* right = str + len - 1;//str是一个指针
//	while (left < right){//交换首位字符
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;//指向首地址的指针后移，
//		right--;//指向尾地址的指针前移直至相遇
//	}
//}
//int main(){
//	char str[] = "hello world";
//	printf("逆序前的字符串为：%s\n", str);
//	int len = strlen(str);
//	reverse(str, len);
//	printf("逆序后的字符串为：%s\n", str);
//	return 0;
//}


//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
int  sum(int* num){
	int i;
	int sum = 0;
	int arr[5] = { 0 };
	arr[0] = *num;
	for (i = 1; i < 5; i++){
		arr[i] = arr[i-1]+(*num) * pow(10,i);
	}
	for (i = 0; i < 5; i++){
		sum = sum + arr[i];
	}
	return sum;
}
int main(){
	int a = 2;
	int ret = sum(&a);
	printf("当a=%d时，前五项之和为：%d\n", a, ret);
}