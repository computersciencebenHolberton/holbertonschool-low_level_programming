#include "lists.h"
/**
 *print_list - list
 *@h: first
 *Return: nodes
 */
size_t print_list(const list_t *h)
{
int i = 0;

while (h != 0)
{
if (h->str)
printf("[%u] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
i++;
h = h->next;
}
return (i);
}
