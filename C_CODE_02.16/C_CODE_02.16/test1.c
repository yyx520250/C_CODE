#define _CRT_SECURE_NO_WARNINGS 1

//// 打印1000到2000之间的闰年
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	for (year = 1000; year <= 2000; year++) {
//		// 判断year是不是闰年
//		// 1、能被4整除不能被100整除是闰年
//		// 2、能被400整除是闰年
//		if (year % 4 == 0) {
//			if (year % 100 != 0) {
//				printf("%d\n", year);
//				count++;
//			}
//		}
//		if (year % 400 == 0) {
//			printf("%d\n", year);
//			count++;
//		}
//	}
//	printf("一共有%d个闰年", count);
//	return 0;
//}

//// 打印1000到2000之间的闰年
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	for (year = 1000; year <= 2000; year++) {
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//			printf("%d\n", year);
//			count++;
//		}
//	}
//	printf("一共有%d个闰年", count);
//	return 0;
//}

//// 打印100到200之间的素数
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//
//	for (i = 100; i <= 200; i++) {
//		// 判断i是否为素数
//		// 只能被1和其本身整除的数字
//		for (a = 2; a < i; a++) {
//			if (i%a == 0) {
//				break;
//			}
//		}
//		if (i == a) {
//			printf("%d是素数\n",i);
//		}
//	}
//	return 0;
//}

//// 打印100到200之间的素数（方法二）
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 100; i <= 200; i++) {
//		int flag = 1;	// 假设是素数
//
//		for (tmp = 2; tmp < i; tmp++) {
//			if (i % tmp == 0) {
//				flag = 0;	// 不是素数
//				break;
//			}
//		}
//		if (flag == 1) {
//			printf("%d是素数\n", i);
//		}
//	}
//	return 0;
//}

//// 打印100到200之间的素数（方法三）
//// i = a*b
//// a 和 b 中一定有一个数字是 <= 开平方 m 的
//// 16=2*8=4*4
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int tmp = 0;
//
//	for (i = 100; i <= 200; i++) {
//		int flag = 1;	// 假设i就是素数
//		// sqrt是一个开平方函数 -- math.h
//		for (tmp = 2; tmp < sqrt(i); tmp++) {	
//			if (i%tmp == 0) {
//				flag = 0;	// 不是素数
//				break;
//			}
//		}
//		if (flag == 1) {
//			printf("%d是素数\n", i);
//		}
//	}
//	return 0;
//}

//// 打印100到200之间的素数（方法四）
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int tmp = 0;
//
//	for (i = 101; i <= 200; i+=2) {
//		int flag = 1;	// 假设是素数
//		// sqrt是一个开平方函数 -- math.h
//		for (tmp = 2; tmp <= sqrt(i); tmp++) {
//			if (i%tmp == 0) {
//				flag = 0;	// 不是素数
//				break;
//			}
//		}
//		if (flag == 1) {
//			printf("%d是素数\n", i);
//		}
//	}
//	return 0;
//}

//// goto语句
//// 关机程序
//// 一分钟后关机命令：shutdown -s -t 60
//// 取消关机：shutdown -a 
//// 只要运行起来，电脑就会在1分钟内关机，如果输入：congratulations，就取消关机
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[20] = {0};
//	// 关机
//	// C语言提供了一个函数：system() - 执行系统命令的 -- stdlib.h
//	system("shutdown -s -t 60");
//
//again:
//	printf("您的电脑将在一分钟后关机，输入：congratulations，取消关机\n");
//	printf("请输入：");
//	scanf("%s", input);
//	
//	// 如果输入的为congratulations就取消关机，否则goto语句跳转回去再次询问
//	// strcmp -- 比较两个字符串是否一样，一样返回0 -- string.h
//	if (strcmp(input, "congratulations") == 0) {
//		system("shutdown -a");
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}

//// strcpy - 字符串拷贝函数的使用
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "congratulations";
//	char arr2[20] = { 0 };
//
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}

// memset - 内存覆盖函数的使用
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = "congratulations";
//	memset(arr1,'*',5);
//	printf("%s", arr1);
//	return 0;
//}

// 判断两个数的最大值
#include <stdio.h>
int Max(int x, int y) 
{
	int max = 0;
	max = x > y ? x : y;
	return max;
}

int main()
{
	int a = 0;
	int b = 0;
	int max = 0;

	printf("请输入两个数：");
	scanf("%d %d", &a, &b);
	max = Max(a, b);
	printf("%d和%d的最大值是：%d", a, b, max);

	return 0;
}