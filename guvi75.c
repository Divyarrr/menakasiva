#include<stdio.h>
int main()
{
	char a[100];
	int i,g=0,d=0;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		g++;
		}
		d=g/2;
		if(g%2!=0)
		{
			for(i=0;i<g;i++)
			{
				if(i==d)
				{
				a[i]='*';
					}
				printf("%c",a[i]);
				}
				}
				else
				{
				for(i=0;i<g;i++)
				{
					if((i>=d-1)&&(i<=d))
					{
						a[i]='*';
						}
						printf("%c",a[i]);
						}
						}
				return 0;
				}
				
