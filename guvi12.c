#include<stdio.h>
int main()
{
    int a,sum=0,rem=0,temp;
    scanf("%d",&a);
    temp=a;
    while(a)
    {
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;
    }
    if(sum==temp)
    printf("palindrome");
    else
    printf("not");
    return 0;
}
