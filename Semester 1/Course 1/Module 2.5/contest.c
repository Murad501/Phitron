#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a;
    long long int b;
    float c;
    char d;

    scanf("%d %lld %f %c", &a, &b, &c, &d);
    
    printf("%d\n%lld\n%0.2f\n%c", a, b, c, d);
    return 0;
}
