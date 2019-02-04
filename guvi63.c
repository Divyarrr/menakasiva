#include<stdio.h>
int main()
{
	int a,rem=0,s=0,d=0;
	scanf("%d",&a);
	if(a>=10)
	{
	rem=a%10;
	s=10-rem;
	d=s+a;
	printf("%d",d);
	}
	else 
	{
		s=10-a;
		d=s+a;
		printf("%d",d);
		}
	return 0;
	}
