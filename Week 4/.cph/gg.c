#include <stdio.h>
int count_before_zero(int arr[], int sz)
{
    if (sz < 0) return 0;
    int count = 0;
    if (arr[sz] == 0) return count;
    return count = 1 + count_before_zero(arr, sz + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int ans = count_before_zero(arr, 0);
    printf("%d\n", ans);
}