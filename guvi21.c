#include <stdio.h>
int main()
{
	int n,a,d,sum=0,i;
	scanf("%d%d%d",&n,&a,&d);
	for(i=n;i>1;i--)
	{
		sum=sum+(a+(n-1)*d);
		}
		printf("%d",sum);
		return 0;
		}
