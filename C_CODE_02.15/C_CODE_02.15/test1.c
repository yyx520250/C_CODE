//// ��ӡ���ı���������һ��
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
//// ��ӡ���ı�������������
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i += 3) {
//		printf("%d\n", i);
//	}
//	return 0;
//}

//// �������������Լ��
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	printf("�������������֣�");
//	scanf("%d %d", &a, &b);
//
//	int max = a > b ? b : a;
//
//	while (1) {
//		if (a%max == 0 && b%max == 0) {
//			printf("%d��%d�����Լ���ǣ�%d",a, b, max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//// �������ֵ�����
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//
//	printf("�������������֣�");
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
// շת�����
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//
//	printf("�������������֣�");
//	scanf("%d %d", &m, &n);
//	
//	while (t = m % n) {
//		m = n;
//		n = t;
//	}
//	printf("���Լ���ǣ�%d", n);
//	return 0;
//}

// ������������С����������С���������������������еı����������ǵĹ�����
// ��С������ = �������/���Լ��
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//
//	printf("�������������֣�");
//	scanf("%d %d", &num1, &num2);
//
//	int a = num1;
//	int b = num2;
//	int t = 0;
//	while (t = a % b) {
//		a = b;
//		b = t;
//	}
//	printf("�����������Լ��Ϊ��%d\n", b);
//	
//	int c = num1;
//	int d = num2;
//	int max = 0;
//	max = c * d / b;
//	printf("����������С������Ϊ��%d\n", max);
//	return 0;
//};

// ��ӡ1000��2000֮�������
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