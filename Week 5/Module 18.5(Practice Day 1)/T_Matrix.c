#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int prm=0;
    int snd=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j)
            {
                prm+=a[i][j];
            }
            if(i+j==n-1)
            {
                snd+=a[i][j];
            }
            
        }
    }
    int ans=abs(prm-snd);
    printf("%d",ans);
    return 0;
}