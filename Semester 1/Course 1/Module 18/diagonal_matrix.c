#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;
    if (m != n)
    {
        flag = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i == j){
                continue;
            }
            if(a[i][j] != 0){
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("Diagonal matrix");
    }
    else
    {
        printf("Non Diagonal matrix");
    }
    return 0;
}