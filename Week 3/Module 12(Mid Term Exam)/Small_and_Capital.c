#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    int s=0,c=0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i]>='a' && a[i]<='z')
        {
            s++;
        }
        else
        {
            c++;
        }
    }
    printf("%d %d",c,s);
    return 0;
}