#include<stdio.h>
int main() {
   int N,M,i,rem=0,t=0,k=0;
   scanf("%d%d",&N,&M);
   t=N*M;
   for(i=1;i<=t;i++)
   {
       if((i*i)==t)
       k++;
   }
   if(k>0)
   printf("perfect square");
   else
   printf("not a perfect square");
   return 0;
}
