#include <stdio.h>

void order(int a, int b, int c)
{
    
    if (a >= b && a >= c)
    {
        if (b >= c)
        {
            printf("%d\n%d\n%d\n", c, b, a);
        }
        else
        {
            printf("%d\n%d\n%d\n", b, c, a);
        }
    }
    else if (b >= a && b >= c)
    {
        if (a >= c)
        {
            printf("%d\n%d\n%d\n", c, a, b);
        }
        else
        {
            printf("%d\n%d\n%d\n", a, c, b);
        }
    }
    else
    {
        if (a >= b)
        {
            printf("%d\n%d\n%d\n", b, a, c);
        }
        else
        {
            printf("%d\n%d\n%d\n", a, b, c);
        }
    }

    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    order(a, b, c);
    return 0;
}