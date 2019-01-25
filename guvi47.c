#include<stdio.h>

int main() {
   int a[10],i,j,m=0,n,c=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
        if(a[i]>m)   
        {
            m=a[i];
        }
   }
     printf("%d\t",m);
     c=a[0];
     for(i=0;i<n;i++)
     {
         if(a[i]<c)
         {
         c=a[i];
         
         }
         }
   printf("%d",c);
   return 0;
   }
   
