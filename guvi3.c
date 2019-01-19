#include <stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if((ch>=48)&&(ch<=57))
	printf("invalid");
	else if((ch=='a')||(ch=='A')||(ch=='e')||(ch=='E')||(ch=='i')||(ch=='I')||(ch=='o')||(ch=='O')||(ch=='u')||(ch=='U'))
	printf("vowel");
	else
	printf("consonant");
	return 0;
	}
