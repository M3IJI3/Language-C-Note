#define _CRT_NO_SECURE_WARNINGS 1
#include <stdio.h>

//�ṹ�������C���Դ����µ����ͳ���

//����һ��ѧ��
struct Student
{
	char name[20]; //��Ա����
	int age;
	double score;
};

//����һ����
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Student s = {"Leonard", 20, 85.5}; //�ṹ��Ĵ����ͳ�ʼ��
	struct Book b = { "Maths", 32.4, "0192938" }; //�ṹ�����,��Ա����

	printf("1: %s %d %lf\n", s.name, s.age, s.score);

	struct Student * ps = &s;

	//printf("%p\n", ps);

	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score); //�ṹ���ָ��->��Ա������

	return 0;
}