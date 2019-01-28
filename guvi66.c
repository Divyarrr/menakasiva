#include<stdio.h>
int main()
{
    int n,i,f=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%2==0)
        f++;
        else
        f=0;
        break;
    }
    if(f==0)
    printf("prime");
    else
    printf("not");
    return 0;
}
