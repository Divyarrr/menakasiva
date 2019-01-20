#include<stdio.h>
int main()
{
	int a,temp=0,temp1=0;
	scanf("%d",&a);
	temp=a;
	temp1=a;
	if(a<60)
	{
		printf("0 %d",a);
		}
	else if(a>60)
		{
			temp=temp/60;
			printf("%d\t",temp);
			temp1=temp1%60;
			printf("%d",temp1);
			}
			return 0;
			}
			
			
			
			
