#include <stdio.h>
int main()
{
    char C;
    scanf("%c", &C);
    if (C == 122)
    {
        printf("a");
    }
    else
    {
        printf("%c", C + 1);
    }
    return 0;
}