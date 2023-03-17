#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node of a list
 * @head: list
 * @index: index of element
 * Return: element by index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c;

	for (c = 0; c < index && head->next; c++)
	{
		head = head->next;
	}
	if (c < index)
		return (NULL);
	return (head);
}
