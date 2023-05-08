#include<stdio.h>
// void fun(int *a,int n)
// {
//     a[3]=500;
// }
// int main()
// {
//     int a[5]={10,20,30,40,50};
//     fun(a,5);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ",a[i]);
//     }
    
//     return 0;
// }
void fun(char *a)
{
    a[0]='G';
}
int main()
{
    char a[6]="Hello";
    fun(a);
    printf("%s",a);
    
    return 0;
}