#define _CRT_SECURE_NO_WARNINGS 1
//// ���ֲ��ҷ�
//#include <stdio.h>
//int main()
//{
//	int arr[] = {11,12,13,14,15,16,17,18,19,20};
//	int k = 17;
//	
//	// ���������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//	while(left <= right)
//	{
//		// ����������м��±�
//		int mid = (left + right) / 2;
//		if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else {
//			printf("�ҵ��ˣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("�Ҳ���");
//	}
//	return 0;
//}

//��ʾ�ַ����������м���
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