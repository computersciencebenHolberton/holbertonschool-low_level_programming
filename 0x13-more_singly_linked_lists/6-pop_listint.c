#include "lists.h"
/**
 *pop_listint -it return value
 *@head:first
 *Return:
 */
int pop_listint(listint_t **head)
{
int i;
listint_t *next;
if (!head || !*head)
return (0);
i = (*head)->n;
next = (*head)->next;
free(*head);
*head = next;
return (i);
}
