#include<stdio.h>
#include<string.h>
int main()
{
    char S[1001],T[1001];
    scanf("%s%s",&S,&T);
    int LenS=strlen(S);
    int LenT=strlen(T);
    printf("%d %d\n",LenS,LenT);
    printf("%s %s",S,T);
    return 0;
}