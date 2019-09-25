#include<stdio.h>
main()
{
	char s[5]="hello";
	int j=10;
	char x[]="hello";
	int i;
	fflush(stdin);
	printf("%s\n",s);
	printf("size of x is %u\n", sizeof(x));
	printf("size of s is %u\n", sizeof(s));	
	for(i=0;s[i] != '\0';i++)
		printf("%c",s[i]);
	return 0;
}
