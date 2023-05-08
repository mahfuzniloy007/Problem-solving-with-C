#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    // printf("%p\n",a[0]);
    // printf("%p",*a);
    printf("%d\n",*(a+1)); 
    printf("%d\n",*(1+a)); 
    printf("%d\n",(a[1])); 
    printf("%d\n",(1[a])); 
    // a[1] -> *(a+1)
    // *(a+1) -> a[1]
    // *(1+a) -> a[1] / 1[a]
    return 0;
}