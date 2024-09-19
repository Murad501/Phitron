#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char s[10001];
        int capitals = 0, smalls = 0, digits = 0;
        scanf("%s", s);
        int len = strlen(s);
        for (int j = 0; j < len; j++)
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                capitals++;
            }
            else if (s[j] >= 'a' && s[j] <= 'z')
            {
                smalls++;
            }
            else
            {
                digits++;
            }
        }

        printf("%d %d %d\n", capitals, smalls, digits);
    }

    char s[10001];
    return 0;
}