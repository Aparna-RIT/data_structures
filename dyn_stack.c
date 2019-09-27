#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int key;
} element;

element *stack;
int capacity=1;	
int top=-1;

void push()
{
	int n;
	if(top >= capacity-1)
	{
		printf("stack full... adding more space to stack\n");
		stack = (element *)realloc(stack, 2*capacity*sizeof(element));
		capacity *= 2;
	}
	printf("enter an element to be pushed to stack\n");
	scanf("%d", &n);
	stack[++top].key=n;
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
	stack = (element *)malloc(sizeof(element));
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

