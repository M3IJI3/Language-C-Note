#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//C�����ǽṹ���ĳ����������!
//˳��ṹ

//ѡ��ṹ

//ѭ���ṹ

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	if (num % 2 == 0)
//	{
//		printf("even number\n");
//	}
//	else {
//		printf("odd number\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 1;
//
//	/*for (num = 0; num <= 100; num++)
//	{
//		if (num % 2 != 0) {
//			printf("%d ", num);
//		}
//	}*/
//
//	while (num <= 100)
//	{
//		if (num % 2 != 0)
//		{
//			printf("%d ", num);
//		}
//		num++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//		printf("Monday\n");
//		break;
//	case 2:
//		printf("Tuesday\n");
//		break;
//	case 3:
//		printf("Wednesday\n");
//		break;
//	case 4: 
//		printf("Thursday\n");
//		break;
//	case 5:
//		printf("Friday\n");
//		break;
//	case 6:
//		printf("Saturday\n");
//		break;
//	case 7:
//		printf("Sunday\n");
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("working day\n");
//		break;
//	case 6:
//	case 7:
//		printf("holiday\n");
//		break;
//	default:
//		printf("invalid input.\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//
//	switch (n) //n=1
//	{
//	case 1: 
//		m++;  //m=3
//	case 2:
//		n++; //n=2
//	case 3:
//		// switch����Ƕ��ʹ��
//		switch (n) 
//		{
//		case 1:
//			n++; 
//		case 2:
//			m++; //n=4
//			n++; //n=3
//			break;
//		}
//	case 4:
//		m++; //m=5
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n); //m = 5, n = 3 
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	//��whileѭ����,break�������õ���ֹѭ��
//	/*while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}*/
//
//	//��whileѭ����,continue����������������ѭ��continue����Ĵ���,ֱ��ȥ�жϲ��ֿ��Ƿ������һ��ѭ��
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//
//	}
//
//	return 0;
//}


//EXAMPLES:
// getchar(): read a character fron a stream, or get a character from stdio
// EOF: end of file - �ļ��Ľ�����־
//int main()
//{
//	int ch = 0;
//
//	//ctrl+z - getchar()�Ͷ�ȡ����
//	while ((ch = getchar()) != EOF) 
//	{
//		putchar(ch); // ���һ���ַ�
//	}
//		
//	return 0;
//}


//int main()
//{
//	char password[20] = { 0 };
//	printf("input your password:>");
//	scanf("%s", password);
//	printf("check password (Y/N):>");
//
//	//����������
//	//getchar(); //����'\n', ����һ��getchar()ֻ�ܴ���һ���ַ�
//
//	//�����������еĶ���ַ�
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	
//	if (ch == 'Y')
//	{
//		printf("Succeed!\n");
//	}
//	else
//	{
//		printf("Failed!\n");
//	}
//
//	return 0;
//}


int main()
{
	int ch = 0;
	while ((ch=getchar()) != EOF) // windowsϵͳctrl+z����EOF, �˳�
	{
		if (ch < '0' || ch > '9') 
		{
			continue; //�������0~9������,����ӡ,���ؽ�whileѭ��
		}
		putchar(ch); //��ӡ�ַ�
	}
	return 0;
}