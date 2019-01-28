#include<stdio.h>
int main()
{
    char S[100];
    int i,K;
    scanf("%s",S);
    scanf("%d",&K);
    for(i=0;i<K;i++)
    {
        printf("%c",S[i]);
    }
    
    return 0;
    
}
