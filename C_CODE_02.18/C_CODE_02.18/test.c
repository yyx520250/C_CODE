#define _CRT_SECURE_NO_WARNINGS 1
//// ������Ƕ�׵���
//// main��������test1��test1����test2
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

// ��������ʽ����
//#include <stdio.h>
//int main()
//{
//	// printf()�������ص��Ǵ�ӡ����Ļ�ϵ��ַ��ĸ���
//	// printf("%d", (printf("%d", (printf("%d", 43)))));
//	// 3����ӡ����1	 2����ӡ����2	1����ӡ43
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

// ����һ������1234����˳����� 1 2 3 4
#include <stdio.h>
void print(unsigned int a)
{
	// ��һ�Σ�n=1234 > 9��	1234 / 10 = 123;	1234 % 10 = 4
	// �ڶ��Σ�n=123 > 9��	123 / 10 = 12		123 % 10 = 3
	// �����Σ�n=12 > 9��	12 / 10 = 1			12 % 10 = 2
	// ���ĴΣ�n=1 < 9��		��ʼִ��a%10			1 % 10 = 1
	if (a > 9) {
		print(a / 10);
	}
	printf("%d ", a % 10);
}

int main()
{
	unsigned int a = 0;
	printf("������һ������: ");
	scanf("%u", &a);

	print(a);
	return 0;
}