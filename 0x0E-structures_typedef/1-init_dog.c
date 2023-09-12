#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: A pointer to the struct dog to be initialized
 * @name: The name of dog
 * @age: The age of the dog
 * @owner: The owner name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
