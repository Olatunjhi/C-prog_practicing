#include "HORLA.h"

void insert_begin(struct node **head, int value)
{
	if (*head == NULL)
	{
		return;
	}

	/*creating a new node */
	struct node *newNode;

	/*allocate memory for the new node */
	newNode = malloc(sizeof(struct node));

	if (newNode == NULL)
	{
		return;
	}

	/*assign value to the new node */
	newNode->age = value;

	/*pointing new node to the head i.e first node */
	newNode->next = *head;

	/*assing new node to the head */
	*head = newNode;

	printf("i succed insert new node at the begining\n");

}
