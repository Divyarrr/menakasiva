#include<stdio.h>
int main()
{
	int N,L,R,i,h=0	;
	scanf("%d%d%d",&N,&L,&R);
	for(i=L;i<=R;i++)
	{
		if(i==N)
		{
			h++;
			}
			}
			if(h>0)
			printf("yes");
			else
			printf("no");
			return 0;
			}
	
