
#include<stdio.h>

int main() {
   int n,m,p=0;
   scanf("%d%d",&n,&m);
   p=n*m;
   if(p%2==0)
   {
       printf("even");
   }
   else if(p%2!=0)
   {
       printf("odd");
   }
   return 0;
}
