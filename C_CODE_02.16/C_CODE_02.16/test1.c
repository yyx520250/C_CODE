#define _CRT_SECURE_NO_WARNINGS 1

//// ��ӡ1000��2000֮�������
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	for (year = 1000; year <= 2000; year++) {
//		// �ж�year�ǲ�������
//		// 1���ܱ�4�������ܱ�100����������
//		// 2���ܱ�400����������
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
//	printf("һ����%d������", count);
//	return 0;
//}

//// ��ӡ1000��2000֮�������
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
//	printf("һ����%d������", count);
//	return 0;
//}

//// ��ӡ100��200֮�������
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//
//	for (i = 100; i <= 200; i++) {
//		// �ж�i�Ƿ�Ϊ����
//		// ֻ�ܱ�1���䱾������������
//		for (a = 2; a < i; a++) {
//			if (i%a == 0) {
//				break;
//			}
//		}
//		if (i == a) {
//			printf("%d������\n",i);
//		}
//	}
//	return 0;
//}

//// ��ӡ100��200֮�����������������
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 100; i <= 200; i++) {
//		int flag = 1;	// ����������
//
//		for (tmp = 2; tmp < i; tmp++) {
//			if (i % tmp == 0) {
//				flag = 0;	// ��������
//				break;
//			}
//		}
//		if (flag == 1) {
//			printf("%d������\n", i);
//		}
//	}
//	return 0;
//}

//// ��ӡ100��200֮�����������������
//// i = a*b
//// a �� b ��һ����һ�������� <= ��ƽ�� m ��
//// 16=2*8=4*4
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int tmp = 0;
//
//	for (i = 100; i <= 200; i++) {
//		int flag = 1;	// ����i��������
//		// sqrt��һ����ƽ������ -- math.h
//		for (tmp = 2; tmp < sqrt(i); tmp++) {	
//			if (i%tmp == 0) {
//				flag = 0;	// ��������
//				break;
//			}
//		}
//		if (flag == 1) {
//			printf("%d������\n", i);
//		}
//	}
//	return 0;
//}

//// ��ӡ100��200֮��������������ģ�
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int tmp = 0;
//
//	for (i = 101; i <= 200; i+=2) {
//		int flag = 1;	// ����������
//		// sqrt��һ����ƽ������ -- math.h
//		for (tmp = 2; tmp <= sqrt(i); tmp++) {
//			if (i%tmp == 0) {
//				flag = 0;	// ��������
//				break;
//			}
//		}
//		if (flag == 1) {
//			printf("%d������\n", i);
//		}
//	}
//	return 0;
//}

//// goto���
//// �ػ�����
//// һ���Ӻ�ػ����shutdown -s -t 60
//// ȡ���ػ���shutdown -a 
//// ֻҪ�������������Ծͻ���1�����ڹػ���������룺congratulations����ȡ���ػ�
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[20] = {0};
//	// �ػ�
//	// C�����ṩ��һ��������system() - ִ��ϵͳ����� -- stdlib.h
//	system("shutdown -s -t 60");
//
//again:
//	printf("���ĵ��Խ���һ���Ӻ�ػ������룺congratulations��ȡ���ػ�\n");
//	printf("�����룺");
//	scanf("%s", input);
//	
//	// ��������Ϊcongratulations��ȡ���ػ�������goto�����ת��ȥ�ٴ�ѯ��
//	// strcmp -- �Ƚ������ַ����Ƿ�һ����һ������0 -- string.h
//	if (strcmp(input, "congratulations") == 0) {
//		system("shutdown -a");
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}

//// strcpy - �ַ�������������ʹ��
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

// memset - �ڴ渲�Ǻ�����ʹ��
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = "congratulations";
//	memset(arr1,'*',5);
//	printf("%s", arr1);
//	return 0;
//}

// �ж������������ֵ
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

	printf("��������������");
	scanf("%d %d", &a, &b);
	max = Max(a, b);
	printf("%d��%d�����ֵ�ǣ�%d", a, b, max);

	return 0;
}