#include <stdio.h>
int main()
{
    int x = 10;
    int *ptr = &x;
    *ptr = 100;
    printf("X er Value - %d\n",x);
    printf("X er Value - %d",*ptr);
    return 0;
    
}