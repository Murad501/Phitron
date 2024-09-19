#include <stdio.h>
int main()
{
    int x, p;
    scanf("%d %d", &x, &p);
    float res = p / (1 - (x / 100.00));
    printf("%0.2f\n", res);
    return 0;
}