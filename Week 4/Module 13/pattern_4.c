#include <stdio.h>
int main()
{
    int n, k, s;
    scanf("%d", &n);
    s = n - 1; //for print space
    k = 1; //for print star
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        if (i < n - 1)
        {
            s--;
            k = k + 2;
        }
        else
        {
            s++;
            k = k - 2;
        }
        printf("\n");
    }
    return 0;
}