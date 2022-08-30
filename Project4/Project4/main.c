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

//int main()
//{
//	//10 * 4 = 40
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr)); //计算的是数组的总大小, 单位是字节
//	printf("%d\n", sizeof(arr[0])); //4
//
//	int size = sizeof(arr) / sizeof(arr[0]); //计算数组元素个数
//	printf("%d\n", size);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
	//~ 按位(二进制位)取反
	//把所有二进制位中的数字,1变成0,0变成1
	//整数a: 00000000 00000000 00000000 00000000
	//~a: 11111111 11111111 11111111 1111111 1
	//整数在内存中存储的是补码 (正整数的原码,补码,反码相同)
	//一个整数的二进制表示有3种: 1.原码 2.反码 3.补码

	//负数的计算方式 
	//-1:10000000 00000000 00000000 00000001 (原码)
	//   11111111 11111111 11111111 11111110 (反码)
	//   11111111 11111111 11111111 11111111 (补码)
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a; //前置++ - 先++, 后赋值
//	printf("%d\n", b); //11
//	printf("%d\n", a); //11
//
//	int a = 10;
//	int b = a++; //后置++ - 先赋值, 后++
//	printf("%d\n", b); //10
//	printf("%d\n", a); //11
//
//	return 0;
//}


//int main()
//{
//	 强制类型转换
//	int a = (int)3.14; //浮点型强制转换成整型
//
//	printf("%d\n", a);
//	return 0;
//}


//逻辑操作符
//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = a || b;
//
//	printf("%d\n", c);
//	return 0;
//}


//条件操作符(三目操作符)
// exp1 ? exp2 : exp3 

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	/*if (a > b)
//	{
//		max = a;
//	}
//	else 
//	{
//		max = b;
//	}*/
//
//	max = a > b ? a : b;
//	printf("%d\n", max);
//
//	return 0;
//}


//逗号表达式
//int main()
//{
//	//(2, 4 + 5, 6);
//	int a = 0;
//	int b = 3;
//	int c = 5;
//			// a = 5    c = 1      b = 3
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//逗号表达式,是从左向右一次计算的
//	//整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", d);
//	return 0;
//}


//下标引用操作符
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);
//
//	return 0;
//}


//函数调用操作符
//int main()
//{
//	//调用函数的时候,函数名后边的()就是函数调用操作符
//	printf("hehe\n");
//	printf("%d\n", 100);
//
//	return 0;
//}


//常见关键字
//1. C语言提供的,不能自己创建关键字
//2. 变量名不能做关键字
//int main()
//{
//	//int char;
//	{
//		//auto 是自动的 - 每个局部变量都是auto修饰的
//		//auto省略
//		int a = 10; //自动创建,自动销毁的 - 自动变量
//	}
//
//	//extern是用来申明外部符号的
//	
//}


//计算机中的数据可以存储到哪里呢?
//寄存器(更小),高速缓存(几十MB),内存(8G-16G),硬盘(500G),网盘(2T免费的)
//造价越高 速度越快 空间越小
//int main()
//{
//	//register 寄存器关键字
//	//大量频繁被使用的数据,放在寄存器中,提升效率
//	register int num = 100; // 建议num的值存放在寄存器中
//	return 0;
//}


//signed 有符号的 10 -20...
//unsigned 无符号的

//define和include不是关键字 -- 预处理指令


//typedef -- 类型定义
//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int num1 = 100;
//	u_int num2 = 100;
//	return 0;
//}


//static - 静态的
//1. static修饰局部变量: 改变了局部变量的生命周期(本质上改变了变量的存储类型)
//2. static修饰全局变量: 使这个全局变量只能在自己所在的源文件内部可以使用, 其他源文件不能使用
//3. static修饰函数: 使得这个函数只能在自己所在的源文件内部使用,不能在其他源文件内部使用

//内存分为:
//1. 栈区: 局部变量,函数的参数
//2. 堆区: 动态内存分配
//3. 静态区: 全局变量, static修饰的静态变量

//void test()
//{
//	static int a = 1; //被static修饰的变量a出局部范围之后不销毁
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//extern 声明外部符号
//extern int g_val;
//
//int main() 
//{
//	printf("%d\n", g_val);
//	return 0;
//}


//声明函数
extern int add(int, int);

int main()
{
	int a = 10;
	int b = 20;
	int sum = add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}