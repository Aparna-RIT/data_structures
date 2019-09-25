#include<stdio.h>
#include<stdlib.h>

int** make2dArray(int rows, int cols)
{
	int **x, i;
	
	/* get memory for row pointers*/
	if(!(x=malloc(rows*sizeof(*x))))
	{
		printf("insufficient memory\n");
		exit(1);
	}
	
	/* get memory for each row*/
	for(i=0;i<rows;i++)
	{
		if(!(x[i]=malloc(cols*sizeof(**x))))
		{
			printf("insufficient memory\n");
			exit(1);
		}
	}
	return x;
}


int main()
{
	int **m1, **m2, i, j, r, c;
	printf("enter the number of rows and columns\n");
	scanf("%d%d",&r, &c);
	m1= make2dArray(r,c);
	m2= make2dArray(r,c);
	printf("memory allocated to both the matrices\n");
	printf("enter the elements of first matrix\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&m1[i][j]);

	printf("enter the elements of second matrix\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&m2[i][j]);	

	printf("Matrix A is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d\t",m1[i][j]);
		printf("\n");
	}

	printf("Matrix B is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d\t",m2[i][j]);
		printf("\n");
	}
	
	printf("the sum is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d\t",m1[i][j]+m2[i][j]);
		printf("\n");
	}
	free(m1);
	free(m2);
	return 0;
}

	
