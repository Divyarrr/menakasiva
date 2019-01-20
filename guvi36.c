#include<stdio.h>
int main()
{
    char a[100];
    int i,l=0,h=0;
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>=48)&&(a[i]<=57)||(a[i]>=65)&&(a[i]<=90)||(a[i]>=97)&&(a[i]<=122))
    l++;
    else
    h++;
    }
    printf("%d",h);
    return 0;
}
    
    
