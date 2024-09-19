#include <stdio.h>
#include <string.h>
int main () {
    char s[10001];
    scanf ("%s", s);

    int len = strlen(s);
    int res[26] = {0};
    for (int i = 0; i < len; i++)
    {
        res[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if(res[i] != 0){
            printf("%c - %d\n", i + 'a', res[i]);
        }
    }
    
    

    return 0;
}