#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", &s);
        int Pathaan = 0;
        int Tiger = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'T')
            {
                Tiger++;
            }
            else
            {
                Pathaan++;
            }
        }

        if (Pathaan > Tiger)
        {
            printf("Pathaan\n");
        }
        else if (Pathaan < Tiger)
        {
            printf("Tiger\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}