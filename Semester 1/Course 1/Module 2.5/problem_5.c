#include <stdio.h>
int main(){

    int money;
    scanf("%d", &money);

    if(money >= 10000){
                if(money > 20000){
            printf("Gucci Bag\nGucci Belt");
        }else{
            printf("Gucci Bag");
        }
    }else if(money >= 5000){
        printf("Levis Bag");
    }else{
        printf("Something");
    }

    return 0;
}