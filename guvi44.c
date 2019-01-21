#include<stdio.h>

int main() {
   int a,f=0,i;
   scanf("%d",&a);
   for(i=0;i<=10;i++)
   {
       if(a==i)
       {
       f++;
       break;
       }
       else
       f=0;
   }
   if(f>0)
   printf("present");
   else
   printf("not");
   return 0;
}
