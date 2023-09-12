#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - calculated the length of a string
 * @str: Length of string to be calculated
 * Return: length
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * _strcpy - function that copies from source to destination
 * @src: source string
 * @dest: destination string
 * Return: a pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: a pointer to the dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	if (!ptr)
	{
		return (NULL);
	}

	ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (!ptr->name)
	{
		free(ptr);
		return (NULL);
	}
	ptr->name = _strcpy(ptr->name, name);

	ptr->age = age;

	ptr = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (!ptr->owner)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	ptr->owner = _strcpy(ptr->owner, owner);

	return (ptr);
}
