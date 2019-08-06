#include "lists.h"
/**
 *free_listint -list
 *@head:first
 */
void free_listint(listint_t *head)
{
listint_t *next;
while (head)
{
next = head->next;
free(head);
head = next;
}
}
