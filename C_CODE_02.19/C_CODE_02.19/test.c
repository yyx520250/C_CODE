#define _CRT_SECURE_NO_WARNINGS 1
// ��д��������������ʱ���������ַ����ĳ���
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
//	// ģ��ʵ��һ��strlen����
//
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//// ����n�Ľ׳ˣ����������
////			{ n<1	�׳�Ϊ1
////	fac(n)	{
////			{ n>1	�׳�Ϊn*fac(n-1)
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
//	printf("��������Ҫ��������֣�");
//	scanf("%d", &n);
//
//	ret = fac(n);
//	printf("%d�Ľ׳�Ϊ��%d", n, ret);
//	return 0;
//}

// ���n��쳲��������У�����ջ���
//			{ n <= 2	����n
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

	printf("������ڼ�λ쳲��������У�");
	scanf("%d", &n);

	ret = fib(n);
	printf("��%dλ��쳲����������ǣ�%d", n, ret);
	return 0;
}