#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints struct dog
 *@d: variable of type struct dog
 *Return: nothing
 */
void print_dog(struct dog *d)
{
	char s[] = "(nil)";

	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : s);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : s);
	}
}
