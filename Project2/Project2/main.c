#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//������(scope)����������
// 
//������
//�������������ʹ��������Ǳ�����������
//�ֲ������������򣺾��Ǳ������ڵľֲ���Χ
//ȫ�ֱ�������������������

//int g_val = 2022; // ȫ�ֱ���
//
//int main() {
//	printf("hehe\n");
//	printf("%d\n", g_val);
//	
//	int a = 10;
//	printf("a = %d\n", a);
//	{
//		printf("%d\n", g_val);
//	}
//	
//	return 0;
//}
//


//��������
//extern int g_val;
//
//int main() {
//	printf("%d\n", g_val);
//	return 0;
//}

//��������
//�������������ڣ������Ĵ���������֮���ʱ���
//
//�ֲ��������������ڣ�����ֲ���Χ���������ڿ�ʼ�����ֲ���Χ�� ��������
//ȫ�ֱ������������ڣ��������������
//

//int main() 
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//
//	//printf("%d\n", a);
//	return 0;
//}


//���� 

//#define MAX 10000

//int main() {
	//1. ���泣��
	//3.14;
	//10;
	//'a';
	//"abcdef";

	//2. const���εĳ�����
	//const int num = 10; //num���ǳ����� - ������(���ܱ��ı������)
	//num = 20;

	//int arr[10] = { 0 };

	//const int n = 10; //����n
	//int arr2[n] = { 0 }; //n�Ǳ���, ���ﲻ����

	//3. #define����ı�ʶ������
	//MAX = 20000; //ERROR!
	/*int n = MAX;
	printf("n = %d\n", n);
	*/

	


//	return 0;
//}

//�Ա�
enum Sex
{
	//����ö�����͵ı�����δ������ȡֵ
	//ö�ٳ���
	MALE = 3, //����ֵ - �����Ǹı�MALE��ֵ
	FEMALE,
	SECRET
};

//int main() 
//{
//	//4. ö�ٳ���
//	//����һһ�оٵĳ���
//	enum Sex s = MALE;
//	printf("%d\n", MALE); // 0
//	printf("%d\n", FEMALE); // 1
//	printf("%d\n", SECRET); // 2
//	return 0;
//}


//�ַ�������һ���ַ� - ��˫������������һ���ַ�
//�ַ����ڽ�β��λ��������һ��\0���ַ�
//\0���ַ����Ľ�����־

//#include <string.h>

//int main() {

	//�ַ����� - ������һ����ͬ���͵�Ԫ��
	//char arr[] = "hello";

	/*char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c'};*/

	//��һ���ַ����ĳ��� (\0�����ַ�������)
	//int length = strlen("abc"); // ������ û������ͷ�ļ�
	//printf("%d\n", length);

	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2)); //���ֵ

	//��ӡ�ַ���
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);

	//return 0;
 //}


//ת���ַ� - ת����ԭ������˼ \t
//int main() {
//
//	//printf("c:\test\test.c");
//	printf("ab\ncd"); //  \+n
//	return 0;
//}

//int main() {
//	//printf("(are you ok??)"); // ??) -- �ᱻ������ ] - ����ĸ��
//
//	//printf("%c\n", '\'');
//	printf("%s\n", "\"abc\"");
//	printf("%s\n", "c:\\test\\test.git");
//	printf("\a"); //�����ַ� ��������
//	
//	return 0;
//}

//#include <string.h>

//int main() {

	//�˽��Ƶ�130��ʮ���Ƶ�88 (1 * 8^2 + 3 * 8^1 + 0 * 8^0 = 73)
	//printf("%c\n", '\130'); 

	//x -- ascii��ֵ��88
	//printf("%c\n", '\101'); // a - 65 - �˽�����: 101
	//printf("%c\n", '\x30'); //ascii�� -- 48 -- �ַ�0

	//printf("%d\n", strlen("abc")); //3
	//printf("%d\n", strlen("c:\test\328\test.c"));
	//printf("%s\n", "c:\test\328\test.c");

	//return 0;
//}

//ע��: ���������͸��Ӵ����
//


//int main()
//{
//	//int a = 10; //C++ע�ͷ��
//	/*
//	  int b = 0;
//	*/  //C���Ե�ע�ͷ�� - ��֧��Ƕ��ע��(ȱ��)
//	
//	return 0;
//}

//int main() {
//	int input = 0; //����
//	printf("�������:)");
//	printf("��Ҫ�ú�ѧϰ��?");
//	scanf("%d", &input);
//
//	if (input == 1) {
//		printf("good offer\n");
//	}
//	else {
//		printf("������\n");
//	}
//
//	return 0;
//}

//int main() {
//
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("coding: %d\n", line);
//		line++;
//	}
//	
//	if (line == 30000) 
//	{
//		printf("good offer\n");
//	}
//
//	return 0;
//}

