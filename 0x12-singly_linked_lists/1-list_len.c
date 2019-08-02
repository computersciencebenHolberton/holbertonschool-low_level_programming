#include "lists.h"
#include <stdio.h>
/**
 *list_len - size
 *@h:node
 *Return:nodes num
 */
size_t list_len(const list_t *h)
{
int i;
for (i = 0; h; i++, h = h->next)
;
return (i);
}
