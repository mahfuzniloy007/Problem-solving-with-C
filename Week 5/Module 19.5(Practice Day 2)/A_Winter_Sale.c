#include<stdio.h>
int main()
{
    float x,p;
    scanf("%f%f",&x,&p);
    float bfr=p/(1-(x/100));
    printf("%0.2f",bfr);
    return 0;
}