#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == n - 1)
            {
                printf("%d ", ar[i][j]);
            }
        }
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j == m - 1)
            {
                printf("%d ", ar[i][j]);
            }
        }
    }

    return 0;
}