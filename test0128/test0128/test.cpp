#include<stdio.h>
////ʵ��һ�������������ð������
//void  Bubble(int arr[],int len){
//	int i, j, k=0;
//	for (i = 0; i < len-1; i++){//һ��len����,�Ƚ�len-1��
//		for (j = 0; j < len-1-i; j++){//ÿһ�˱Ƚ�len-1-i��
//			if (arr[j] >arr[j+1]){//�����һ��һ�������ڵڶ�����������λ�ã��ٱȽϵڶ������͵�������
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


//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ
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
//	//i��lenû������
//	if (len > i){
//		//������һ��Ԫ�������һ��Ԫ��
//		tmp = arr2[i];
//		arr2[i] = arr2[len - 1];
//		arr2[len - 1] = tmp;
//		//�����ڶ���Ԫ���뵹���ڶ���Ԫ��
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

//������A�е����ݺ�����B�е����ݽ��н�����������һ����
//int exchange_arr(int a[], int b[],int len){
//	int i, t = 0;
//	for (i = 0; i < len; i++){//����a[0],b[0];a[1],b[1];...
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
//	int len = sizeof(arr1) / sizeof(arr1[0]);//��������ĳ���
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

//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
//int main(){
//	int a, b, c;
//	int i;
//	int count = 0;
//	printf("����������������");
//	scanf_s("%d%d", &a, &b);
//	c = a^b;//����Ϊ1����ͬ���Ϊ0
//	//���c���м���1��
//			for (i = 0; i < 32; i++)
//			{
//				if (((c >> i) & 1) == 1)
//					//ÿ�����ƶ���c�����һ��������λ��λ��1�����Ϊ1����count+1
//				{
//					count++;
//				}
//			}
//			printf("%d\n", count);
//			return 0;
//}

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//int main(){
//	int a;
//	int i;
//	printf("������һ��������");
//	scanf_s("%d", &a);
//	printf("����������λ����Ϊ��");
//	for (i =0; i < 32;i=i+2 ){
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("����������λ����Ϊ��");
//	for (i = 1; i <32; i = i+2 ){
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//	
//}

//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1
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
//	printf("������һ��������");
//	scanf_s("%d", &a);
//	int ret = count(a);
//	printf("%d\n", ret);
//}
//


//����������ʱ������������������������
int main(){
	int a = 4;
	int b = 5;
	printf("����ǰ������Ϊ��a=%d,b=%d\n", a, b);
	a = a^b;
	b = a^b;//a^b^b=a^0=a
	a = a^b;//a^b^a^b^b=b
	printf("�����������Ϊ��a=%d,b=%d\n", a, b);
	return 0;
}