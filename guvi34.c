#include<stdio.h>
int main()
{
    char a[100];
    int i,l=1;
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='.')
        l=l+1;
    }
    printf("%d",l);
    return 0;
}
    
    
