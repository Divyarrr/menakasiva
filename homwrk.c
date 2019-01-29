#include<stdio.h>

int main() {
   int n,i,j,sum=0,h=800,c[10000],k=0,rem=0,s=0;
  int g[100000],l=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       sum=sum+2;
       c[0]=0;
       k++;
       c[k]=sum;
   }
   for(i=0;i<k;i++)
   {
       h=h+c[i];
       if(h<=n)
       {
           g[l]=h;
           l++;
       }
   }
      for(i=0;i<l;i++)
      {
          while(g[i])
          {
          rem=g[i]%10;
          s=s+rem;
         g[i]=g[i]/10;
      }
      printf("%d\n",s);
      s=0;
      }
   
   return 0;
}
      
