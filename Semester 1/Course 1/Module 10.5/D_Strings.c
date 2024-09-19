#include <stdio.h>
int main () {
    char a[101], b[101];
    scanf("%s %s", a, b);

    int sizeA = strlen(a);
    int sizeB = strlen(b);

    printf("%d %d\n", sizeA, sizeB);
    printf("%s%s\n", a, b);
    char tempA1 = a[0];
    a[0] = b[0];
    b[0] = tempA1;
    printf("%s %s", a, b);

    return 0;
}