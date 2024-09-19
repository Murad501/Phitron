#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char a[n];
    scanf("%s", a);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + (a[i] - 48);
    }
    printf("%d", sum);

    return 0;
}