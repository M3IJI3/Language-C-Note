#define _CRT_SECURE_NO_WARNINGS 1 // ���Ӿ��� - һ��Ҫ���ڵ�һ��!
#include <stdio.h>

//int main() {
//    int age = 20;
//    double weight = 75.3;
//
//    age += 1;
//    printf("%d\n", age);
//
//    weight -= 10;
//    printf("%lf\n", weight);
//
//    return 0;
//}


//ȫ�ֱ��� - {}�ⲿ�����
//int a = 100;
//
//int main() {
//
//    //�ֲ����� - {}�ڲ������
//    //���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ���������
//    //�������ȫ�ֱ����;ֲ�����������д��һ��
//    int a = 10;
//
//    printf("%d\n", a); // 10
//
//    return 0;
//}


//дһ�����������������ĺ�
//scanf()���������뺯��
int main() {
    int a = 0;
    int b = 0;

    scanf("%d %d", &a, &b);

    int c = a + b;
    printf("c = %d\n", c);

    return 0; 
}