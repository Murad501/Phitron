#include <stdio.h>
int main()
{
    int n, x;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);

    int res = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == x)
            {
                printf("Yes");
                res = 1;
                break;
            }
        }
        if (res == 1)
        {
            break;
        }
    }

    if (res == 0)
    {
        printf("No");
    }

    return 0;
}