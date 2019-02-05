#include<stdio.h>

int main() {
   char a[1000];
   int i,d[100],k=0,h=0,j,temp=0;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       k++;
   }
   for(i=0;i<k;i++)
   {
       d[h]=a[i];
       h++;
       }
       for(i=0;i<h;i++)
       {
           for(j=i+1;j<h;j++)
           {
           if(a[i]>a[j])
           {
           temp=a[j];
           a[j]=a[i];
           a[i]=temp;
           }
       }}
       puts(a);
   return 0;
}
   
   
