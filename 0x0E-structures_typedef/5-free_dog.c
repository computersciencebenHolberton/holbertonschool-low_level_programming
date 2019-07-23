#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - struct
 *@d:free
 */
void free_dog(dog_t *d)
{
if (!d)
return;
free(d->name);
free(d->owner);
free(d);
}
