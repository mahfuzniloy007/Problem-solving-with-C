#include<stdio.h>
char small_to_capital()
{
    char a;
    scanf("%c",&a);
    return a;
}
int main()
{
    char s=small_to_capital();
    printf("%c",s-32);
    return 0;
}