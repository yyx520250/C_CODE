// 按位取反：把所有二进制位中的数字，1变成0，0变成1
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	// a的原码为：00000000 00000000 00000000 00000000
//	// ~a的原码为：11111111 11111111 11111111 11111111
//	// 一个负整数的二进制表示有3种：
//	// 补码：11111111 11111111 11111111 11111111
//	// 反码：10000000 00000000 00000000 00000000		补码->反码：补码的符号位不变，其他为位按位取反
//	// 原码：10000000 00000000 00000000 00000001		反码->原码：反码+1 
//	// ~a：-1
//	printf("%d", ~a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = (++a)+ (++a)+ (++a);
//	printf("++a: %d\n", a);	// 前置++，先++后使用
//	printf("b++: %d\n", b);	// 后置++，先使用后++
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 3.14;
//	printf("%d\n", (int)a);	// 强制类型转换
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int d = a && b;
//	int e = b || c;
//	printf("a && b=%d\n", d);	// 逻辑与，一个为假且为假
//	printf("b || c=%d\n", e);	// 逻辑或，一个为真且为假
//	return 0;
//}

//# include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int max = a > b ? a : b;
//	printf("max = %d", max);
//	return 0;
//}



// 逗号表达式
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = (a, a=a + b, c, b=b + c);
//	printf("%d", d);
//	printf("%d", a);
//	return 0;
//}

//# include <stdio.h>
//// typedef类型重定义
//typedef unsigned int u_int;
//int main() 
//{
//	// 下面两种定义方法定义的类型一致
//	unsigned int num = 10;
//	u_int num1 = 10;
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//# include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 10) {
//		test();
//		i++;
//	}
//	return 0;
//}

// val.c文件
// 定义全局变量，在前面加上static修饰全局变量时，使得全局变量只能在自己所在的源文件中使用，其他源文件不能使用
//static int g_val = 2022;
//
//static int Add(int x, int y)
//{
//	return x + y;
//}

//// define定义常量
//#define Max 1000
//// define定义宏
//#define Add(X,Y) ((X)+(Y))
//
//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", Max);
//	printf("%d\n", 4*Add(2, 3));
//	return 0;
//}




















