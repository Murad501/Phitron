#include <stdio.h>
void printing(int a)
{
    for (int i = 1; i <= a; i++)
    {
        if (i == a)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printing(n);
    return 0;
}