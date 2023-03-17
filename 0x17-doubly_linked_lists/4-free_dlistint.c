#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - A function that frees a dlistint_t list
 * @head: list
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *start, *check;

	start = head;
	while (start != NULL)
	{
		check = start->next;
		free(start);
		start = check;
	}
}
