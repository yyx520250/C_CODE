#define _CRT_SECURE_NO_WARNINGS 1

//// 打印100到200之间的素数函数
//#include <stdio.h>
//#include <math.h>
//int is_prime(int a)
//{
//	int b = 0;
//	int flag = 1;
//
//	for (b = 2; b <= sqrt(a); b++) {
//		if (a%b == 0) {
//			return 0;	// 不是素数返回0
//		}
//	}
//	return 1;	// 是素数返回1
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	
//	for (i = 100; i <= 200; i++) {
//		// 判断i是否为素数
//		if((is_prime(i)) == 1){
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("100到200之间一共有：%d个素数\n", count);
//	return 0;
//}

// 写一个函数，判断1000到2000之间那些年是闰年
// 能被4整除不能被100整除是闰年
// 能被400整除是闰年
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
//		// 判断是否为闰年
//		if (is_leap_year(y) == 1) {
//			printf("%d是闰年\n",y);
//		}
//	}
//	return 0;
//}

//// 写一个函数实现整型有序数组的二分查找
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
//	return -1;	// 找不到
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	// 找到了就返回找到位置的下标
//	// 找不到就返回-1
//	ret = binary_search(arr, key, sz);
//	if (-1 == ret) {
//		printf("找不到");
//	}
//	else {
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
