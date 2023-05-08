#include<stdio.h>
char char_to_ascii()
{
    char a;
    scanf("%c",&a);
    return a;
}
int main()
{
    int s=char_to_ascii();
    printf("%d",s);
    return 0;
}