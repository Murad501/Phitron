#include <stdio.h>
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

        int x;
        scanf("%d", &x);

        int res = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == x)
            {
                printf("YES\n");
                res++;
                break;
            }
        }

        if (res == 0)
        {
            printf("NO\n");
        }
    }

    return 0;
}