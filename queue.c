#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *link;
}queue;

void enque(int data,queue **front_arg,queue **rear_arg);
void deque(queue **front_arg,queue **rear_arg);
void display(queue **front_arg,queue **rear_arg);
void front_ele(queue **front_arg,queue **rear_arg);

int main()
{
	queue *front = NULL,*rear = NULL;
	enque(10,&front,&rear);
	enque(20,&front,&rear);
	display(&front,&rear);
	enque(30,&front,&rear);
	front_ele(&front,&rear);
	deque(&front,&rear);
	display(&front,&rear);
	return 0;
}

void enque(int data,queue **front_arg,queue **rear_arg)
{
	queue *new = NULL;
	new = (queue *)malloc(sizeof(queue));
	if (new == NULL)
	{
		printf("Memory is not allocated\n");
	}else
	{
		new -> data = data;
		new -> link = NULL;
		if (*front_arg == NULL && *rear_arg == NULL)
		{
		*front_arg = new;
		*rear_arg = new;
		}
		else
		{
			(*rear_arg) -> link = new;
			*rear_arg = new;
		}
		printf("The enqued data is : %d \n",(*rear_arg) -> data);
	}
}

void display(queue **front_arg,queue **rear_arg)
{
	queue *temp = *front_arg;
	if (*front_arg == NULL && *rear_arg == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while (temp != NULL)
		{
			printf("%d ",temp -> data);
			temp = temp -> link;
		}
	}
}


void deque(queue **front_arg,queue **rear_arg)
{
	queue *temp = *front_arg;
	if (*front_arg == NULL && *rear_arg == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		printf("The dequed ele is : %d ",(*front_arg) -> data);
		*front_arg = (*front_arg) -> link;
		if (*front_arg == NULL)
		*rear_arg == NULL;
		free(temp);
	}
}
		

void front_ele(queue **front_arg,queue **rear_arg)
{
	if (*front_arg == NULL && *rear_arg == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		printf("The front element is : %d\n",(*front_arg) -> data);
	}
}
