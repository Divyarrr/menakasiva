
#include<stdio.h>

int main() {
   int n,i=0,sum=0;
   scanf("%d",&n);
   if(n%2==0)
   {
       n=n+2;
       printf("%d",n);
   }
   else if(n%2!=0)
   {
       n=n-1;
       printf("%d",n);
   }
   return 0;
}
