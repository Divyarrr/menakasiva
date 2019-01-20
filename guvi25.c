#include<stdio.h>
int main()
{
    int a[100],n,i,t=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]>a[j])
        {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    }
    }
    for(i=n/2;i<n/2+1;i++)
    {
        
       printf("%d\n",a[i]);
    }
    return 0;
    
}
