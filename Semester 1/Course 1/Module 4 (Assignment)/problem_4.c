#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
   scanf("%d", &n);

   if(n > 1000){
    int restAmount = n - 1000;
    if(restAmount >= 500){
        printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes");
    }else{
        printf("I will buy Punjabi");
    }
   }else{
    printf("Bad luck!");
   }
   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
