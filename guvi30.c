#include<stdio.h>
int main()
{
	int a,b,c,d,k,k1;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>c)
	{
	k=a-c;
		k1=b-d;
	printf("%d\t%d",k,k1);
		}
	else
		{
	k=c-a;
			k1=b-d;
			
	printf("%d\t%d",k,k1);
			}
	return 0;
	}
