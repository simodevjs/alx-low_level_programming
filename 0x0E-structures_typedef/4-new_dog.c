#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 * Return: Pointer to the duplicated string
 */
char *_strdup(char *str)
{
	unsigned int i = 0, len = 0;
	char *new_str;

	if (!str)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	new_str = malloc((len + 1) * sizeof(char));

	if (!new_str)
		return (NULL);

	for (i = 0; str[i]; i++)
		new_str[i] = str[i];

	new_str[i] = '\0';

	return (new_str);
}

/**
 * new_dog - creates a new dog structure.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: pointer to the new dog structure, OR NULL if fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	new_dog->name = _strdup(name);
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = _strdup(owner);
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
