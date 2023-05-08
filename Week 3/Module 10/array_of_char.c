#include<stdio.h>
int main()
{
    char ar[16]; 
    for (int i = 0; i < 16; i++)
    {
        scanf("%c",&ar[i]);
    }
    for (int i = 0; i < 16; i++)
    {
        printf("%c\n",ar[i]);
    }
    printf("%d",sizeof(ar));
    return 0;
}