#include<stdio.h>
int main()
{
	int a=5;
	int *p = &a;
	int b;
	
	printf("Address of a is %p\n",p);
	printf("a= %d\n",*p);
	
	b= *p++;
	printf("b=%d\n", b);
	printf("a= %d\n",a);
	printf("Address in p is %p\n",p);

	p = &a;
	b= *(p++);
	printf("b=%d\n", b);
	printf("a= %d\n",a);
	printf("Address in p is %p\n",p);

	p = &a;
	b= (*p)++;
	printf("b=%d\n", b);
	printf("a= %d\n",a);
	printf("Address in p is %p\n",p);

	p = &a;
	b= ++*p;
	printf("b=%d\n", b);
	printf("a= %d\n",a);
	printf("Address in p is %p\n",p);

	p = &a;
	b= ++(*p);
	printf("b=%d\n", b);
	printf("a= %d\n",a);
	printf("Address in p is %p\n",p);

	p = &a;	
	b= *++p;
	printf("b=%d\n", b);
	printf("a= %d\n",a);
	printf("Address in p is %p\n",p);
	return 0;
}	
