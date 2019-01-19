#include<stdio.h>
int main()
{
	int a,rem=0,sum=0,temp,p=1,l=0,i,temp1;
	scanf("%d",&a);
	temp=a;temp1=a;
	while(a)
	{
	a=a/10;
	l++;
	}
	while(temp)
	{
	    p=1;
	rem=temp%10;
	for(i=0;i<l;i++)
	{
	    p=p*rem;
	}
	sum=sum+p;
	temp=temp/10;
	}
	if(sum==temp1)
	printf("arms");
	else
	printf("not");
	return 0;
}
	
	
