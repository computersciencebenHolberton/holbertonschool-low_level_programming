#include <stdio.h>
#include "dog.h"
/**
 *init_dog - value given
 *@d:struck
 *@name:name
 *@age:age
 *@owner:owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
