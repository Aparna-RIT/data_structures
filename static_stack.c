#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 5
typedef struct
{
	int key;
} element;

element stack[MAX_SIZE];
int top=-1;

void push()
{
	int n;
	if(top >= MAX_SIZE-1)
		printf("stack full...\n");
	else
	{	
		printf("enter an element to be pushed to stack\n");
		scanf("%d", &n);
		stack[++top].key=n;
	}
}
void pop()
{
	if(top == -1)
		printf("stack empty\n");
	else
		printf("popped element: %d\n", stack[top--].key);
}

void display()
{
	int i;
	if(top == -1)
		printf("stack empty\n");
	else
	for(i=top;i>=0;i--)
		printf("%d\t",stack[i].key);
	printf("\n");
}
	
int main()
{
	unsigned int choice;
	while(1)
	{
		printf("1: push\n2:pop\n3:display\n4:exit\n");
		scanf("%u", &choice);
		switch(choice)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);
					break;
			default: printf("Invalid choice... try again\n");
		}
	}
	return 0;
}

