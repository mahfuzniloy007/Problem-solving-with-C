#include<stdio.h>
int main()
{
    int t,w,h;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d%d",&w,&h);
    }
    for (int i = 0; i < t; i++)
    {
        if (w==h)
        {
           printf("Square\n");
        }
        else if(w!=h)
        {
            printf("Rectangle\n");
        }
    }
    return 0;
}