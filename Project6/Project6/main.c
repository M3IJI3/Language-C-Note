#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.�ڴ�����ô��ŵ�?
//2.һ���������ڴ浥Ԫ�ռ��Ƕ��?

//32λ - 32����ַ�� - ������ - ͨ�� - 1/0
//4,294,967,296 Bits / 8 = 536,870,912 Bytes
//536,870,912 Bytes / 1024 = 524,288 KB
//524,288 KB / 1024 = 512 MB
//512 MB / 1024 = 0.5GB 


// 64λ

//���ź�ת���������ź�: 1��0��ɵĶ���������
//����: һ���ڴ浥Ԫ��һ���ֽ�, Ȼ������ַ

//int main()
//{
//	int a = 10; //a���ڴ���Ҫ�����м�ĵ�ַ - 4���ֽ�
//	printf("%p\n", &a); //%p: ר��������ӡ��ַ
//
//	int * pa = &a; //pa��������ŵ�ַ��,��C�����н�ָ�����
//	// * ˵��pa��ָ�����
//	// int˵��paָ��Ķ�����int����
//
//	char ch = 'w';
//	char * pc = &ch;
//	return 0;
//}

//int main()
//{
//	int* pa = &pa;
//	return 0;
//}


//ָ�� ���� ��ַ
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	*pa = 20; //* �����ò��� | *pa����ͨ��pa����ĵ�ַ,�ҵ�a
//
//	printf("%d\n", a);
//
//	return 0;
//}


//ָ��Ĵ�С����ͬ��!
//ָ����������ŵ�ַ��,ָ����Ҫ���ռ�ȡ���ڵ�ַ�Ĵ洢��Ҫ���ռ�
//32λ 32bit - 4bytes
//64λ 64bit - 8bytes
int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	return 0;
}
