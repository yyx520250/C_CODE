#define _CRT_SECURE_NO_WARNINGS 1
//// 初始选择语句
//# include <stdio.h>
//int main()
//{
//	int input = 10;
//	printf("请输入您的分数：");
//	scanf("%d", &input);
//	if (input >= 90) {
//		printf("A");
//	}
//	else if (input >= 80) {
//		printf("B");
//	}
//	else if (input >= 70) {
//		printf("C");
//	}
//	else if (input >= 60) {
//		printf("D");
//	}
//	else {
//		printf("不及格");
//	}
//	return 0;
//}

// 初始循环语句
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	while (a < 100) {
//		a++;
//		printf("%d\n", a);
//	}
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	for(i; i <= 100;i++) {
//		printf("%d\n",i);
//	}
//	return 0;
//}

// 初始函数和数组
//int add(num1, num2)
//{
//	return num1 + num2;
//}
//
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	printf("请输入两个数字：");
//	scanf("%d %d", &num1, &num2);
//	sum = add(num1, num2);
//	printf("%d+%d=%d", num1, num2, sum);
//	return 0;
//}

// 初始数组
//# include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };		// 数组不完全初始化，剩余的为0
//	int i = 0;
//	for (i; i < 10; i++) {
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 1;
//	printf("%d",a+b);
//	return 0;
//}

//# include <stdio.h>
//int main()
//{
//	int a = 2;
//	// 2的二级制数为：00000000 00000000 00000000 00000010
//	// 左移一位为：00000000 00000000 00000000 00000100
//	// 转换为十进制为：4
//	printf("%d", a << 1);
//	return 0;
//}


//# include <stdio.h>
//int main()
//{
//	int a = 2;
//	int b = 3;
//	// 2的二级制数为：00000000 00000000 00000000 00000010
//	// 3的二进制数为：00000000 00000000 00000000 00000011
//	// 按位与为：00000000 00000000 00000000 00000010		相同取1，不同取0
//	// 按位或为：00000000 00000000 00000000 00000011		相同取1，不同取0
//	// 按位异或为：00000000 00000000 00000000 000001		相同取0，不同取1
//	printf("%d", a | b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 10;
//	printf("!a = %d\n", !a);
//	printf("!b = %d\n", !b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 520;
//	a += 1;	// a = a+1
//	printf("a = %d", a);
//	return 0;
//}











