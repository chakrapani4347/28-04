#include<stdio.h>
#include<stdlib.h>
#define size 5

struct Slist
{
	char data;
	struct Slist *link;
};

void (char data,struct Slist **head_arg)
{
	struct Slist *new = (struct Slist*)malloc(sizeof(Slist));
	if (new == NULL)
	{
		printf("memory is not allocated \n");
	}
	else
	{
		new -> data = data;
		new -> link = NULL;
		if (*head_arg == NULL)
		{
			*haed_arg = new;
			new -> link = *head_arg;

		}
		else
		{
			struct Slist *temp = *head_arg;
			while (temp -> link != *head_arg)
			{
				temp = temp -> link;
			}
			temp -> link = new;
			new -> link = *head_arg;
		}
	}
}

void display(struct Slist **head_arg)
{
	if(*head_arg == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
	struct Slist *temp = *head_arg;
	do
	{
		printf("%c",temp -> data);
		temp = temp -> link;
	}while(temp != *head_arg);
	}
}
int main()
{
	struct Slist *head = NULL;
	char data;
	int i = 0;
	while (i ++ < size)
	{
		printf("Enter character : ");
		scanf("%c",&data);
	//	create_cll(data,&head);
	}
	 display(&head);
	return 0;
}
