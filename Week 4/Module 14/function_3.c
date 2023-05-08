//No Return + Parameter

#include <stdio.h>
void sum(int x, int y)
{
    int s = x + y;
    printf("%d\n", s);
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    sum(a, b);
    return 0;
}

// #include <stdio.h>
//     int main()
//     {
//         int ary[4] = {1, 2, 3, 4};
//         int *p;
//         p = ary + 3;
//         *p = 5;
//         printf("%d\n", ary[3]);
//     }