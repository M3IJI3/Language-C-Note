#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//������(Operators):
//����������: + - * / %(ȡģ)
//��λ������: >> <<
//λ������: &(��λ��) |(��λ��) ^(��λ���)
//��ֵ������: = += -= *= /= ^= |= >>= <<=
//��Ŀ������: ! - + & sizeof -- ++ *
//
// 
//int main()
//{
//	//int a = 9 / 2; // 4
//	//float a = 9 / 2.0; // 4.000000
//
//	int a = 9 % 2; //ȡģ - ȡ����
//	printf("%d\n", a);
//	return 0;
//}

/*int main()
{
	int a = 2;
	int b = a << 1;*/ 
	//���Ʋ����� a - 2 => 10 (һ��byte���ڰ˸�����λ, 2�����ֽ�(4 bytes))
	//00000000 00000000 00000000 00000010 2�Ķ�����32����λ

//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	a = a + 5;
//	a += 5;
//
//	a = a - 3;
//	a -= 3;
//
//	a = a % 3;
//	a %= 3;
//
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	//0��ʾ��, ��0������
//	int a = 0;
//	printf("%d\n", !a); // 1
//
//	a = -5;
//	a = -a;
//
//	return 0;
//}

//int main()
//{
//	//sizeof��һ��������
//	//sizeof���Ǻ���
//	//�������ͻ��߱����Ĵ�С
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//	return 0;
//}

int main()
{
	//10 * 4 = 40
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr)); //�������������ܴ�С, ��λ���ֽ�
	printf("%d\n", sizeof(arr[0])); //4

	int size = sizeof(arr) / sizeof(arr[0]); //��������Ԫ�ظ���
	printf("%d\n", size);
	return 0;
}