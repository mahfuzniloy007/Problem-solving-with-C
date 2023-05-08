#include<stdio.h>
void sum(int a[],int n)
{
    for (int i = 1; i < n; i++)
    {
        printf("%d ",i);
    }
    printf("%d",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",a[i]);
    }
    sum(a,n);
    return 0;
}