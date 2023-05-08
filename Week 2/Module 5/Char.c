#include<stdio.h>
int main()
{
    char b;
    scanf("%c",&b);
    if (b>='a' && b<='z')
    {
        int ans=b-32;
        printf("%c",ans);
    }
    else
    {
        int ans=b+32;
        printf("%c",ans);
    }
    return 0;
}