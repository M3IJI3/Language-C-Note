#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//
//	//int sum = a + b;
//	//�����ķ�ʽ���
//	int sum = Add(a, b);
//	printf("%d", sum);
//
//	return 0;
//}

//����
int main()
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int d = 4;
	
	//...

	//���� - һ����ͬ���͵�Ԫ�صļ���
	//10������1-10������

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10) {
		printf("%d ", arr[i]);
		i++;
	}

	//���������±������ʵ�
	//char ch[5] = { 'a','b','c' }; //����ȫ��ʼ��,ʣ���Ĭ��Ϊ0
	return 0;
}
