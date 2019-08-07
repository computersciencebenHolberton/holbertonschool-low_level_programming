#include "lists.h"
/**
 *reverse_listint -list
 *@head:first
 *Return:head
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next;
if (!head)
return (NULL);
while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
return (*head = prev);
}
