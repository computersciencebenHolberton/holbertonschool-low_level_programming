#include "lists.h"
#include <stdio.h>
/**
 *print_listint - list elements
 *@h:type
 *Return: Number nodes
 */
size_t print_listint(const listint_t *h)
{
int m;
for (m = 0; h != NULL; m++)
{
printf("%d\n", h->n);
h = h->next;
}
return (m);
}
