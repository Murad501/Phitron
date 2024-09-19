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

    // idea 1

    // int temp;
    // for (int i = 0; i < n / 2; i++)
    // {
    //     temp = a[i];
    //     a[i] = a[n - i - 1];
    //     a[n - i - 1] = temp;
    // }

    int i = 0, j = n - 1;

    while (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
        /* code */
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}