#include <stdio.h>

#include <string.h>

int main()
{
    char a[100001];
    scanf("%s", a);

    int len = strlen(a);

    for (int i = 0; i < len; i++)
    {
        if(a[i] == ','){
            a[i] = ' ';
        }else if(a[i] >= 65 && a[i] <= 90){
            a[i] = a[i] + 32;
        }else{
            a[i] = a[i] - 32;
        }
    }

    printf("%s\n", a);

    return 0;
}