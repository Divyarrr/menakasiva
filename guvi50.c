#include<stdio.h>

int main() {
   int n,i,sum=1,h=0;
   scanf("%d",&n);
   for(i=0;i<=n/2;i++)
           {
       sum=sum*2;
       if(sum==n)
       h++;
           }
           if(h!=0)
       printf("yes");
       else
       printf("no");
return 0;
}
