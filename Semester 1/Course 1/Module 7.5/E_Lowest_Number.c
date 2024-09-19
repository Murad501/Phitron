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
    int position = 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < lowest)
        {
            lowest = a[i];
            position = i + 1;
        }
    }
    printf("%d %d", lowest, position);

    return 0;
}