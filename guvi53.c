
#include<stdio.h>

int main() {
   int n,i=0,l=0,c[100],rem=0,sum=0;
   scanf("%d",&n);
   while(n)
   {
       rem=n%10;
       n=n/10;
       c[l]=rem;
       l++;
   }
   for(i=0;i<l;i++)
   {
       sum=sum+c[i];
   }
       printf("%d",sum);
  return 0;
}
