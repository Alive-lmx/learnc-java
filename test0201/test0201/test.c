#include<stdio.h>
//#include<string.h>
#include<math.h>
////дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
////arr��һ������һά����
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


//дһ����������������һ���ַ��������ݡ�
//hello world
//dello worlh
//dlllo woreh
//����
//void reverse(char* str, int len){//char* str�ȼ���char str[]
//	char* left = str;
//	char* right = str + len - 1;//str��һ��ָ��
//	while (left < right){//������λ�ַ�
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;//ָ���׵�ַ��ָ����ƣ�
//		right--;//ָ��β��ַ��ָ��ǰ��ֱ������
//	}
//}
//int main(){
//	char str[] = "hello world";
//	printf("����ǰ���ַ���Ϊ��%s\n", str);
//	int len = strlen(str);
//	reverse(str, len);
//	printf("�������ַ���Ϊ��%s\n", str);
//	return 0;
//}


//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
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
	printf("��a=%dʱ��ǰ����֮��Ϊ��%d\n", a, ret);
}