#include <stdio.h>
int main () {
    int m;
    scanf ("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++) {
        scanf ("%d", &a[i]);
    }
    
    int n;
    scanf ("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++) {
        scanf ("%d", &b[i]);
    }



    int o = m + n;
    int c[o];
    for (int i = 0; i < o; i++)
    {
        if(i >= m){
            c[i] = b[i - m];
        }else{
            c[i] = a[i];
        }
    }

    for (int i = 0; i < o; i++)
    {
        printf ("%d ", c[i]);
    }
    
    


    return 0;
}