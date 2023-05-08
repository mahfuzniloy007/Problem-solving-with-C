#include<stdio.h>
#include<string.h>
void my_len(char a[])
{
    printf("%d",strlen(a));
}
int main()
{
    char a[100];
    scanf("%s",a);
    my_len(a);
    return 0;
}