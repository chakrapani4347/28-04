#include<stdio.h>
#include<stdlib.h>
struct Slist
{
	int data;
	struct Slist *link;
};
#define size 3

void create_ll(int data,struct Slist **head)
{
	struct Slist *new = NULL;
	new = (struct Slist*)malloc(sizeof(struct Slist));
	if (new == NULL)
	{
		printf("Memory is not allocated\n");
	}
	else
	{
		new ->  data = data;
		new -> link = NULL;
		if (*head == NULL)
		{
			*head = new;
		}
		else
		{
			struct Slist *temp = *head;
			while (temp -> link != NULL)
			{
				temp = temp -> link;
			}
			temp -> link = new;
		}
	}
}
void display(struct Slist **head)
{
	struct Slist *temp = *head;
	while (temp != NULL)
	{
		printf("%d ",temp -> data);
		temp = temp -> link;
	}
}

int main()
{
	struct Slist *head = NULL;
	int i = 0,data;
	while (i ++ < size)
	{
		printf("Enter data :");
		scanf("%d",&data);
		create_ll(data,&head);
	}
	display(&head);
	return 0;
}
		
