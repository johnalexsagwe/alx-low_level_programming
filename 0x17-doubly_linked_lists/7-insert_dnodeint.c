#include "lists.h"

/**
* insert_dnodeint_at_index - Insert node at given position in a list.
* @h: A pointer to the head of the dlistint_t list.
* @idx: The position to insert the new node.
* @n: The integer for the new node to contain.
*
* Return: If the function fails - NULL.
*         Otherwise - the address of the new node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp = *h;
dlistint_t *new;

if (idx == 0)
return (add_dnodeint(h, n));

for (; idx != 1; idx--)
{
tmp = tmp->next;
if (tmp == NULL)
return (NULL);
}

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = tmp;
new->next = tmp->next;

if (tmp->next)
tmp->next->prev = new;

tmp->next = new;

return (new);
}
