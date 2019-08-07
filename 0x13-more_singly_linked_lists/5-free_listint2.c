#include "lists.h"
/**
 *free_listint2 -list
 *@head:start of list
 *Return:void
 */
void free_listint2(listint_t **head)
{
listint_t *holder;
while (head && *head)
{
holder = *head;
*head = holder->next;
free(holder);
}
}

