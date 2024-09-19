#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    if(num <= 0){
        printf("Invalid number");
    }else {
        if(num % 2 == 1){
            printf("Odd");
        }else {
            printf("Even");
        }
    }

    return 0;
}