#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 100

int failure[MAX_SIZE];

void fail(char *pat)
{
	int i, j, n = strlen(pat);
	failure[0] = -1;
	for(j=1;j<n;j++)
	{
		i = failure[j-1];
		while((pat[j] != pat[i+1]) && (i >= 0))
			i = failure[i];
		if(pat[j] == pat[i+1])
			failure[j] = i+1;
		else
			failure[j] = -1;
	}
}



int pmatch(char *str, char *pat)
{
	int i=0, j=0;
	int lens = strlen(str);
	int lenp = strlen(pat);
	while( i < lens && j < lenp)
	{
		if(str[i] == pat[j])
		{	
			i++;
			j++;
		}
		else if(j==0)
			i++;
		else 
			j= failure[j-1] + 1;
	}
	return ((j==lenp)? (i-lenp) : -1);
}

int main()
{

	char pat[MAX_SIZE], str[MAX_SIZE];
	int pos;
	printf("Enter a string\n");
	scanf("%s",str);
	printf("Enter the pattern to be searched in input string\n");
	scanf("%s",pat);
	fail(pat);
	pos = pmatch(str, pat);
	if(pos == -1)
		printf("%s not found in %s\n", pat, str);
	else
		printf("%s found in %s at position %d\n", pat, str, pos+1);
	return 0;
}


