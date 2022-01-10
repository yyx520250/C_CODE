#define _CRT_SECURE_NO_WARNINGS 1
// 初始指针
//# include <stdio.h>
//int main()
//{
//	int num = 10;
//	int* pa = &num;	// pa是用来存放地址的，在C语言中pa叫指针变量
//	// * 说明 pa 是指针变量
//	// int 说明 pa 执行的对象是int类型的
//	printf("%p\n", pa);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;	// 取出a的地址
//	*pa = 20;		// *pa解引用指针，更改指针所指的值
//	printf("%d\n",a);	
//	return 0;
//}

//// 指针的大小
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(long long*));
//	return 0;
//}

// 初始结构体
//#include <stdio.h>
//// 创建一个学生类型
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct stu s = { "Tom",21,99.99 };	// 结构体的创建初始化
//	// 1、使用 . 访问结构体
//	printf("1、我叫%s，我今年%d岁，我的分数为：%lf\n",s.name,s.age,s.score);		
//	
//	// 2、使用结构体指针访问
//	struct stu* ps = &s;
//	printf("2、我叫%s，我今年%d岁，我的分数为：%lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	// 3、使用结构体指针结合->操作符访问
//	// -> 的使用格式为：结构体指针 —> 成员变量名
//	printf("3、我叫%s，我今年%d岁，我的分数为：%lf\n", ps->name, ps->age, ps->score);
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
//	printf("请输入一个数字：");
//	scanf("%d", &i);
//	if (0 == i % 2) {
//		printf("偶数\n");
//	}
//	else {
//		printf("奇数\n");
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
			printf("%d是奇数\n",i);
		}
	}
	return 0;
}














