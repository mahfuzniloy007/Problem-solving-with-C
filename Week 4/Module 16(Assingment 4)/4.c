// Return + Parameter
// #include<stdio.h>
// int exm1(int x,int y)
// {
//     int s=x+y;
//     return s;
// }
// int main()
// {
//     printf("%d",exm1(10,20));
//     return 0;
// }

//return + No Parameter
#include<stdio.h>
int exm2()
{
    int x;
    scanf("%d",&x);
    int mul=x;
    return mul;
}
int main()
{
    int m=exm2();
    if (m>0)
    {
        printf("The Number is Positive\n");
    }
    else
    {
        printf("The Number is Negative\n");
    }
    return 0;
}

//no return + parameter
// #include<stdio.h>
// void exm3(char x[30],char y[30])
// {
//     printf("2nd Name - %s\n1st Name - %s",y,x);
// }
// int main()
// {
//     char a[30],b[30];
//     printf("Enter The 1st Name - ");
//     scanf("%s",a);
//     printf("Enter The 2nd Name - ");
//     scanf("%s",b);
//     exm3(a,b);
//     return 0;
// }

//no return + no parameter
// #include<stdio.h>
// void exm4(void)
// {
//     int a;
//     scanf("%d",&a);
//     if (a%2==0)
//     {
//         printf("Even\n");
//     }
//     else
//     {
//         printf("Odd\n");
//     }
// }
// int main()
// {
//     exm4();
//     return 0;
// }