#include <stdio.h>
void arr_even_index_val(int ar[], int len)
{
    if ((len - 1) % 2 == 0)
    {
        printf("%d ", ar[(len - 1)]);
    }
    if (len == 0)
        return;
    arr_even_index_val(ar, len - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    arr_even_index_val(ar, n);
    return 0;
}