#define _CRT_SECURE_NO_WARNINGS 1

//// switch语句
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	printf("请输入1-7：");
//	scanf("%d", &i);
//	switch (i) {
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期七\n");
//		break;
//	default:
//		printf("格式错误");
//	}
//	return 0;
//}

//# include <stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n) {
//	case 1: m++; 
//	case 2: n++; 
//	case 3:
//		switch (n) {
//		case 1: n++;
//		case 2: m++; n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d\nn = %d", m, n);
//	return 0;
//}

// while循环语句
//# include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF) {
//		putchar(ch);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char password[20] = {0};
//	char ready;
//	int flag;
//	
//	// 接收输入的密码
//	printf("请输入密码: ");
//	scanf("%s", password);
//
//	// 清理缓冲区，去除\n
//	while (((flag = getchar()) != '\n'));
//	
//	// 确认密码
//	printf("请确认密码(Y/N): ");
//	scanf("%c", &ready);
//	
//	if (ready == 'Y') {
//		printf("确认成功");
//	}
//	else {
//		printf("确认失败");
//	}
//	return 0;
//}

// for循环语句
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++) {
//		printf("%d ", i);
//	}
//	return 0;
//}

// 计算n的阶乘
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//
//	printf("请输入一个数字：");
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		sum *= i;
//	}
//
//	printf("%d的阶乘为：%d", n, sum);
//	return 0;
//}

// 计算1到n的阶乘和
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int a = 0;
	int sum = 0;
	int ret = 1;

	printf("请输入一个数字：");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		ret = 1;
		for (a = 1; a <= i; a++) {
			ret *= a;
		}
		sum += ret;
	}
	printf("%d的阶乘和为：%d", n, sum);
	return 0;
}