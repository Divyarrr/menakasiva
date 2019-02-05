#include<stdio.h>

int main() {
   char S[100];
   int i,l=0,k=0,j;
       scanf("%s",S);
   for(i=0;S[i]!='\0';i++)
   {
       l++;
   }
   if(l%2==0)
   {
       for(i=0;i<l;i++)
       {
         for(j=l-1;j>=0;j--)  
         {
             if(S[i]==S[j])
             k++;
         }
       }
   }
   if(k>0)
   printf("yes");
   else
   printf("no");
   return 0;
}
   
