#include "lists.h"

/**
* get_dnodeint_at_index - Gets the nth node of a dlistint_t linked list.
* @head: The head of the dlistint_t list.
* @index: The index of the node to retrieve.
*
* Return: If the node does not exist - NULL.
*         Otherwise - the address of the located node.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
while (head && index > 0)
{
head = head->next;
index--;
}

return head;
}
