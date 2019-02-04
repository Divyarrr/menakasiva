#include<stdio.h>
int main()
{
	char S[100];
	scanf("%s",S);
	int i,f=0,g=0;
	for(i=0;S[i]!='\0';i++)
	{
		f++;
		}
		for(i=0;i<f;i++)
	     {
	     	if((S[i]=='a')||(S[i]=='e')||(S[i]=='i')||(S[i]=='o')||(S[i]=='u'))
	     	{
	     		g++;
	     		}
	     		}
	     		if(g>0)
	     		printf("yes");
	     		else
	     		printf("no");
	     		return 0;
	     		}
	
