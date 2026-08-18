#include "stdio.h"

void fun1(void)
{
    printf("ni hao! \n");
}

void fun2(void)
{
    printf("si mi ma sai! \n");
}

void fun3(void)
{
    int a = 10;
    int b = 0;
    printf("a + b = %d", a + b);
}

int main(void)
{
    fun1();
    fun2();
    fun3();

    while (1)
    {
        printf("hello world ! \n");
    }
}
