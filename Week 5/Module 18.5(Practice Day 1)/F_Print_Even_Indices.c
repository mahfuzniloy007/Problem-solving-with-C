#include<stdio.h>
void fun(int a[],int i,int n)
{
    if(i%2==0)
    {
        printf("%d ",a[i]);
    }
    if(i==n) return;
    fun(a,i-1,n);
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
          scanf("%d",&a[i]);
    }
    fun(a,n-1,0);
    return 0;
}