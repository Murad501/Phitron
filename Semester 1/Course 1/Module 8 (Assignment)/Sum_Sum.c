#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);

    int v;
    int pos = 0;
    int neg = 0;
    for (int i = 1; i <=n; i++)
    {
        scanf("%d", &v);
        if (v > 0)
        {
            pos += v;
        }
        else if (v < 0)
        {
            neg += v;
        }
    }
    
    return 0;
}