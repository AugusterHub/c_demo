#include <stdio.h>
#include <stdlib.h>

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

// c 数据类型所占的字节数
int main()
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
}
