#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int t = 0, p = 0;
    for (int i = 0; i < n; i++)
    {
        long long int X1, X2;
        scanf("%lld%lld", &X1, &X2);
        if (X1 > X2)
        {
            t++;
        }
        else if (X1 < X2)
        {
            p++;
        }
    }
    if (t > p)
    {
        printf("Tiger\n");
    }
    else if (t < p)
    {
        printf("Pathan\n");
    }
    else if (t == p)
    {
        printf("Draw\n");
    }
    return 0;
}