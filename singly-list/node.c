#include "HORLA.h"

struct node
{
	int age;
	struct node *next;
};

int main(void)
{
	struct node *nodeA, *nodeB, *nodeC, *nodeD;
	struct node *head;
	struct node *temp;

	/* allocate memory for the nodes */
	nodeA = malloc(sizeof(struct node));
	nodeB = malloc(sizeof(struct node));
	nodeC = malloc(sizeof(struct node));
	nodeD = malloc(sizeof(struct node));

	/*assing value to the nodes */
	nodeA->age = 50;
	nodeB->age = 40;
	nodeC->age = 30;
	nodeD->age = 10;

	/*assing the address of the nodes */
	nodeA->next = nodeB;
	nodeB->next = nodeC;
	nodeC->next = nodeD;
	nodeD->next = NULL;

	/*creating the head for the nodes */
	head = nodeA;

	/*creating temporal pointer for head */
	temp = head;

	while (temp->next != NULL)
	{
		printf("%d --> ", temp->age);
		temp = temp->next;
	}

	printf("%d --> \n", temp->age);

	return (0);
}
