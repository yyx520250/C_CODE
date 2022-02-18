#define _CRT_SECURE_NO_WARNINGS 1
//// 函数的嵌套调用
//// main函数调用test1，test1调用test2
//#include <stdio.h>
//int test2()
//{
//	printf("haha\n");
//	return 0;
//}
//
//int test1()
//{
//	test2();
//	return 0;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

// 函数的链式访问
//#include <stdio.h>
//int main()
//{
//	// printf()函数返回的是打印在屏幕上的字符的个数
//	// printf("%d", (printf("%d", (printf("%d", 43)))));
//	// 3、打印个数1	 2、打印个数2	1、打印43
//	printf("%d", (printf("%d", (printf("%d", 43)))));
//	return 0;
//}
//#include <stdio.h>
//#include "add.h"
//
//int main()
//{
//	int sum = 0;
//	int a = 10;
//	int b = 20;
//	int sub = 0;
//
//	sum = Add(a,b);
//	printf("%d\n", sum);
//
//	sub = Sub(a, b);
//	printf("%d\n", sub);
//	return 0;
//}

// 输入一个整型1234，按顺序输出 1 2 3 4
#include <stdio.h>
void print(unsigned int a)
{
	// 第一次：n=1234 > 9；	1234 / 10 = 123;	1234 % 10 = 4
	// 第二次：n=123 > 9；	123 / 10 = 12		123 % 10 = 3
	// 第三次：n=12 > 9；	12 / 10 = 1			12 % 10 = 2
	// 第四次：n=1 < 9；		开始执行a%10			1 % 10 = 1
	if (a > 9) {
		print(a / 10);
	}
	printf("%d ", a % 10);
}

int main()
{
	unsigned int a = 0;
	printf("请输入一个整型: ");
	scanf("%u", &a);

	print(a);
	return 0;
}