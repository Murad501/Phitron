#include <stdio.h>

int summation(int a, int b)
{
    return a + b;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = summation(x, y);
    printf("%d\n", sum);
    return 0;
}