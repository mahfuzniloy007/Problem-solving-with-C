#include<stdio.h>
void fun(int *P)
{
    *P=400;
}
int main()
{
    int x=100;
    fun(&x);
    printf("%d",x);
    return 0;
}