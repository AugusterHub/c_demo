#include <stdio.h>
#include <stdlib.h>
// 1 变量与常量
/*int add(int a, int b)
{
    return a * b;
}
int main(void)
{
    int i;
    i = 1;
    i = 2;
    i = 10;
    i = add(3, 4);
    printf("i = %d\n", i);
    return 0;
}*/

// c 变量&数据类型所占的字节数
/*int main()
{
    char ch;
    int a;
    short b;
    long c;
    float d;
    double e;
    ch = 'a';
    a = 1;
    b = 2;
    c = 0;
    d = 1.5;
    e = 1.5;
    printf("%d\n", sizeof(ch));
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(b));
    printf("%d\n", sizeof(c));
    printf("%d\n", sizeof(d));
    printf("%d\n", sizeof(e));
}*/

// 常量（宏常量，const常量）
/*#define PI 3.14
#define R 10
main()
{
    printf("squere = %f\n", PI * R * R);
}*/
/*main()
{
    const float PI = 3.14;
    const float R = 10;
    printf("squere = %f\n", PI * R * R);
}*/


 //赋值运算
 int main()
 {
     int a;
     float x, y;
     a = 0;
     x = y = 1.5;
     printf("%d\n%f\n%f\n",a, x, y);
     return 0;
 }
