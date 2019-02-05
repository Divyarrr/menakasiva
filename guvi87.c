#include<stdio.h>

int main() {
   int N,M,i,gcd=0;
   scanf("%d%d",&N,&M);
   if(N<M)
   {
   for(i=1;i<=M;i++)
   {
       if((N%i==0)&&(M%i==0))
       gcd=i;
   }
   }
   else
   for(i=1;i<=N;i++)
   {
       if((N%i==0)&&(M%i==0))
       gcd=i;
   }
   printf("%d",gcd);
   return 0;
}
   
   

   
   
