#define _CRT_SECURE_NO_WARNINGS 1
// ��ʼָ��
//# include <stdio.h>
//int main()
//{
//	int num = 10;
//	int* pa = &num;	// pa��������ŵ�ַ�ģ���C������pa��ָ�����
//	// * ˵�� pa ��ָ�����
//	// int ˵�� pa ִ�еĶ�����int���͵�
//	printf("%p\n", pa);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;	// ȡ��a�ĵ�ַ
//	*pa = 20;		// *pa������ָ�룬����ָ����ָ��ֵ
//	printf("%d\n",a);	
//	return 0;
//}

//// ָ��Ĵ�С
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(long long*));
//	return 0;
//}

// ��ʼ�ṹ��
//#include <stdio.h>
//// ����һ��ѧ������
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct stu s = { "Tom",21,99.99 };	// �ṹ��Ĵ�����ʼ��
//	// 1��ʹ�� . ���ʽṹ��
//	printf("1���ҽ�%s���ҽ���%d�꣬�ҵķ���Ϊ��%lf\n",s.name,s.age,s.score);		
//	
//	// 2��ʹ�ýṹ��ָ�����
//	struct stu* ps = &s;
//	printf("2���ҽ�%s���ҽ���%d�꣬�ҵķ���Ϊ��%lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	// 3��ʹ�ýṹ��ָ����->����������
//	// -> ��ʹ�ø�ʽΪ���ṹ��ָ�� ��> ��Ա������
//	printf("3���ҽ�%s���ҽ���%d�꣬�ҵķ���Ϊ��%lf\n", ps->name, ps->age, ps->score);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char arr[] = "hello Tom";
//	int i = 0;
//	for (i ; i < 9; i++) {
//		printf("%c\n", arr[i]);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int Max(int a, int b)
//{
//	if (a > b) {
//		return a;
//	}
//	else {
//		return b;
//	}
//}
//int main()
//{
//	int a = 520;
//	int b = 1314;
//	int max;
//	max = Max(a, b);
//	printf("%d\n", max);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//
//	printf("������һ�����֣�");
//	scanf("%d", &i);
//	if (0 == i % 2) {
//		printf("ż��\n");
//	}
//	else {
//		printf("����\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int i = 1;
	for (i = 1; i <= 100; i++) {
		if (0 == i % 2) {
			continue;
		}
		else {
			printf("%d������\n",i);
		}
	}
	return 0;
}














