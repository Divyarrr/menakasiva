#include<stdio.h>

int main() {
   int a,b;
   scanf("%d%d",&a,&b);
   if(a%2==0)
   {
       a=a/2;
       printf("%d\n",a);
   }
   else
   {
       printf("%d\n",a);
   }
   if(b%2==0)
   {
       printf("%d\n",b/2);
   }
   else
   printf("%d\n",b);
   return 0;
}
