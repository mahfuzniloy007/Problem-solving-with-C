#include<stdio.h>
int main()
{
    int a,even=0,odd=0;
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        int b;
        scanf("%d",&b);
        if(b%2==0)
        {
            even+=b;
        }
        else
        {
            odd+=b;
        }
    }
    printf("%d %d",even,odd);
    return 0;
}