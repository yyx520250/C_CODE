// ��λȡ���������ж�����λ�е����֣�1���0��0���1
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	// a��ԭ��Ϊ��00000000 00000000 00000000 00000000
//	// ~a��ԭ��Ϊ��11111111 11111111 11111111 11111111
//	// һ���������Ķ����Ʊ�ʾ��3�֣�
//	// ���룺11111111 11111111 11111111 11111111
//	// ���룺10000000 00000000 00000000 00000000		����->���룺����ķ���λ���䣬����Ϊλ��λȡ��
//	// ԭ�룺10000000 00000000 00000000 00000001		����->ԭ�룺����+1 
//	// ~a��-1
//	printf("%d", ~a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = (++a)+ (++a)+ (++a);
//	printf("++a: %d\n", a);	// ǰ��++����++��ʹ��
//	printf("b++: %d\n", b);	// ����++����ʹ�ú�++
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 3.14;
//	printf("%d\n", (int)a);	// ǿ������ת��
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
//	printf("a && b=%d\n", d);	// �߼��룬һ��Ϊ����Ϊ��
//	printf("b || c=%d\n", e);	// �߼���һ��Ϊ����Ϊ��
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



// ���ű��ʽ
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
//// typedef�����ض���
//typedef unsigned int u_int;
//int main() 
//{
//	// �������ֶ��巽�����������һ��
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

// val.c�ļ�
// ����ȫ�ֱ�������ǰ�����static����ȫ�ֱ���ʱ��ʹ��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ���ʹ�ã�����Դ�ļ�����ʹ��
//static int g_val = 2022;
//
//static int Add(int x, int y)
//{
//	return x + y;
//}

//// define���峣��
//#define Max 1000
//// define�����
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




















