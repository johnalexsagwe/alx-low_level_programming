#include "lists.h"

/**
* sum_dlistint - Calculate & returns  sum of all elements in a linked list.
* @head: The passed-in linked list.
* Return: The sum of the entire linked list.
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}

return (sum);
}
