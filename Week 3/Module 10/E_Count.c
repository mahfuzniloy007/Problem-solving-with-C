#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000001];
    scanf("%s",a);
    int plus=0;
    for (int i = 0; i < strlen(a); i++)
    {
        plus=plus+(a[i]-'0');
    }
    printf("%d",plus);
    return 0;
}