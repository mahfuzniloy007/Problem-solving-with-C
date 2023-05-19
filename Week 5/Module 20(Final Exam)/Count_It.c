#include<stdio.h>
int main()
{
    char a[1001];
    fgets(a,1001,stdin);
    int s=0,c=0,e=0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i]>='a'&&a[i]<='z')
        {
            s++;
        }
        else if (a[i]>='A'&&a[i]<='Z')
        {
            c++;
        }
        else if(a[i]==' ')
        {
            e++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d",c,s,e);
    return 0;
}