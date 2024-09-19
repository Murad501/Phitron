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

    int divideByTwo = 0;
    int divideByThree = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            divideByTwo++;
        }
        else if (a[i] % 3 == 0)
        {
            divideByThree++;
        }
    }

    printf("%d %d", divideByTwo, divideByThree);
    return 0;
}