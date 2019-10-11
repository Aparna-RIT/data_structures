#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 5

int front=0;
int rear=0;

int queue[MAX_SIZE];

void addq()
{	
	int n;
	
	if(front == ((rear+1) % MAX_SIZE))
    {
		printf("Queue full...\n");
	}
	else
	{
		rear = (rear+1) % MAX_SIZE;	
		printf("Enter the element to be inserted into the queue\n");
		scanf("%d", &n);
		queue[rear]=n;
	}
}
		
void deleteq()
{
	if(front == rear)
		printf("queue empty...\n");
	else
	{
		front = (front+1) % MAX_SIZE;
		printf("Element removed is %d\n", queue[front]);
	}
}

void display()
{
	int i;
	int start=(front+1)%MAX_SIZE;
	if(front == rear)
		printf("queue empty...\n");
	else
	{
		for(i=start;i != rear;i=(i+1)%MAX_SIZE)
			printf("%d\t",queue[i]);
		printf("%d\n", queue[i]);
	}
}

	
int main()
{
	unsigned int choice;
	while(1)
	{
		printf("1: addQ\n2:deleteQ\n3:displayQ\n4:exit\n");
		scanf("%u", &choice);
		switch(choice)
		{
			case 1: addq();
					break;
			case 2: deleteq();
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


