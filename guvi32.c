#include<stdio.h>

int main() {
   char a[100];
   int i,l=0;
   scanf("%[^\n]s",&a);
   for(i=0;a[i]!='\0';i++)
   if(a[i]==' ')
   {
       l++;
   }
   printf("%d",l+1);
   return 0;
}
