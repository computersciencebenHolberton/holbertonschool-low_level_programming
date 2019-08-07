#include "lists.h"
#include <stdio.h>
/**
 *print_listint - list elements
 *@h:type
 *Return:Number nodes
 */
size_t print_listint(const listint_t *h)
{
int m;
for (m = 0; h != 0; m++)
{
printf("%d\n", h->m);
h = h->next;
}
return (m);
}
