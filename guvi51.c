#include<stdio.h>

int main() {
   int n,i=0,l=0,c[100],rem=0;
   scanf("%d",&n);
   while(n)
   {
       rem=n%10;
       n=n/10;
       c[l]=rem;
       l++;
   }
   for(i=l-1;i>=0;i--)
   {
       printf("%d\t",c[i]);
   }
   
   
return 0;
}
