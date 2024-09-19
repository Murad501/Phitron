#include <stdio.h>
void summation(int ar[], int len, int sum)
{
    sum += ar[len - 1];

    if (len == 1)
    {
        printf("%d", sum);
        return;
    }

    summation(ar, len - 1, sum);
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
    summation(ar, n, 0);
    return 0;
}