#include <stdio.h>
void fun (int i){
    printf("%d\n", i);
    if (i == 1) return;
    fun(i-1);
}
int main () {
    fun(100);
    return 0;
}