#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 1. 计算n的阶乘
//int main()
//{
//	int n = 0;
//	int result = 1;
//	scanf("%d", &n);
//	
//
//	for (int i = 1; i <= n; i++)
//	{
//		result = result * i;
//	}
//
//	printf("%d\n", result);
//
//	return 0;
//}


// 2.计算1!+2!+3!+...+10!
//int main()
//{
//	int result = 1;
//	int sum = 0;
//	for (int i = 1; i < 11; i++)
//	{
//		result = result * i;
//		sum = sum + result;
//		printf("%d\n", sum);
//	}
//
//	return 0;
//}


//3.在一个有序数组中查找具体的某个数字n.编写int binsearch(int x, int v[], int n);
//功能:在v[0]<=v[1]<=v[2]<=...<=v[n-1]的数组中查找x
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 6;

	//在arr这个有序的数组中查找k的值
	int array_length = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = array_length - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else {
			printf("FOUND %d\n", mid);
			break;
		}
	}

	if (left > right)
	{
		printf("Can't find!\n");
	}

	return 0;
}