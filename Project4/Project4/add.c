#define _CRT_SECURE_NO_WARNINGS 1

//全局变量
//全局变量在整个工程中都可以使用: 因为全局变量具有外部链接属性
//但是被static修饰后,就变成了内部链接属性,其他源文件不能链接到这个静态的全局变量
//static int g_val = 2022;

//static修饰函数
//static int add(int x, int y)
//{
//	return x + y;
//}

