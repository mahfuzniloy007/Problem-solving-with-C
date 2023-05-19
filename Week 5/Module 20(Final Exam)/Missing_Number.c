#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int s,a,b,c;
        scanf("%d%d%d%d",&s,&a,&b,&c);
        int g=s-(a+b+c);
        printf("%d\n",g);
    }
    return 0;
}