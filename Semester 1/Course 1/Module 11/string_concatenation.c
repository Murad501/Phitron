#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int lenOfA = strlen(a);
    int lenOfB = strlen(b);

    // for (int i = lenOfA; i <= lenOfA + lenOfB; i++)
    // {
    //     printf("%d ", i);
    //     a[i] = b[i - lenOfA];
    // }

    // for (int i = 0; i <= lenOfB; i++)
    // {
    //     a[lenOfA + i] = b[i];
    // }
    // for (int i = 0; i <= lenOfB; i++)
    // {
    //     a[lenOfA] = b[i];
    //     lenOfA++;
    // }
    strcat(a, b);

    

    printf("%s", a);

    return 0;
}