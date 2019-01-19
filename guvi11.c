#include<stdio.h>

int main() {
   int a,b,p=1,i;
   scanf("%d%d",&a,&b);
   for(i=1;i<=b;i++)
   {
       p=p*a;
   }
   printf("%d",p);
   return 0;
}
