#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", &s);
    int len = strlen(s);
    int i = 0, j = len - 1;
    int flag = 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            flag = 0;
        }
        i++;
        j--;
    }

    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}