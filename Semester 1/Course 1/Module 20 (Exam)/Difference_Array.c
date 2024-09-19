#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        int b[n];
        int x = 0;
        int y = n - 1;
        for (int j = 0; j < n; j++)
        {
            b[y] = a[x];
            x++;
            y--;
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[i] > b[j])
                {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        int c[n];
        for (int j = 0; j < n; j++)
        {
            c[j] = abs(a[j] - b[j]);
        }

        for (int j = 0; j < n; j++)
        {
            printf("%d ", c[j]);
        }
        printf("\n");
    }

    return 0;
}