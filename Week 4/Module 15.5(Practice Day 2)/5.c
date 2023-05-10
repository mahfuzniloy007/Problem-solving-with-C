#include<stdio.h>
void swap_it(int *m,int *n)//m=10,n=20 -> m=20,n=10
{
    int tmp=*m;
    *m=*n;
    *n=tmp;
    
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap_it(&a,&b);
    printf("%d %d",a,b);
    return 0;
}