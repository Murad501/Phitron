#include <stdio.h>
int main () {
    int ar[5] = {1, 2, 3, 4, 5};
    // printf("0th index er address %p\n", &ar[0]);
    // printf("0th index er address %p\n", ar);
    printf("0th index er value %d\n", ar[0]);
    printf("0th index er address %d\n", *ar);
    *(ar + 1)=20;
    printf("0th index er value %d\n", 2[ar]);
    printf("0th index er address %d\n", *(ar+1));
    return 0;
}