#define _CRT_SECURE_NO_WARNINGS 1

//// switch���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	printf("������1-7��");
//	scanf("%d", &i);
//	switch (i) {
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("��ʽ����");
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

// whileѭ�����
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
//	// �������������
//	printf("����������: ");
//	scanf("%s", password);
//
//	// ����������ȥ��\n
//	while (((flag = getchar()) != '\n'));
//	
//	// ȷ������
//	printf("��ȷ������(Y/N): ");
//	scanf("%c", &ready);
//	
//	if (ready == 'Y') {
//		printf("ȷ�ϳɹ�");
//	}
//	else {
//		printf("ȷ��ʧ��");
//	}
//	return 0;
//}

// forѭ�����
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++) {
//		printf("%d ", i);
//	}
//	return 0;
//}

// ����n�Ľ׳�
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//
//	printf("������һ�����֣�");
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		sum *= i;
//	}
//
//	printf("%d�Ľ׳�Ϊ��%d", n, sum);
//	return 0;
//}

// ����1��n�Ľ׳˺�
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int a = 0;
	int sum = 0;
	int ret = 1;

	printf("������һ�����֣�");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		ret = 1;
		for (a = 1; a <= i; a++) {
			ret *= a;
		}
		sum += ret;
	}
	printf("%d�Ľ׳˺�Ϊ��%d", n, sum);
	return 0;
}