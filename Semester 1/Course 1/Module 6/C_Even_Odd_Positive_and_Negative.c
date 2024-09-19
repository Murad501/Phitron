#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int even = 0, odd = 0, positive = 0, negative = 0;
    int a;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a > 0 || a < 0)
        {
            if (a % 2 == 0)
            {
                if (a >= 0)
                {
                    even++;
                    positive++;
                }
                else
                {
                    even++;
                    negative++;
                }
            }
            else
            {
                if (a >= 0)
                {
                    odd++;
                    positive++;
                }
                else
                {
                    odd++;
                    negative++;
                }
            }
        }else{
            even++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negative);
    return 0;
}