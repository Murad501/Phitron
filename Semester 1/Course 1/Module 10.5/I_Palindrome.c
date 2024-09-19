#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001];
    scanf("%s", a);
    int len = strlen(a);

    int i = 0;
    int j = len - 1;

    int success = 0;

    while (i < j)
    {

        if (a[i] != a[j])
        {
            printf("NO");
            success = 1;
            break;
        }

        i++;
        j--;
    }

    if (success == 0)
    {
        printf("YES");
    }
    return 0;
}