#include<stdio.h>

int main() {
   int n,i,a[100],k=0,c=0;
   for(i=0;i<10;i++)
   {
       scanf("%d",&n);
       a[k]=n;
       k++;
   }
   for(i=0;i<k;i++)
   {
       c=a[0];
           if(a[i]<c)
           {
           c=a[i];
           
           }
           
   }
       printf("%d",c);
   return 0;
}
