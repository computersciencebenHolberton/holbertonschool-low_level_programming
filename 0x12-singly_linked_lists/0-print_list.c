y#include "lists.h"
/**
 * print_list - prints all the elements of list
 * @h: first node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
int i = 0;

while (h != NULL)
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
