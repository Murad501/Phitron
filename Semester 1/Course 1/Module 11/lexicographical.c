#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    // int lenOfA = strlen(a);
    // for (int i = 0; i < lenOfA; i++)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("Equal");
    //         break;
    //     }
    //     else if (a[i] == '\0' && b[i] != '\0')
    //     {
    //         printf("b greater than a");
    //         break;
    //     }
    //     else if (b[i] == '\0' && a[i] != '\0')
    //     {
    //         printf("a greater than b");
    //         break;
    //     }
    //     else if (a[i] != b[i])
    //     {
    //         if (a[i] > b[i])
    //         {
    //             printf("a greater than b");
    //             break;
    //         }
    //         else if (a[i] < b[i])
    //         {
    //             printf("b greater than a");
    //             break;
    //         }
    //     }else{
    //         printf("Equal");
    //         break;
    //     }
    // }


    int val = strcmp(a, b);
    if(val > 0){
        printf("b choto");
    }else if(val < 0){
        printf("a choto");
    }else{
        printf("Equal");
    }
    return 0;
}