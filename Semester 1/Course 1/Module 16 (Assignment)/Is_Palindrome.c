#include <stdio.h>
#include <string.h>
int is_palindrome(char s[])
{
    int len = strlen(s);
    int x = 0;
    int y = len - 1;
    int isPalindrome = 1;
    while (x < y)
    {
        if (s[x] != s[y])
        {
            isPalindrome = 0;
            break;
        }

        x++;
        y--;
    }
    return isPalindrome;
}
int main()
{
    char s[1001];
    scanf("%s", s);
    int res = is_palindrome(s);
    if (res == 0)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }

    return 0;
}