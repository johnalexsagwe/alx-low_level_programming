#include "lists.h"
#include "stdio.h"

/**
 * print_list - Prints all the elements of a list_t linked list.
 *
 * @h: Pointer to the head of the linked list.
 *
 * Return: Number of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
