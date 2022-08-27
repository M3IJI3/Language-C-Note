#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//函数

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
//	//函数的方式解决
//	int sum = Add(a, b);
//	printf("%d", sum);
//
//	return 0;
//}

//数组
int main()
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int d = 4;
	
	//...

	//数组 - 一组相同类型的元素的集合
	//10个整型1-10存起来

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10) {
		printf("%d ", arr[i]);
		i++;
	}

	//数组是用下标来访问的
	//char ch[5] = { 'a','b','c' }; //不完全初始化,剩余的默认为0
	return 0;
}
