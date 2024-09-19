#include <stdio.h>
int main()
{
    int n, s, k = 1;
    scanf("%d", &n);
    s = n - 1;

    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        if (i <= n - 1)
        {
            k += 2;
            s--;
        }
        else
        {
            k -= 2;
            s++;
        }
        printf("\n");
    }

    return 0;
}