#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>


////��10 �����������ֵ

//	int arr[10];//����һ��������10������
//	int i, t;
//	printf("������10��������");
//	for (i = 0; i <= 9; i++){
//		scanf_s("%d", &arr[i]);//��ʼ������
//		printf("\n");
//	}
//	i = 0;
//	t = arr[0];//����̨���ְ���������Ϊarr[0],������һ�����Ƚ�
//	for (i = 1; i < 10; i++){
//		//�����������ô��������
//		if (t>arr[i])
//			continue;
//		//�������С��������Ϊ���������
//		else{
//			t = arr[i];
//		}
//	}
//	printf("%d", t);
//	printf("\n");
//	return 0;


////����Ļ�����9*9�˷��ھ���

//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 1; i <= 9; i++){//��������
//		for (j = 1; j <= i; j++){//��������
//			sum = i*j;//������
//			printf("%d*%d=%-4d", j, i, sum);
//		}

//		printf("\n");
//	}
//	return 0;

//����ϿεĲ�������Ϸ


	//void play(int x){
	//	int number = 0;
	//	printf("����������\n");

	//case0:
	//	{
	//		scanf("%d", &number);
	//		while (number != x)
	//		{
	//			if (number > x)
	//			{
	//				printf("���ˣ�\n"); goto case0;
	//			}
	//			else
	//			{
	//				printf("С�ˣ�\n"); goto case0;
	//			}

	//		}printf("��ȷ��\n");
	//	}
	//}

	//int main()
	//{
	//	int k;
	//	//int num = 65;
	//	int num;
	//	srand((int)time(NULL));//��ʱ����Ϊ��������ӣ��������������ͬ
	//	num = rand() % 100;//����0~100�������
	//menu:
	//	{
	//		printf("��ʼ��Ϸ\n1.��ʼ\n2.�˳�\n");
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


//ʵ��һ���������ж�һ�����ǲ�������
//��������ʵ�ֵĺ�����ӡ100��200֮�������
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
//			ret = prime(num);//����prime����
//			if (ret == 1){
//				printf("%d ", num);
//				count++;
//				if (count % 10 == 0)//10����Ϊһ�����������
//					printf("\n");
//			}
//			}
//
//}

//ʵ�ֺ����ж�year�ǲ�������
//int LeapYear(int year){
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
//		return 0;
//	}
//	return 1;
//}
//int main(){
//	int year;
//	printf("��������Ҫ�жϵ���ݣ�");
//	scanf("%d", &year);
//	int ret = LeapYear(year);
//	if (ret == 0)
//		printf("%d������\n",year);
//	if (ret == 1)
//		printf("%d��������\n", year);
//}

//ʵ��һ��������������������������
////ʵ�����β�֮���ǵ����ֵ����
////����������ָ�����ʽ����ʵ���޸�ʵ�ε�ֵ
//void Exchange(int* x,int* y){
//	int t;
//	t = *x;
//	*x = *y;
//	*y = t;
//}
//int main(){
//	printf("����������������");
//	int num1,num2;
//	int *p1, *p2;
//	scanf("%d %d", &num1, &num2);
//	p1 = &num1;
//	p2 = &num2;
//	Exchange(p1, p2);
//	printf("%d %d\n", num1, num2);
//}

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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
//	printf("������ھ����������");
//	int x;
//	scanf("%d", &x);
//	MulTable(x);
//	return 0;
//}

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//��λ������ֱ�Ӵ�ӡ
//void print(int n){
//	//����10����������һλ�������������print����
//	if (n > 9){
//		print(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//int main(){
//	int num;
//	printf("������һ��������");
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//�ݹ飺

//int Factory(int n){
//	int f;
//	if (n == 0 || n == 1){
//		f = 1;
//	}
//	else if (n < 0){
//		printf("������һ������0��������");
//	}
//	else
//		f = Factory(n - 1)*n;
//	return f;
//}
//int main(){
//	int n;
//	printf("������һ��������");
//	scanf("%d", &n);
//	int ret = Factory(n);
//	printf("%d\n", ret);
//}

//�ǵݹ飺
int main(){
	int n;
	int i = 2;
	printf("������һ��������");
	scanf("%d", &n);
	int ret = 1;
	while (i <= n){
		ret = ret*i;
		i = i + 1;
	}
	printf("%d\n", ret);
}