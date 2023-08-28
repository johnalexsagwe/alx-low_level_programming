#include "lists.h"
/**
  *free_list - frees a listint_t
  *@head: pointer to head of list.
  *
  *Return: 0.
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
