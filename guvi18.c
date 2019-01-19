#include <stdio.h>
int main()
{
	int a,b,l=0,i,j,c=1,temp,rem=0,sum=0,temp1,temp2;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		temp=i; 
		temp1=i;
		temp2=i;
		l=0;
		while(temp2)
		{
			temp2=temp2/10;
			l++;
			}
			while(temp)
			{
				c=1;
				rem=temp%10;
			for(j=0;j<l;j++)
			{
				c=c*rem;
				}
					sum=sum+c;
				temp=temp/10;
					}
					if(sum==temp1)
					printf("%d\n",sum);
						sum=0;
						temp1=0;rem=0;temp2=0;
					temp=0;c=1;
					}
					return 0;
					}
					
				
