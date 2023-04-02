#include<stdio.h>

int main()
{
    int a=40,b=4,c=3;
    int sum=a+b;
    int mns=a-b;
    int mlt=a*b;
    int div=a/b;
    float dvd=a*1.0/c;
    int mod=a%c;
    printf("%d %d %d %d %f %d",sum,mns,mlt,div,dvd,mod);
}