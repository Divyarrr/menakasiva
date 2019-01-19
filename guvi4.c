#include <stdio.h>
int main()
{
	char ch;
	int f=0;
	scanf("%c",&ch);
	if(((ch>65)&&(ch<90))||((ch>97)&&(ch<122)))
	{
		f++;
		}
		if(f>0)
		printf("alphbet");
		else
		printf("not");
		return 0;
		}
