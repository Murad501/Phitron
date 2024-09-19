#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int minIdx = 0;
    int maxIdx = 0;

    for (int i = 0; i < n; i++)
    {
        if(a[i] < a[minIdx]){
            minIdx = i;
        }
        if(a[i] > a[maxIdx]){
            maxIdx = i;
        }
    }

    int duplicateMin = a[minIdx];
    a[minIdx] = a[maxIdx];
    a[maxIdx] = duplicateMin;
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}