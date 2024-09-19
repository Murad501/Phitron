#include <stdio.h>
#include <string.h>
int main () {
    int n;
    scanf("%d", &n);
    char s[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);
        int stLen = strlen(s);
        if(stLen <= 10){
            printf("%s\n", s);
        }else{
            printf("%c%d%c\n", s[0], stLen-2, s[stLen-1]);
        }
    }
    
    return 0;
}