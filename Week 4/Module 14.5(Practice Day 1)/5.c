#include<stdio.h>
char capital_to_small(char x)
{
    char s=x;
    printf("%c",s+32);
}
int main()
{
    char a;
    scanf("%c",&a);
    capital_to_small(a);
    return 0;
}