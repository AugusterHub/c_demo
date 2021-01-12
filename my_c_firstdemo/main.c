#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
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
    printf("i = %d", i);
    return 0;
}
