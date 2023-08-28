#include "lists.h"

/**
 * get_nodeint_at_index - Return the nth node of a linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node required.
 *
 * Return: The address of the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor = NULL;
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			cursor = head;
			break;
		}

		head = head->next;
		i++;
	}

	return cursor;
}

