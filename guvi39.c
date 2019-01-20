#include<stdio.h>
int main()
{
    int a[100],n=10,i,t=0,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        if(a[i]<a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    }
        for(i=n-1;i<n;i++)
        {
            printf("%d",a[i]);
        }
        return 0;
    }
    
