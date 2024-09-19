#include <stdio.h>

void summation(int a, int b)
{
    int s = a + b;
    printf("%d\n", s);
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    summation(x, y);
    return 0;
}