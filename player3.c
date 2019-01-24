#include<stdio.h>

int main() {
    int n,rem=0,i;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        printf("%d",rem);
        n=n/10;
    }
                                                                                                                                                                                                                                                                                                                      
   return 0;
}
