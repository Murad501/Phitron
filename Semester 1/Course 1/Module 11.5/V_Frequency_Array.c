#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int b[100001] = {0};

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= m)
        {
            b[a[i] - 1]++;
        }
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d\n", b[i]++);
    }

    return 0;
}