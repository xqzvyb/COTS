#include<stdio.h>

void main()
{
	char name[]="Amgad";
	
	name[5]=='\0'? printf("%c \n", name[5]): printf("No \n");
	fflush(stdout);
	scanf("%s", name);
	printf("%s", name);
}