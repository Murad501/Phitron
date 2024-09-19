#include <stdio.h>
int main()
{
    int n, k, s;
    scanf("%d", &n);

    k = 1;
    s = n - 1;
    for (int i = 1; i <= n * 2; i++)
    {

        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        if (i < n)
        {
            k += 2;
            s--;
        }
        else if (i > n)
        {
            k -= 2;
            s++;
        }

        printf("\n");
    }

    return 0;
}