#include<stdio.h>

int main() {
   char a[1000];
   int i,d=0,k=0,h=0;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       k++;
   }
   for(i=0;i<k;i++)
   {
       if((a[i]>=48)&&(a[i]<=57))
       {
       printf("%c",a[i]);
       }
   }
   return 0;
}
   
   
