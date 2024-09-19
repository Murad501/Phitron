#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);

    int len = strlen(a);
    int cnt[26] = {0};
    for (int i = 0; i < len; i++)
    {
        int value = a[i] - 97;
        cnt[value]++;
    }

    for (int i = 0; i < 26; i++){
        if(cnt[i] != 0){
            printf("%c - %d\n", i + 'a', cnt[i]);
        }
    }

    return 0;
}