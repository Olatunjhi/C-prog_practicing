#include "HORLA.h"

void insert_end(struct node **head, int value)
{
	int i;

	if (head == NULL)
	{
		return;
	}
	
	/*declare a new node */
	struct node *newNode;

	/*allocate memory for new node */
	newNode = malloc(sizeof(struct node));

	if (newNode == NULL)
	{
		return;
	}

	/*assign value for the new node */
	newNode->age = value;

	/* create a temporal pointer for the head for traversing */
	struct node *temp;

	temp = *head;

	/* check for the last node */
	for (i = 1; temp->next != NULL; i++)
	{
		temp = temp->next;
	}
	
	/* point new node to the null */
	newNode->next = NULL;

	/* assign previous last value point to newNode */
	temp->next = newNode;

}
