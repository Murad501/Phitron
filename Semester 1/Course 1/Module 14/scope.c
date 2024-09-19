#include <stdio.h>

void fun(void)
{
    int s = 200;
    printf("fun er s - %p", &s);
}
int main()
{
    int s = 200;
    printf("main er s - %p", &s);
    fun();
    return 0;
}