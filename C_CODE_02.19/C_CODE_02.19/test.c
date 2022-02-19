#define _CRT_SECURE_NO_WARNINGS 1
// 编写函数不允许创建临时变量，求字符串的长度
//#include <stdio.h>
//#include <string.h>
//int my_strlen(char * arr)
//{
//	// my_strlen(sum)
//	// 1+my_strlen(um)
//	// 1+1+my_strlen(m)
//	// 1+1+1+my_strlen(m) 
//	// 1+1+1+my_strlen('\0') --> 1+1+1+0
//	if (*arr != '\0') {
//		return 1 + my_strlen(arr + 1);
//	}
//	else {
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "sum";
//	// arr[] = ['s']['u']['m']['\0']
//	// 模拟实现一个strlen函数
//
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//// 计算n的阶乘，不考虑溢出
////			{ n<1	阶乘为1
////	fac(n)	{
////			{ n>1	阶乘为n*fac(n-1)
//#include <stdio.h>
//int fac(int n)
//{
//	if (n < 1) {
//		return 1;
//	}
//	else {
//		return n * fac(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//
//	printf("请输入您要计算的数字：");
//	scanf("%d", &n);
//
//	ret = fac(n);
//	printf("%d的阶乘为：%d", n, ret);
//	return 0;
//}

// 求第n个斐波拉且数列，容易栈溢出
//			{ n <= 2	返回n
// fib(n)	{
//			{ n > 2		fib(n-1)+fib(n-2)
#include <stdio.h>
int fib(int n)
{
	if (n <= 2) {
		return 1;
	}
	else {
		return fib(n - 1) + fib(n - 2);
	}
}
int main()
{
	int n = 0;
	int ret = 0;

	printf("请输入第几位斐波拉且数列：");
	scanf("%d", &n);

	ret = fib(n);
	printf("第%d位的斐波拉且数列是：%d", n, ret);
	return 0;
}