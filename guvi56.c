
#include<stdio.h>

int main() {
  char a[100];
  int i,g=0,l=0;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
      if((a[i]>=48)&&(a[i]<=57))
      l++;
      if((a[i]>='a')&&(a[i]<='z'))
      g++;
  }
  if((g!=0)&&(l!=0))
  printf("yes");
  else
  printf("no");
  return 0;
}
