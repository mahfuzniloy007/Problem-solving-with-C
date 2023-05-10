#include<stdio.h>
void fun(int i,int k)
{
    if(i==k) return;
    printf("I love Recursion\n");
    fun(i+1,k);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(0,n);
    return 0;
}