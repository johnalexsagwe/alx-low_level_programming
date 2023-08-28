#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the head of listint_t list.
 * @idx: THe index where the new node should be added - indices start at 0.
 * @n; The integer for the new node to contaion.
 *
 * Return: If the function fails - NULL.
 * otherwise - the adress of the new  node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	unsigned int node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return NULL;
	new_node->n = n;

	
	if (idx == 0)
	{
		new_node->next = current;
		*head = new_node;
		return new_node;
	}

	for (node = 0; node < idx - 1; node++)
	{
		if (current == NULL)
		{
			free(new_node);
			return NULL;
		}

		current = current->next;
	}

	new_node->next = current->next;
	current->next = new_node;

	return new_node;
}
