#include<stdio.h>

int main() {
   int a[100],n,c=0,i;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       c=c+a[i];
   }
   c=c/n;
   printf("%d",c);
   return 0;
   }
   
