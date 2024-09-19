#include <stdio.h>

int summation(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    return a + b;
}
int main()
{

    int sum = summation();
    printf("%d\n", sum);
    return 0;
}