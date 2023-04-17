#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees struct dog
 *@d: variable of type dog_t (struct dog)
 *Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d);
	free(d->owner);
}
