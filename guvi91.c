#include<stdio.h>

int main() {
   int L,B,H,sa=0,vol=0;
   scanf("%d%d%d",&L,&B,&H);
   sa=(2*((L*B)+(B*H)+(H*L)));
   printf("%d\t",sa);
   vol=L*B*H;
   printf("%d\t",vol);
   return 0;
}
