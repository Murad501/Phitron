#include <stdio.h>

void fun (int *ar, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    
}

int main () {
    int arr[5] = { 1, 2, 3, 4, 5};
    int sz = sizeof(arr)/sizeof(int);
    printf("%d\n", sz);
    fun(arr, sz);
    return 0;
}