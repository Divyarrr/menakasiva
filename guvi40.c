#include<stdio.h>
int main()
{
    int a,d=0,t=1,t1=0,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        d=t+t1;
        printf("%d\t",d);
        t=t1;
        t1=d;
        
    }
    return 0;
}
    
