#include<stdio.h>

int main() {
   char a[100],i,f=0;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       if(((a[i]>=48)&&(a[i]<=57))||(a[i]=='.'))
       {
           f++;
       }
       else
       {
           f=0;
           break;
       }
   }
   if(f!=0)
   printf("numeric");
   else
   printf("not");
   return 0;
}
