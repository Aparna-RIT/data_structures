#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 5

int front=-1;
int rear=-1;

int queue[MAX_SIZE];

void addq()
{	
	int n;
	
	if( (front == rear + 1) || (front == 0 && rear == MAX_SIZE-1))
		printf("queue full\n");
	else
	{
		if(front == -1) front = 0;
		rear = (rear+1) % MAX_SIZE;
		printf("Enter the element to be inserted into the queue\n");
		scanf("%d", &n);
		queue[rear]=n;
	}
}

void deleteq()
{
	if(front == -1)
		printf("queue empty...\n");
	else
	{
		printf("Element removed is %d\n", queue[front]);
		if (front == rear)
		{
            front = -1;
            rear = -1;
        } 
        else 
			front = (front+1) % MAX_SIZE;
		
	}
}

void display()
{
	int i;
	if(rear == -1)
		printf("queue empty...\n");
	else
	{
		for(i=front;i != rear;i=(i+1)%MAX_SIZE)
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


