#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int l = 5;
    for (int i = 1; i <= n; i += 2)
    {
        if (i % 2 == 1)
        {
            l++;
        }
    }
    int s = 1;
    int sp = l - 1;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < sp; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < s; j++)
        {
            printf("*");
        }
        s += 2;
        sp -= 1;
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}