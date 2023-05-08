#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);
    int st = strlen(a);
    printf("%d\n", st);
    return 0;
}

// (Theory)

// While-
// int count=0;
// int i=0;
// while (ar[i]!='\0')
// {
//     count++;
//     i++;
// }
// For-
// for (int i = 0; ar[i] != '\0'; i++)
// {
//     count++;
// }