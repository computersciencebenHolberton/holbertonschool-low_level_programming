#include "lists.h"
/**
 **add_nodeint -new node
 *@head:pointer
 *@n:const
 * Return:NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = NULL;
new = malloc(sizeof(listint_t));
if (new == NULL && n != 0)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
