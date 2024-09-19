#include <stdio.h>
int main () {
    int x = 10;
    printf("%p\n", &x);
    int * p = &x;
    printf("%p", p);
    printf("\n%d", *p);
    *p = 20;
    printf("\n%d", *p);
    return 0;
}