#include<stdio.h>
int main()
{
    int N,M,add=0;
    scanf("%d%d",&N,&M);
    add=N+M;
    if(add%2==0)
    printf("even");
    else
    printf("odd");
return 0;
}
