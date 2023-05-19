#include <stdio.h>

int main()
{
    int n, i, a[1000], min, count;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    min = a[0];
    count = 1;
    for(i=1; i<n; i++) {
        if(a[i] < min) {
            min = a[i];
            count = 1;
        } else if(a[i] == min) {
            count++;
        }
    }
    if(count % 2 == 1) {
        printf("Lucky\n");
    } else {
        printf("Unlucky\n");
    }
    return 0;
}
