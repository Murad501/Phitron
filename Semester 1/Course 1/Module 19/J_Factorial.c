#include <stdio.h>
long long int fun(int n)
{
    if (n == 1)
        return 1;

    long long int res = n * fun(n - 1);
    return res;
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int ans = fun(n);
    printf("%lld", ans);
    return 0;
}