#define _CRT_SECURE_NO_WARNINGS 1
//// ���ֲ��ҷ�
//#include <stdio.h>
//int main()
//{
//	int arr[] = {11,12,13,14,15,16,17,18,19,20};
//	int k = 17;
//	
//	// ���������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//	while(left <= right)
//	{
//		// ����������м��±�
//		int mid = (left + right) / 2;
//		if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else {
//			printf("�ҵ��ˣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("�Ҳ���");
//	}
//	return 0;
//}

////��ʾ�ַ����������м���
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "<<la la land>>";
//	char arr2[] = "##############";
//	
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while(left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//
//		Sleep(1000);	// ����1����
//		system("cls");	// �����Ļ
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20];
//	// ������ȷ��������123456
//
//	for (i = 1; i < 4; i++) {
//		printf("���������룺");
//		scanf("%s", password);
//		
//		// �����ַ����ıȽϲ���ʹ�� == ��Ӧ��ʹ��strcmp���������strcmp�Ƚϵ��Ƕ�Ӧλ���ϵ�ASCIIֵ
//		if (strcmp(password, "123456") == 0 ) {
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else {
//			printf("��%d�����룬�������\n", i);
//		}
//	}
//	if (i == 4) {
//		printf("��������������˳�����");
//	}
//	return 0;
//}
//// ��������Ϸ
//// 1.�Զ�����һ��1-100֮��������
//// 2.������
////	 a.�¶���,congratulations���µĴ���Ϊ...
////   b.�´��ˡ�����߲´��˻��ǲ�С�ˣ�������ֱ���¶�
//// 3.��Ϸ��һֱ���У����۶Դ��������˳���Ϸ
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//void menu()
//{
//	printf("#####################\n");
//	printf("#      0.end        #\n");
//	printf("#      1.start      #\n");
//	printf("#####################\n");
//}
//
//void game()
//{
//	int flag = 1;
//	int sum = 0;
//	int user = 0;
//	// ��������Ϸ��ʵ��
//	// 1�����������
//	// rand��������һ��0-32767֮�������
//	// time����Ĭ���Ǵ��в����ģ����ﲻ��Ҫ��������ָ��NULL
//	// time�������ص�������time_t���ͣ���һ������
//	// ����srand��Ҫ����һ���޷�������
//
//	//srand((unsigned int)time(NULL));
//	int ret = rand()%100+1;		// %100��������0-99��Ȼ���1����Χ����1-100
//	
//	// 2��������
//	while (flag) {
//		printf("�������������֣�");
//		scanf("%d", &user);
//		
//		if (user > ret) {
//			printf("�´���\n");
//			sum++;
//		}
//		else if (user < ret) {
//			printf("��С��\n");
//			sum++;
//		}
//		else{
//			sum++;
//			printf("Congratulations����һ������%d�Σ�����Ϊ��%d\n", sum, ret);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input;
//	srand((unsigned int)time(NULL));
//
//	do {
//		menu();		// ��ӡ�˵�
//		printf("���������ѡ��");
//		scanf("%d",&input);
//
//		switch (input) {
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("ѡ���������ѡ��\n");
//				break;
//		}
//	} while (input);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 0;
//	switch(a)
//	{
//	case 1: b = 11;
//	default: b = 13;
//	case 2: b = 12;
//	case 3: b = 14;
//	}
//	printf("%d", b);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 3;
	int c;
	printf("%d", a / b);
	return 0;
}