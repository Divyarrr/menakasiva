#include<stdio.h>
int main()
{
    char s[100];
    int i,l=0,d=0,j;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        l++;
        if((s[i]>=48)&&(s[i]<=49))
        {
        d++;
        }
        else
        {
            d=0;
            break;
        }
    }
    if(d==l)
    printf("yes");
    else
    printf("no");
    return 0;
}
    
    
