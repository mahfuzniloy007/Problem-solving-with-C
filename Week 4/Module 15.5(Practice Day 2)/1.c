#include<stdio.h>
#include <stdlib.h>
int my_abs(int x)
{
    int ans=abs(x);
    return ans;
}
int main()
{
    int a;
    scanf("%d",&a);
    int s=my_abs(a);
    printf("%d",s);
    return 0;
}