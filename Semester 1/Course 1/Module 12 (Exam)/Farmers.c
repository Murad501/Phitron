#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    int m1, m2, d;
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &m1, &m2, &d);
        int totalMan = m1 + m2;
        int oneManDays = m1 * d;
        int totalManDays = oneManDays / totalMan;

        int fewerDays = d - totalManDays;

        printf("%d\n", fewerDays);
        }

    return 0;
}