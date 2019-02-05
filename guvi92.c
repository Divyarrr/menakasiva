#include<stdio.h>

int main() {
   int N,num,sum=0,i;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&num);
       sum=sum+num;
   }
   printf("%d",sum);
   return 0;
}
   
