#include<stdio.h>
int main()
{
    int x=10;
    printf("%p\n",&x);
    //dereference
    int *p=&x;
    printf("%d\n",*p);
    *p=500;
    printf("%d",x);
    return 0;
}