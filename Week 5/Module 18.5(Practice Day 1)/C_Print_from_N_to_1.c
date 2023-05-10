#include <stdio.h>
void fun(int i, int k)
{
    if (i == k)
        return;
    if (i == k + 1)
    {
        printf("%d", i);
    }
    else
    {
        printf("%d ", i);
    }
    fun(i - 1, k);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n, 0);
    return 0;
}