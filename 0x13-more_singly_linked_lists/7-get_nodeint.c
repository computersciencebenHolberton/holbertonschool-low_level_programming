#include "lists.h"
/**
 *get_nodeint_at_index -node in list
 *@head:points to first 
 *@index:item
 *Return:point to index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
if (index == 0)
return (head);
if (head)
return (get_nodeint_at_index(head->next, index - 1));
return (NULL);
}

