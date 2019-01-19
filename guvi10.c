#include<stdio.h>
int main()
{
    int a,i,l=0;
    scanf("%d",&a);
    while(a)
    {
       a= a/10;
       l++;
    }
    
    printf("%d",l);
    return 0;
}
