#include <stdio.h>
int summation(int x, int y)
{
    return x + y;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int res = summation(a, b);
    printf("%d\n", res);
    return 0;
}