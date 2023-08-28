#include "lists.h"

/** Function to delete the head node of a linked list
 * Parameters:
 * head: pointer to the head of the list
 *
 * Return: the data of the deleted head node, or -1 if the list is empty
 */

int pop_listint(listint_t **head)
{
    listint_t *temp;
    int content;
    
    if (*head == NULL) {
        return -1;
    }

    content = (*head)->n;

    temp = *head;

    *head = (*head)->next;

    free(temp);

    return content;
}
