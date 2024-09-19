#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int x;
    scanf("%d", &x);
    // int ans = ceil(x);
    // int ans = floor(x);
    // int ans = round(x);
    // float ans = sqrt(x);
    // int ans = pow(x*1.0, y*1.0);
    // int ans = pow(x*1.0, y*1.0);
    int ans = abs(x);

    printf("%d\n", ans);
    return 0;
}