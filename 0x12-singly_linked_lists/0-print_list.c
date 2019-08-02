#include <stdio.h>
#include "lists.h"
/**
 *print_list - list
 *@h:first
 *
 *Return:nodes
 */
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
if (h->str)
printf("[%i] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
i++;
h = h->next;
}
return (i);
}
