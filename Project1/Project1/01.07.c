#define _CRT_SECURE_NO_WARNINGS 1
//// ��ʼѡ�����
//# include <stdio.h>
//int main()
//{
//	int input = 10;
//	printf("���������ķ�����");
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
//		printf("������");
//	}
//	return 0;
//}

// ��ʼѭ�����
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

// ��ʼ����������
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
//	printf("�������������֣�");
//	scanf("%d %d", &num1, &num2);
//	sum = add(num1, num2);
//	printf("%d+%d=%d", num1, num2, sum);
//	return 0;
//}

// ��ʼ����
//# include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };		// ���鲻��ȫ��ʼ����ʣ���Ϊ0
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
//	// 2�Ķ�������Ϊ��00000000 00000000 00000000 00000010
//	// ����һλΪ��00000000 00000000 00000000 00000100
//	// ת��Ϊʮ����Ϊ��4
//	printf("%d", a << 1);
//	return 0;
//}


//# include <stdio.h>
//int main()
//{
//	int a = 2;
//	int b = 3;
//	// 2�Ķ�������Ϊ��00000000 00000000 00000000 00000010
//	// 3�Ķ�������Ϊ��00000000 00000000 00000000 00000011
//	// ��λ��Ϊ��00000000 00000000 00000000 00000010		��ͬȡ1����ͬȡ0
//	// ��λ��Ϊ��00000000 00000000 00000000 00000011		��ͬȡ1����ͬȡ0
//	// ��λ���Ϊ��00000000 00000000 00000000 000001		��ͬȡ0����ͬȡ1
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











