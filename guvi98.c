#include<stdio.h>

int main() {
   int N;
   int num,i,a[10000],k=0,j;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&num);
       a[k]=num;
       k++;
   }
   for(i=0;i<=k;i++)
   {
       for(j=i+1;j<k;j++)
       {
       if(a[i]>a[j])
       {
           printf("%d",i);
       }
   }
   }
   return 0;
}
   
