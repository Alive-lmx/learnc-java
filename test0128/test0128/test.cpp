#include<stdio.h>
////实现一个对整形数组的冒泡排序
//void  Bubble(int arr[],int len){
//	int i, j, k=0;
//	for (i = 0; i < len-1; i++){//一共len个数,比较len-1趟
//		for (j = 0; j < len-1-i; j++){//每一趟比较len-1-i次
//			if (arr[j] >arr[j+1]){//如果第一个一个数大于第二个数，交换位置，再比较第二个数和第三个数
//				k = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = k;
//			}
//		}
//	}
//	for (i = 0; i < len; i++){
//		printf("%d ", arr[i]);
//	}
//}
//int main(){
// 	int arr[] = { 4, 5, 6, 2, 3, 1, 8, 9, 7 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Bubble(arr,len);
//	printf("\n");
//}


//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值
//int init(int arr[],int len){
//	int i;
//	for (i = 0; i < len; i++)
//		arr[i] = 0;
//	return 0;
//}
//int print(int arr1[],int len){
//	int i;
//	for (i = 0; i < len ; i++)
//		printf("%d ", arr1[i]);
//	printf("\n");
//	return 0;
//}
////asdfg gfdsa
//int reverse(int arr2[],int i,int len){
//	int tmp = 0;
//	//i与len没有相遇
//	if (len > i){
//		//交换第一个元素与最后一个元素
//		tmp = arr2[i];
//		arr2[i] = arr2[len - 1];
//		arr2[len - 1] = tmp;
//		//交换第二个元素与倒数第二个元素
//		reverse(arr2,i+1,len - 1);
//	}
//	return 0;
//}
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//init(arr,len);
//	//int i;
//	//for (i = 0; i < len; i++)
//	//	printf("%d ", arr[i]);
//	//printf("\n");
//
//	//print(arr,len);
//	reverse(arr,0, len);
//	print(arr, len);
//}

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//int exchange_arr(int a[], int b[],int len){
//	int i, t = 0;
//	for (i = 0; i < len; i++){//交换a[0],b[0];a[1],b[1];...
//		t = a[i];
//		a[i] = b[i];
//		b[i] = t;
//	}
//	return 0;
//}
//int main(){
//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[] = { 5, 6, 7, 8 };
//	int i;
//	int len = sizeof(arr1) / sizeof(arr1[0]);//计算数组的长度
//	exchange_arr(arr1, arr2, len);
//	for (i = 0; i < len; i++){
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < len; i++){
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c=6,a=6
//	b = ++c, c++, ++a, a++;//c=7,c=8,a=7,a=8,b=7
//	b += a++ + c;//b=b+a++ + c=23
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
//int main(){
//	int a, b, c;
//	int i;
//	int count = 0;
//	printf("请输入两个整数：");
//	scanf_s("%d%d", &a, &b);
//	c = a^b;//相异为1，相同结果为0
//	//检查c中有几个1：
//			for (i = 0; i < 32; i++)
//			{
//				if (((c >> i) & 1) == 1)
//					//每次左移都拿c的最后一个二进制位按位与1，结果为1，，count+1
//				{
//					count++;
//				}
//			}
//			printf("%d\n", count);
//			return 0;
//}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main(){
//	int a;
//	int i;
//	printf("请输入一个整数：");
//	scanf_s("%d", &a);
//	printf("整数的奇数位序列为：");
//	for (i =0; i < 32;i=i+2 ){
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("整数的奇数位序列为：");
//	for (i = 1; i <32; i = i+2 ){
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//	
//}

//写一个函数返回参数二进制中 1 的个数。
//比如： 15    0000 1111    4 个 1
//int count(int a){
//	int i;
//	int num = 0;
//	for (i = 0; i < 32; i++){
//		if (((a >> i) & 1) == 1){
//			num++;
//		}
//	}
//	return num;
//}
//int main(){
//	int a;
//	printf("请输入一个整数：");
//	scanf_s("%d", &a);
//	int ret = count(a);
//	printf("%d\n", ret);
//}
//


//不允许创建临时变量，交换两个整数的内容
int main(){
	int a = 4;
	int b = 5;
	printf("交换前的两数为：a=%d,b=%d\n", a, b);
	a = a^b;
	b = a^b;//a^b^b=a^0=a
	a = a^b;//a^b^a^b^b=b
	printf("交换后的两数为：a=%d,b=%d\n", a, b);
	return 0;
}