#include<stdio.h>
#include<stdlib.h>

#define MAX_TERMS 101

typedef struct 
{
	int col;
	int row;
	int val;
} term;

void transpose(term a[], term b[])
{
	int n,i,j,cur_b;
	n=a[0].val;
	b[0].row = a[0].col;
	b[0].col = a[0].row;
	b[0].val = a[0].val;
	if(n>0)
	{
		cur_b = 1;
		for(i=0; i< a[0].col; i++)
			for(j=1; j<=n ; j++)
				if(a[j].col == i)
				{
					b[cur_b].row = a[j].col;
					b[cur_b].col = a[j].row;
					b[cur_b].val = a[j].val;
					cur_b++;
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
	transpose(a,b);
	printf("Original matrix  \t\tTransposed Matrix\n");	
	for(i=0;i <= a[0].val;i++)
		printf("%d  %d  %d\t\t\t%d  %d  %d\n",a[i].row, a[i].col, a[i].val,b[i].row, b[i].col, b[i].val);
	return 0;
} 

 
	
