#include<stdio.h>
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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

//�ݹ�
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

//��дһ������ reverse_string(char * string)���ݹ�ʵ��)
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//int reverse_string(char* string){
//	int length = mystrlen(string);
//	char str = *string;//���ַ����е�һ���ַ�����str��
//	*string = *(string + length - 1);//���һ���ַ�����string[0]��
//	*(string + length - 1) = '\0';//���һ���ַ����ڵ�λ����0
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

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
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
//	printf("������һ��������");
//	scanf_s("%d", &a);
//	int ret = DigitSum(a);
//	printf("����֮��Ϊ��%d\n",ret);
//}


//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//int Power(int n,int k){
//	int m = 0;
//	if (k == 0){//�κ�����0�η���Ϊ1
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
//	printf("������n��k:");
//	scanf_s("%d %d", &n,&k);
//	int ret = Power(n, k);
//	printf("n��k�η�Ϊ��%d\n", ret);
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1
//Fibonacci��1 1 2 3 5 8 13 21...
//1���ݹ飺
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
//	printf("����������Ҫ��ĵ�n��Fibonacci��:");
//	scanf_s("%d", &n);
//	int ret = Fibonacci(n);
//	printf("��%d��Fibonacci��Ϊ��%d\n",n,ret);
//}


//2���ǵݹ飺
int Fibonacci(int n){
	int num1 = 1;
	int num2 = 1;
	int tmp=0;
	int i;
	if (n<3){
		return 1;
	}
	else{
		for (i = 0; i<n-2; i++){//��Ҫ��ȥ��һ�����ڶ������������n-2
			tmp = num1 + num2;
			num1 = num2;
			num2 = tmp;
		}
		return tmp;
	}
}

int main(){
	int n;
	printf("����������Ҫ��ĵ�n��Fibonacci��:");
	scanf_s("%d", &n);
	int ret = Fibonacci(n);
	printf("��%d��Fibonacci��Ϊ��%d\n", n, ret);
}
