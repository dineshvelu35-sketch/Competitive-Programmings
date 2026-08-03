#include<stdio.h>

int main()
{
	char st[100],ch;
	scanf("%[^:]:%c",st,&ch);
	printf("%s %c",st,ch);
	return 0;
}
