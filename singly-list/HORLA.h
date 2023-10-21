#ifndef HORLA_H
#define HORLA_H

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int age;
	struct node *next;
};
void insert_begin(struct node **head, int value);
void insert_end(struct node **head, int value);

#endif
