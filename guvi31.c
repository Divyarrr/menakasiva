#include<stdio.h>

int main() {
   char a[100];
   int i,l=0;
   scanf("%[^\n]s",&a);
   for(i=0;a[i]!='\0';i++)
   if((a[i]>=65)&&(a[i]<=91)||(a[i]>=97)&&(a[i]<=122))
       l++;
   printf("%d",l);
   return 0;
}
