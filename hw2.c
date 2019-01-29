#include<stdio.h>

int main() {
   char a[100],b[100]={'c','o','m'};
   int i,c=0,d=0,g=0,e=0,f=0,h=0,j,k,l,m,n,o;
   scanf("%[^\n]s",a);
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]!=' ')
       {
   for(j=0;a[j]!='\0';j++)
   {
       if(a[j]=='@')
       c++;
       if(a[j]=='.')
       d++;
   }
       }
       else if(a[i]==' ')
       {
       printf("check ur email");
       }
   else 
   {
   if((c==1)&&(d==1)&&(a[i]!=' '))
  {
      for(k=0;a[k]!='@';k++)
      {
          g++;
      }
      for(l=g+1;a[l]!='.';l++)
      {
          e++;
      }
      for(m=0;a[m]!='.';m++)
      {
          f++;
      }
      for(n=f+1;a[n]!='\0';n++)
      {
          for(o=0;b[o]!='\0';o++)
          {
              if(a[n]==b[o])
              h++;
          }
      }
  }
   }
   }
  if((e==5)&&(h==3))
  printf("password");
  else
  printf("invalid id");
  return 0;
}
