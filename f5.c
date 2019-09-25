#include<stdio.h>
int main()
{
	int a[5] = {10,20,30,40,50};
	int *p = a;
	int b;
	printf("Address of a is %p\n",p);
	printf("a[0]= %d\n",*p);
	b= *p++; // b is assigned with 10 and p gets incremented
	printf("b=%d\n", b);
	printf("Address in p is %p\n",p); 

	p = a;
	b= (*p)++; // b is assigned with 10 and p still holds &a[0] and a[0] will be incremented to 11
	printf("b=%d\n", b);
	printf("a[0]= %d\n",a[0]);
	printf("Address in p is %p\n",p);

	p = a;
	b= ++*p; // a[0] will be incremented to 12 and b is assigned with 12 and p still holds &a[0] 
	printf("b=%d\n", b);
	printf("a[0]= %d\n",a[0]);
	printf("Address in p is %p\n",p);
	p = a;
	b= ++(*p); // a[0] will be incremented to 13 and b is assigned with 13 and p still holds &a[0] 
	printf("b=%d\n", b);
	printf("a[0]= %d\n",a[0]);
	printf("Address in p is %p\n",p);

	p = a;
	b= *++p; // a[0] will be incremented to 13 and b is assigned with 13 and p still holds &a[0] 
	printf("b=%d\n", b);
	printf("a[0]= %d\n",a[0]);
	printf("Address in p is %p\n",p);
	return 0;
}	
