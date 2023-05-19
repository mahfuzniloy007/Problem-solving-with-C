#include<stdio.h>
long long int fact(long long int n)
{   
    if(n==0) return 1;
    long long int s=fact(n-1);
    return s*n;
}
int main()
{
    long long int a;
    scanf("%lld",&a);
    long long int s = fact(a);
    printf("%lld",s);
    return 0;
}