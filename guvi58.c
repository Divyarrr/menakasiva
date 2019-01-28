#include<stdio.h>

int main() {
   int N,K,i,a[100],l=0;
   scanf("%d%d",&N,&K);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<N;i++)
   {
       if(a[i]==K)
       l++;
   }
   if(l!=0)
   printf("yes");
   else
   printf("no");
   return 0;
}
   
   
