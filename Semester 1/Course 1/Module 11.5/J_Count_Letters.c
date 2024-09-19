#include <stdio.h>
#include <string.h>
int main()
{
    char s[10000001];
    scanf("%s", s);

    int lenOfS = strlen(s);

    int a[26] = {0};

    for (int i = 0; i < lenOfS; i++)
    {
        a[s[i] - 'a']++;
    }

    for (int i = 0; i <= 25; i++)
    {
        if (a[i] != 0)
        {
            int sum = a[i];
            printf("%c : %d\n", i + 'a', a[i]);
        }
    }

    return 0;
}
