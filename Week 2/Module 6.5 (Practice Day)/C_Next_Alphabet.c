#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a=='z')
    {
        printf("a");
    }
    else
    {
        int x=a+1;
        printf("%c",x);
    }
    return 0;
}