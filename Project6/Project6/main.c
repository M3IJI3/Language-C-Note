#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.内存是怎么编号的?
//2.一个这样的内存单元空间是多大?

//32位 - 32根地址线 - 物理线 - 通电 - 1/0
//4,294,967,296 Bits / 8 = 536,870,912 Bytes
//536,870,912 Bytes / 1024 = 524,288 KB
//524,288 KB / 1024 = 512 MB
//512 MB / 1024 = 0.5GB 


// 64位

//电信号转换成数字信号: 1和0组成的二进制序列
//最终: 一个内存单元是一个字节, 然后分配地址

//int main()
//{
//	int a = 10; //a在内存中要分配中间的地址 - 4个字节
//	printf("%p\n", &a); //%p: 专门用来打印地址
//
//	int * pa = &a; //pa是用来存放地址的,在C语言中叫指针变量
//	// * 说明pa是指针变量
//	// int说明pa指向的对象是int类型
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


//指针 就是 地址
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	*pa = 20; //* 解引用操作 | *pa就是通过pa里面的地址,找到a
//
//	printf("%d\n", a);
//
//	return 0;
//}


//指针的大小是相同的!
//指针是用来存放地址的,指针需要多大空间取决于地址的存储需要多大空间
//32位 32bit - 4bytes
//64位 64bit - 8bytes
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
