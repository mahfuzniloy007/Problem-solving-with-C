#include <stdio.h>
#include <string.h>
int is_palindrome(char s[10], int x)
{
    int i = 0, j = x - 1;
    int flag = 0;
    while (i < j)
    {
        if (s[i] == s[j])
        {
            flag++;
        }
        i++;
        j--;
    }
    return flag;
}
int main()
{
    char n[10];
    scanf("%s", n);
    int a = strlen(n);
    int ans = is_palindrome(n, a);
    if (ans == 0)
    {
        printf("Not Palindrome\n");
    }
    else
    {
        printf("Palindrome\n");
    }
    return 0;
}