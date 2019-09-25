#include<stdio.h>
#include<stdlib.h>

#define MAX_TERMS 101
#define MAX_COL 10

typedef struct 
{
	int col;
	int row;
	int val;
} term;

void fastTranspose(term a[], term b[])
{
	int rowTerms[MAX_COL] = {0}, startPos[MAX_COL];
	int i, j, numCols = a[0].col, numTerms = a[0].val;
	b[0].row = a[0].col;
	b[0].col = a[0].row;
	b[0].val = a[0].val;
	if(numTerms > 0)
	{
		for(i=1; i<= numTerms;i++)
			rowTerms[a[i].col]++;
		startPos[0]=1;
		for(i=1; i< numCols;i++)
			startPos[i] = startPos[i-1] + rowTerms[i-1];
		for(i=1;i<= numTerms; i++)
		{
			j=startPos[a[i].col]++;
			b[j].row = a[i].col;
			b[j].col = a[i].row;	
			b[j].val = a[i].val;
		}
	}
}
				

int main()
{
	term a[MAX_TERMS], b[MAX_TERMS];
	int i;
	printf("enter the number of rows & columns\n");
	scanf("%d%d", &a[0].row, &a[0].col);
	printf("How many non zero elements in the matrix?\n");
	scanf("%d", &a[0].val);
	printf("Enter %d triples <row, col, val>\n",a[0].val);
	for(i=1;i <= a[0].val;i++)
		scanf("%d%d%d",&a[i].row, &a[i].col, &a[i].val);
	fastTranspose(a,b);
	printf("Original matrix  \t\tTransposed Matrix\n");	
	for(i=0;i <= a[0].val;i++)
		printf("%2d  %2d  %2d\t\t\t%2d  %2d  %2d\n",a[i].row, a[i].col, a[i].val,b[i].row, b[i].col, b[i].val);
	return 0;
} 

 
	
