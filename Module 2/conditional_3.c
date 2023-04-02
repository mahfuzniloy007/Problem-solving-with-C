// Nested If Else

#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000)
    {
        printf("Cox's Bazar jabo\n");
        if(tk>=10000)
        {
            printf("Saint Martin o jabo\n");
        }
        else
        {
            printf("ferot Chole Ashbo\n");
        }
    }
    else
    {
        printf("Jabo na ghurte");
    }
    return 0;
}