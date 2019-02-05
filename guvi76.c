#include<stdio.h>

int main() {
   int N,i,f=0;
   scanf("%d",&N);
   for(i=4;i<N;i++)
   {
       if(N%i==0)
       f++;
   }
   if(f>0)
   printf("yes");
   else
   printf("no");
   return 0;
}
   
