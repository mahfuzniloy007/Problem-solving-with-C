#include <stdio.h>
int main()
{
    double x = 6.23;
    double *ptr = &x;
    double *ptr2 = ptr;
    *ptr2 = 45.56;
    printf("X er Value - %0.2lf\n", x);
    printf("X er Value - %0.2lf\n", *ptr);
    printf("X er Value - %0.2lf\n",ptr2);
    return 0;
}