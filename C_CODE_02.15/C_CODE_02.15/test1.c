//// 打印三的倍数（方法一）
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//
//// 打印三的倍数（方法二）
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i += 3) {
//		printf("%d\n", i);
//	}
//	return 0;
//}

//// 求两个数的最大公约数
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	printf("请输入两个数字：");
//	scanf("%d %d", &a, &b);
//
//	int max = a > b ? b : a;
//
//	while (1) {
//		if (a%max == 0 && b%max == 0) {
//			printf("%d和%d的最大公约数是：%d",a, b, max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//// 三个数字的排序
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//
//	printf("请输入三个数字：");
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a < b) {
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c) {
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c) {
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
// 辗转相除法
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//
//	printf("请输入两个数字：");
//	scanf("%d %d", &m, &n);
//	
//	while (t = m % n) {
//		m = n;
//		n = t;
//	}
//	printf("最大公约数是：%d", n);
//	return 0;
//}

// 求两个数的最小公倍数，最小公倍数两个或多个整数公有的倍数叫做它们的公倍数
// 最小公倍数 = 两数相乘/最大公约数
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//
//	printf("请输入两个数字：");
//	scanf("%d %d", &num1, &num2);
//
//	int a = num1;
//	int b = num2;
//	int t = 0;
//	while (t = a % b) {
//		a = b;
//		b = t;
//	}
//	printf("两个数的最大公约数为：%d\n", b);
//	
//	int c = num1;
//	int d = num2;
//	int max = 0;
//	max = c * d / b;
//	printf("两个数的最小公倍数为：%d\n", max);
//	return 0;
//};

// 打印1000到2000之间的闰年
#include <stdio.h>
int main()
{
	int i = 1000;

	for (i = 1000; i <= 2000; i++) {
		if (i % 4 == 0 && i % 100 != 0) {

		}
	}
	return 0;
}