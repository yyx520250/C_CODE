#define _CRT_SECURE_NO_WARNINGS 1
//// 二分查找法
//#include <stdio.h>
//int main()
//{
//	int arr[] = {11,12,13,14,15,16,17,18,19,20};
//	int k = 17;
//	
//	// 计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//	while(left <= right)
//	{
//		// 计算数组的中间下标
//		int mid = (left + right) / 2;
//		if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else {
//			printf("找到了：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("找不到");
//	}
//	return 0;
//}

//演示字符从两端向中间汇聚
#include <stdio.h>
int main()
{
	char arr1[] = "<<la la land>>";
	char arr2[] = "##############";
	
	int left = 0;
	int right = strlen(arr1) - 1;

	while(left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
	}
	return 0;
}