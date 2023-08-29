#include "lists.h"

/**
 * print_listint - prints all the elements in a linked list.
 * @h: the head of the list.
 * Return: number of Nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (cursor)
	{
		printf("%d\n", cursor->n);
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
