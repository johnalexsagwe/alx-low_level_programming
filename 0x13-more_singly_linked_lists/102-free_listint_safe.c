#include "lists.h"

/**
* free_listp2 - frees a linked list
* @head: head of the list.
*
* Return: no return.
*/
void free_listp2(listint_t **head)
{
listint_t *temp;
listint_t *curr;

if (head != NULL)
{
curr = *head;
while ((temp = curr) != NULL)
{
curr = curr->next;
free(temp);
}
*head = NULL;
}
}

/**
* free_listint_safe - frees a linked list.
* @h: head of a list.
*
* Return: size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
size_t nnodes = 0;
listint_t *curr, *next;

if (h == NULL)
return (0);

curr = *h;
while (curr != NULL)
{
next = curr->next;
free(curr);
curr = next;
nnodes++;
}

*h = NULL;

return (nnodes);
}
