#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    // printf("%s \n%s\n", a, b);

    // int lenOfB = strlen(b);
    // for (int i = 0; i <= lenOfB; i++)
    // {
    //     a[i] = b[i];
    // }
    

    strcpy(a, b);
    printf("%s", a);
    return 0;
}