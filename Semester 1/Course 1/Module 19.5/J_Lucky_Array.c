#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int lowest = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < lowest)
        {
            lowest = a[i];
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == lowest)
        {
            cnt += 1;
        }
    }

    if (cnt % 2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }

    return 0;
}