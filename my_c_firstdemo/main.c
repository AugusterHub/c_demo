#include <stdio.h>
#include <stdlib.h>

int add(int para1, int para2)
{
    int a, b;
    a = para1;
    b = para2;
    return a + b;
}

int main(void)
{
    int i;
    i = 1;
    i = 10;
    i = add(3, 4);
    printf("i = %d", i);
    return 0;
}
