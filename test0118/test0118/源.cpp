////ż��һ���������������ö�ż�������ж�
#include <stdio.h>
//#include<math.h>
//int main(){
//	int  k, i, m = 0;
//	int  n;
//	//ֱ���ж�����
//	for (n = 101; n <= 200; n = n + 2){
//		//sqrt�Ĳ�����double float long ��
//		k = sqrt(double(n));
//		for (i = 2; i <= k; i++){
//			if (n % i == 0)
//				break;
//		}//����������������
//			if (i >= k + 1){
//				printf("%d ", n);//����������ӡ
//				m = m + 1;
//			}
//			//ʮ��Ϊһ�д�ӡ���Ű�����~~
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
//		//9�ڸ�λ����10ȡ��Ϊ9
//		if (i % 10 == 9)
//			count++;
//		//9��ʮλʱ��ʮ��Ϊ9
//		//�Ƚ��������99��������9������������
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
////��ĸΪ����ǰ��Ϊ�Ӻţ���ĸΪż��ǰ��Ϊ����
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
//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 15, 22 };
	int k;
	printf("������Ҫ�ҵ����֣�");
	scanf_s("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);//����������Ԫ�صĸ���
	int left = 0;//�����Ԫ�ص��±�Ϊ0
	int right = sz - 1;//���ұ�Ԫ�ص��±�Ϊsz-1
	while (left <= right){
		int mid = (left + right) / 2;//�м������±�
		if (arr[mid] > k){
			right = mid - 1;//�м�����k���ұߣ����ҷ�Χ��Ϊ�����Ԫ�غ��м���ǰһ��Ԫ��֮��
		}
		else if (arr[mid] < k){
			left = mid + 1;//�м�����k����ߣ����ҷ�Χ��Ϊ���ұ�Ԫ�غ��м�����һ��Ԫ��֮��
		}
		else{
			printf("�ҵ��ˣ����±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left>right)
		printf("�Ҳ�����");
	return 0;
}