
#include<stdio.h>

int main() {
    int n,rem=0,l=0;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        l++;
        n=n/10;
    }
    printf("%d",l);
    return 0;
}
