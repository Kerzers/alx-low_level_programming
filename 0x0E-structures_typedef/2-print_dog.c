#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints struct dog
 *@d: variable of type struct dog
 *Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
