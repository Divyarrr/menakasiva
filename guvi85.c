#include<stdio.h>

int main() {
   char S[100],c[100],d[100];
   int i,k=0,j=0;
   scanf("%s",&S);
   for(i=0;S[i]!='\0';i++)
   {
       if(i%2==0)
       {
           c[k]=S[i];
           k++;
       }
       else
       {
           d[j]=S[i];
           j++;
       }
   }
   for(i=0;i<k;i++)
   {
       printf("%c",c[i]);
   }
   printf("\t");
   puts(d);
      return 0;
}
   
