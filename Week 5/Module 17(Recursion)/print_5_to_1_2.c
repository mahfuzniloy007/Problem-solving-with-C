#include<stdio.h>
void fun(int i)
{
    if(i==6) return; //base case -> stop recursion
    fun(i+1);
    printf("%d\n",i);
    
}
int main()
{
    fun(1);
    return 0;
}