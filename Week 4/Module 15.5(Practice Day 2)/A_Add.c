#include<stdio.h>
int fun(int x,int y)
{
    
    int sum=x+y;
    return sum;
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int s=fun(x,y);
    printf("%d",s);
    return 0;
}