#include <stdio.h>
void fun(int x)
{
    x = 200;
   
}
int main()
{
    int x = 10;
    // printf("main x er address %p\n", &x);
    fun(x);
    printf("%d\n", x);
    return 0;
}