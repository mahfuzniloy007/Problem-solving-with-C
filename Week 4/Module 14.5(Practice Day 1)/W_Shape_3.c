#include<stdio.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    s=n-1;
    k=1;
    for (int i = 0; i < n*2; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        if (i<n)
        {
            s--;
            k=k+2;
        }
        else if (i==n)
        {
            s--;
            k=k+2;
        }
        else
        {
            s++;
            k=k-2;
        }
        printf("\n");
    }
    return 0;
}