#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - creates a new dog
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *Return: pointer to a struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
