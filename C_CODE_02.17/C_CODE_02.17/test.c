#define _CRT_SECURE_NO_WARNINGS 1

//// ��ӡ100��200֮�����������
//#include <stdio.h>
//#include <math.h>
//int is_prime(int a)
//{
//	int b = 0;
//	int flag = 1;
//
//	for (b = 2; b <= sqrt(a); b++) {
//		if (a%b == 0) {
//			return 0;	// ������������0
//		}
//	}
//	return 1;	// ����������1
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	
//	for (i = 100; i <= 200; i++) {
//		// �ж�i�Ƿ�Ϊ����
//		if((is_prime(i)) == 1){
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("100��200֮��һ���У�%d������\n", count);
//	return 0;
//}

// дһ���������ж�1000��2000֮����Щ��������
// �ܱ�4�������ܱ�100����������
// �ܱ�400����������
#include <stdio.h>
//int is_leap_year(int y)
//{
//	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//int is_leap_year(int y)
//{
//	if (y % 4 == 0 && y % 100 != 0)  {
//		return 1;
//	}
//	else if(y % 400 == 0) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//int main()
//{
//	int y = 0;
//	int flag = 1;
//
//	for (y = 1000; y <= 2000; y++) {
//		// �ж��Ƿ�Ϊ����
//		if (is_leap_year(y) == 1) {
//			printf("%d������\n",y);
//		}
//	}
//	return 0;
//}

//// дһ������ʵ��������������Ķ��ֲ���
//#include <stdio.h>
//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (a[mid] > k) {
//			right = mid - 1;
//		}
//		else if (a[mid] < k) {
//			left = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;	// �Ҳ���
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	// �ҵ��˾ͷ����ҵ�λ�õ��±�
//	// �Ҳ����ͷ���-1
//	ret = binary_search(arr, key, sz);
//	if (-1 == ret) {
//		printf("�Ҳ���");
//	}
//	else {
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
