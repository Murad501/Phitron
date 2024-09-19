#include <stdio.h>
void fun(int a, int first)
{
    if (first > a)
        return;
    printf("%d\n", first);
    fun(a, first + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n, 1);
    return 0;
}