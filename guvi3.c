#include <stdio.h>
int main()
{
	char ch;
	int f=0;
	scanf("%c",&ch);
 if((ch=='a')||(ch=='A')||(ch=='e')||(ch=='E')||(ch=='i')||(ch=='I')||(ch=='o')||(ch=='O')||(ch=='u')||(ch=='U'))
 {
 f++;
 	}
 	if(f>0)
	printf("vowel");
 	else if((ch>9)&&(ch<65)&&(ch<97))
 	printf("invalid");
	else
	printf("consonant");
	return 0;
	}
