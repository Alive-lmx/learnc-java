////偶数一定不是素数，不用对偶数进行判定
#include <stdio.h>
//#include<math.h>
//int main(){
//	int  k, i, m = 0;
//	int  n;
//	//直接判定奇数
//	for (n = 101; n <= 200; n = n + 2){
//		//sqrt的参数是double float long 型
//		k = sqrt(double(n));
//		for (i = 2; i <= k; i++){
//			if (n % i == 0)
//				break;
//		}//能整除，不是素数
//			if (i >= k + 1){
//				printf("%d ", n);//是素数，打印
//				m = m + 1;
//			}
//			//十个为一行打印，排版整齐~~
//			if (m % 10 == 0)
//				printf("\n");
//		}
//		printf("\n");
//		return 0;
//}
//9,19,29,39,49,59,69,79,89,90,91,...,99
//int main(){
//
//	int i;
//	int count = 0;
//	for (i = 1; i <= 100; i++){
//		//9在个位整除10取余为9
//		if (i % 10 == 9)
//			count++;
//		//9在十位时除十商为9
//		//比较特殊的是99，有两个9，被计算两次
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
////分母为奇数前面为加号，分母为偶数前面为减号
//int main(){
//	double  sum = 0;
//	int i;
//	for (i = 1; i <= 100; i++){
//		if (i % 2 == 1)
//			sum  = sum + (1 / (double)i);
//		else
//			sum  = sum - ( 1 / (double)i);
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 15, 22 };
	int k;
	printf("请输入要找的数字：");
	scanf_s("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组中元素的个数
	int left = 0;//最左边元素的下标为0
	int right = sz - 1;//最右边元素的下标为sz-1
	while (left <= right){
		int mid = (left + right) / 2;//中间数的下标
		if (arr[mid] > k){
			right = mid - 1;//中间数在k的右边，查找范围变为最左边元素和中间数前一个元素之间
		}
		else if (arr[mid] < k){
			left = mid + 1;//中间数在k的左边，查找范围变为最右边元素和中间数后一个元素之间
		}
		else{
			printf("找到了！，下标是：%d\n", mid);
			break;
		}
	}
	if (left>right)
		printf("找不到！");
	return 0;
}