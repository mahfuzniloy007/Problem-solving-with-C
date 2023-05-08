#include <stdio.h>
#include<string.h>
int main()
{
    char n[1000];
    scanf("%s", n);
    int a=strlen(n);
    int i = 0, j = a - 1;
    int flag = 0;
    while (i < j)
    {
        if (n[i] == n[j])
        {
            flag++;
        }
        i++;
        j--;
    }
    if (flag == 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}