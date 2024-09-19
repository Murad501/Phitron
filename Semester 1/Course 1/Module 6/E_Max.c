#include <stdio.h>
int main()
{
    int a;
    int max = 0;
    int x;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &x);
        if (x > max)
        {
            max = x;
        }
    }
    printf("%d\n", max);

    return 0;
}