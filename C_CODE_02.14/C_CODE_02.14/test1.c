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

////演示字符从两端向中间汇聚
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "<<la la land>>";
//	char arr2[] = "##############";
//	
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while(left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//
//		Sleep(1000);	// 休眠1毫秒
//		system("cls");	// 清空屏幕
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20];
//	// 假设正确的密码是123456
//
//	for (i = 1; i < 4; i++) {
//		printf("请输入密码：");
//		scanf("%s", password);
//		
//		// 两个字符串的比较不能使用 == ，应该使用strcmp这个函数，strcmp比较的是对应位置上的ASCII值
//		if (strcmp(password, "123456") == 0 ) {
//			printf("登录成功\n");
//			break;
//		}
//		else {
//			printf("第%d次输入，密码错误\n", i);
//		}
//	}
//	if (i == 4) {
//		printf("三次密码均错误，退出程序");
//	}
//	return 0;
//}
//// 猜数字游戏
//// 1.自动产生一个1-100之间的随机数
//// 2.猜数字
////	 a.猜对了,congratulations，猜的次数为...
////   b.猜错了。会告诉猜大了还是猜小了，继续猜直到猜对
//// 3.游戏会一直运行（无论对错），除非退出游戏
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//void menu()
//{
//	printf("#####################\n");
//	printf("#      0.end        #\n");
//	printf("#      1.start      #\n");
//	printf("#####################\n");
//}
//
//void game()
//{
//	int flag = 1;
//	int sum = 0;
//	int user = 0;
//	// 猜数字游戏的实现
//	// 1、生成随机数
//	// rand函数返回一个0-32767之间的数字
//	// time函数默认是带有参数的，这里不需要参数所以指定NULL
//	// time函数返回的类型是time_t类型，是一个整型
//	// 但是srand需要的是一个无符号类型
//
//	//srand((unsigned int)time(NULL));
//	int ret = rand()%100+1;		// %100的余数是0-99，然后加1，范围就是1-100
//	
//	// 2、猜数字
//	while (flag) {
//		printf("请输入您的数字：");
//		scanf("%d", &user);
//		
//		if (user > ret) {
//			printf("猜大了\n");
//			sum++;
//		}
//		else if (user < ret) {
//			printf("猜小了\n");
//			sum++;
//		}
//		else{
//			sum++;
//			printf("Congratulations，您一共猜了%d次，数字为：%d\n", sum, ret);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input;
//	srand((unsigned int)time(NULL));
//
//	do {
//		menu();		// 打印菜单
//		printf("请输入你的选择：");
//		scanf("%d",&input);
//
//		switch (input) {
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("选择错误，重新选择\n");
//				break;
//		}
//	} while (input);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 0;
//	switch(a)
//	{
//	case 1: b = 11;
//	default: b = 13;
//	case 2: b = 12;
//	case 3: b = 14;
//	}
//	printf("%d", b);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 3;
	int c;
	printf("%d", a / b);
	return 0;
}