#include<stdio.h>
int main()
{
    int a,b,temp=0;
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d\t",a);
    printf("%d",b);
    
    return 0;
    
}
