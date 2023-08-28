#include "lists.h"

/**
 *sum_listint - sums up the data in a linked list.
 *@head: Pointer to the head of the list.
 *
 *Return: sum of the numbers in the list.
 */

int sum_listint(listint_t *head)
{
listint_t *cursor = head;
size_t sum = 0;

while (cursor != NULL)
{
sum += cursor->n;
cursor = cursor->next;
}
return (sum);
}
