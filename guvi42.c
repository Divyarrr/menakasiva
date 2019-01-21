#include<stdio.h>

int main() {
   char a[100],b[100];
   int i,l=0,l1=0;
   scanf("%s",&a);
   scanf("%s",&b);
   for(i=0;a[i]!='\0';i++)
      {
        l++;
      }
      for(i=0;b[i]!='\0';i++)
      {
          l1++;
      }
      if(l==l1)
      printf("%s",a);
      else if(l>l1)
      printf("%s",a);
      else if(l1>l)
      printf("%s",b);
      return 0;
}
