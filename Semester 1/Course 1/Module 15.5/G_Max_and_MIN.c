#include <stdio.h>

void min_max(int ar[], int sz)
{
    int min = ar[0];
    int max = ar[0];

    for (int i = 0; i < sz; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
        }
        else if (ar[i] > max)
        {
            max = ar[i];
        }
    }

    printf("%d %d\n", min, max);
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    min_max(ar, n);
    return 0;
}