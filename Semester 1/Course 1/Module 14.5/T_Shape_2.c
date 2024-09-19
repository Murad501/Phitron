#include <stdio.h>
int main()
{
    int n, k, s;
    scanf("%d", &n);

    k = 1;
    s = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < (k * 2) - 1; j++)
        {
            printf("*");
        }
        k++;
        s--;
        printf("\n");
    }

    return 0;
}