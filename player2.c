#include<stdio.h>

int main() {
    int n,i,fact=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n<20)
        {
        fact=fact*i;
    }
    else
    printf(" ");
    }
    printf("%d",fact);

   return 0;
}
