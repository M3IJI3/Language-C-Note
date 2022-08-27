#define _CRT_SECURE_NO_WARNINGS 1 // 无视警告 - 一定要放在第一行!
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


//全局变量 - {}外部定义的
//int a = 100;
//
//int main() {
//
//    //局部变量 - {}内部定义的
//    //当局部变量和全局变量名字冲突的情况下，局部变量优先
//    //不建议把全局变量和局部变量的名字写成一样
//    int a = 10;
//
//    printf("%d\n", a); // 10
//
//    return 0;
//}


//写一个代码求两个整数的和
//scanf()函数是输入函数
int main() {
    int a = 0;
    int b = 0;

    scanf("%d %d", &a, &b);

    int c = a + b;
    printf("c = %d\n", c);

    return 0; 
}