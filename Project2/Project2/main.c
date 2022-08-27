#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//作用域(scope)和生命周期
// 
//作用域
//变量在哪里可以使用哪里就是变量的作用域
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程

//int g_val = 2022; // 全局变量
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


//声明变量
//extern int g_val;
//
//int main() {
//	printf("%d\n", g_val);
//	return 0;
//}

//生命周期
//变量的生命周期：变量的创建和销毁之间的时间段
//
//局部变量的生命周期：进入局部范围，生命周期开始，出局部范围， 生命结束
//全局变量的生命周期：程序的生命周期
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


//常量 

//#define MAX 10000

//int main() {
	//1. 字面常量
	//3.14;
	//10;
	//'a';
	//"abcdef";

	//2. const修饰的常变量
	//const int num = 10; //num就是常变量 - 常属性(不能被改变的属性)
	//num = 20;

	//int arr[10] = { 0 };

	//const int n = 10; //变量n
	//int arr2[n] = { 0 }; //n是变量, 这里不可以

	//3. #define定义的标识符常量
	//MAX = 20000; //ERROR!
	/*int n = MAX;
	printf("n = %d\n", n);
	*/

	


//	return 0;
//}

//性别
enum Sex
{
	//这种枚举类型的变量的未来可能取值
	//枚举常量
	MALE = 3, //赋初值 - 并不是改变MALE的值
	FEMALE,
	SECRET
};

//int main() 
//{
//	//4. 枚举常量
//	//可以一一列举的常量
//	enum Sex s = MALE;
//	printf("%d\n", MALE); // 0
//	printf("%d\n", FEMALE); // 1
//	printf("%d\n", SECRET); // 2
//	return 0;
//}


//字符串就是一串字符 - 用双引号括起来的一串字符
//字符串在结尾的位置隐藏了一个\0的字符
//\0是字符串的结束标志

//#include <string.h>

//int main() {

	//字符数组 - 数组是一组相同类型的元素
	//char arr[] = "hello";

	/*char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c'};*/

	//求一串字符串的长度 (\0不算字符串长度)
	//int length = strlen("abc"); // 报警告 没有引用头文件
	//printf("%d\n", length);

	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2)); //随机值

	//打印字符串
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);

	//return 0;
 //}


//转义字符 - 转变了原来的意思 \t
//int main() {
//
//	//printf("c:\test\test.c");
//	printf("ab\ncd"); //  \+n
//	return 0;
//}

//int main() {
//	//printf("(are you ok??)"); // ??) -- 会被解析成 ] - 三字母词
//
//	//printf("%c\n", '\'');
//	printf("%s\n", "\"abc\"");
//	printf("%s\n", "c:\\test\\test.git");
//	printf("\a"); //警告字符 触发蜂鸣
//	
//	return 0;
//}

//#include <string.h>

//int main() {

	//八进制的130是十进制的88 (1 * 8^2 + 3 * 8^1 + 0 * 8^0 = 73)
	//printf("%c\n", '\130'); 

	//x -- ascii码值是88
	//printf("%c\n", '\101'); // a - 65 - 八进制是: 101
	//printf("%c\n", '\x30'); //ascii码 -- 48 -- 字符0

	//printf("%d\n", strlen("abc")); //3
	//printf("%d\n", strlen("c:\test\328\test.c"));
	//printf("%s\n", "c:\test\328\test.c");

	//return 0;
//}

//注释: 是用来解释复杂代码的
//


//int main()
//{
//	//int a = 10; //C++注释风格
//	/*
//	  int b = 0;
//	*/  //C语言的注释风格 - 不支持嵌套注释(缺陷)
//	
//	return 0;
//}

//int main() {
//	int input = 0; //输入
//	printf("加入比特:)");
//	printf("你要好好学习嘛?");
//	scanf("%d", &input);
//
//	if (input == 1) {
//		printf("good offer\n");
//	}
//	else {
//		printf("卖红薯\n");
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

