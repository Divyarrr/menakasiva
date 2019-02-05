#include<stdio.h>

int main() {
   int N;
   int i,k=0,rem=0;
   scanf("%d",&N);
   while(N)
   {
       rem=N%10;
       N=N/10;
       printf("%d",rem);
   }
   return 0;
}
   
