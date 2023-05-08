#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(1000<N)
    {
        printf("I will buy Punjabi\n");
        int M=N-1000;
        if(500<=M)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    }
    else
    {
        printf("Bad luck!");
    }
    
}