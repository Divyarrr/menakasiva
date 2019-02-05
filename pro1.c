#include<stdio.h>

int main() {
   char a[100],b[200],c[100],d[100];
   int i,m,f=0,j,k,h=0;
   scanf("%d",&m);
   scanf("%s%s%s",a,b,c);
   for(i=0;i<m;i++)
   {
       if(a[i]==b[i])
       {
       d[h]=a[i];
       h++;
       }
   }
   for(i=0;i<h;i++)
   {
       if(d[i]==c[i])
       {
           printf("%c",d[i]);
       }
   }
   return 0;
}
   
   
