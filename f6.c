#include<stdio.h>
int main()
{
	int a[5] = {10,20,30,40,50};
	int **p = &a;
	int b;
	printf("Address of a is %p\n",p);
	printf("a[0]= %d\n",*p);
	b= *p; // b is assigned with 10 and p gets incremented
	printf("b=%d\n", b);
	p++;
	printf("Address in p is %p\n",p); 
	return 0;
}

