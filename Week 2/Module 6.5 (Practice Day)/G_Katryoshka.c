#include<stdio.h>
int main()
{
    long long int n,m,k,res=0;
    scanf("%lld%lld%lld",&n,&m,&k);
    if(n==0 || k==0)
    {
        printf("0\n");
    }
    else
    {
        long long int min=n;
        if(m<min)
        {
            min=m;
        }
        if(k<min)
        {
            min=k;
        }
        n-=min;
        m-=min;
        k-=min;
        res+=min;
        if(n/2<k)
        {
            res+=n/2;
        }
        else
        {
            res+=k;
        }
        printf("%lld",res);
    }
    return 0;
}