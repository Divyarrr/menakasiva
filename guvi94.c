#include<stdio.h>

int main() {
   int N,n,k,i,j=0,a[100];
   scanf("%d",&N);
   scanf("%d",&k);
 for(i=0;i<N;i++)
 {
     scanf("%d",&n);
     a[j]=n;
     j++;
 }
 for(i=1;i<N;i++)
 {
     if(i==k)
     printf("%d",a[i-1]);
 }
return 0;
}
