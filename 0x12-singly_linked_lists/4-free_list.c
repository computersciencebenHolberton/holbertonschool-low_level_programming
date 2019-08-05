#include "lists.h"
#include <stdlib.h>
/**
 *free_list - link
 *@head:start
 *Return:void
 */
void free_list(list_t *head)
{
list_t *tmp;
while (head != 0)
{
tmp = head;
head = head->next;
free(tmp->str);
free(tmp);
}
}
