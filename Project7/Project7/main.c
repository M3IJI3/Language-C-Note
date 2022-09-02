#define _CRT_NO_SECURE_WARNINGS 1
#include <stdio.h>

//结构体可以让C语言创建新的类型出来

//创建一个学生
struct Student
{
	char name[20]; //成员变量
	int age;
	double score;
};

//创建一本书
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Student s = {"Leonard", 20, 85.5}; //结构体的创建和初始化
	struct Book b = { "Maths", 32.4, "0192938" }; //结构体变量,成员变量

	printf("1: %s %d %lf\n", s.name, s.age, s.score);

	struct Student * ps = &s;

	//printf("%p\n", ps);

	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score); //结构体的指针->成员变量名

	return 0;
}