#include <stdio.h>
int main () {
    double x = 5.26;
    double *ptr = &x;
    double *ptr2 = ptr;
    *ptr2 = 10.20;

    printf("x er value %0.2lf\n", x);
    printf("x er value %0.2lf\n", *ptr);
    printf("ptr er size %d", sizeof(ptr));
    printf("x er value %0.2lf\n", x);
    printf("x er value %0.2lf\n", *ptr2);
    printf("ptr er size %d", sizeof(ptr2));

    return 0;
}