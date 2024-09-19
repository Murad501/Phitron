#include <stdio.h>
#include <string.h>

void fun(char ar[])
{

    int len = strlen(ar);
    printf("%d\n", len);
}
int main()
{
    char ar[20] = "hello";
    // int sz = sizeof(ar) / sizeof(char);
    // int len = strlen(ar);
    // printf("%d\n", sz);
    // printf("%d\n", len);
    fun(ar);
    return 0;
}