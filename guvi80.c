#include<stdio.h>
int main() {
   int N,s=0,i,rem=0,temp=0,c[100],k=0;
   scanf("%d",&N);
   temp=N;
   while(temp)
   {
       temp=temp/10;
       s++;
   }
   for(i=0;i<s;i++)
   {
       rem=N%10;
       N=N/10;
       if(rem%2!=0)
       c[k]=rem;
       k++;
   }
   for(i=k-1;i>0;i--)
   {
       printf("%d\t",c[i]);
   }
   return 0;
}
   
