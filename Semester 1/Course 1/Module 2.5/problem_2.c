#include <stdio.h>
int main(){

    int num_1, num_2;
    scanf("%d %d", &num_1, &num_2);

    printf("%d\n", num_1 + num_2);
    printf("%d\n", num_1 - num_2);
    printf("%d\n", num_1 * num_2);
    printf("%.2f", (float)num_1 / num_2);

    return 0;
}