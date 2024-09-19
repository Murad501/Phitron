#include <stdio.h>
#include <string.h>
int main () {
    char a[16];
    scanf("%s", a);
    // gets(a);
    // fgets(a, 16, stdin);
    a[14] = '\0';
    printf("%s", a);
    return 0;
}