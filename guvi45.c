#include<stdio.h>

int main() {
   int a,f=0,i;
   scanf("%d",&a);
   while(a)
   {
       a=a/10;
       f++;
   }
   printf("%d",f);
   return 0;
}
