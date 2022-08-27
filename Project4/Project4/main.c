#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//操作符(Operators):
//算数操作符: + - * / %(取模)
//移位操作符: >> <<
//位操作符: &(按位与) |(按位或) ^(按位异或)
//赋值操作符: = += -= *= /= ^= |= >>= <<=
//单目操作符: ! - + & sizeof -- ++ *
//
// 
//int main()
//{
//	//int a = 9 / 2; // 4
//	//float a = 9 / 2.0; // 4.000000
//
//	int a = 9 % 2; //取模 - 取余数
//	printf("%d\n", a);
//	return 0;
//}

/*int main()
{
	int a = 2;
	int b = a << 1;*/ 
	//左移操作符 a - 2 => 10 (一个byte等于八个比特位, 2是四字节(4 bytes))
	//00000000 00000000 00000000 00000010 2的二进制32比特位

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
//	//0表示假, 非0就是真
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
//	//sizeof是一个操作符
//	//sizeof不是函数
//	//计算类型或者变量的大小
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//	return 0;
//}

int main()
{
	//10 * 4 = 40
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr)); //计算的是数组的总大小, 单位是字节
	printf("%d\n", sizeof(arr[0])); //4

	int size = sizeof(arr) / sizeof(arr[0]); //计算数组元素个数
	printf("%d\n", size);
	return 0;
}