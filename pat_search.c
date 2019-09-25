#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 100

int nfind(char *str, char *pat)
{
	int i,j, start=0;
	int lasts = strlen(str)-1;
	int lastp = strlen(pat)-1;
	int endmatch = lastp;
	for(i=0; endmatch <= lasts; endmatch++, start++)
	{
		if(str[endmatch] == pat[lastp])
			for(j=0, i = start; j<lastp && str[i] == pat[j]; i++,j++);
		if(j==lastp)
			return start;
	}
	return -1;
}

int main()
{

	char pat[MAX_SIZE], str[MAX_SIZE];
	int pos;
	printf("Enter a string\n");
	scanf("%s",str);
	printf("Enter the pattern to be searched in input string\n");
	scanf("%s",pat);
	pos = nfind(str, pat);
	if(pos == -1)
		printf("%s not found in %s\n", pat, str);
	else
		printf("%s found in %s at position %d\n", pat, str, pos+1);
	return 0;
}


