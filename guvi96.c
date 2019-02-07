#include<stdio.h>
int main()
{
    int A,B,C,i,sum=0;
    scanf("%d%d%d",&A,&B,&C);
    for(i=1;i<C;i++)
    {
        sum=sum+(A+(i*B));
    }
    printf("%d",sum+A);
    return 0;
}
