#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - return the length of the string.
 * @s: string to scan.
 *
 * Return: Length of string.
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * *_strcpy - copy the sting pointed to by source.
 * including the null terminating byte.
 * @src: sting to be copied.
 * @dest: string to be copied into.
 *
 * Return: pointer to destination dest.
 */
char *_strcpy(char *dest, char *src)
{
	int length, a;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (a = 0; a < length; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}

/**
 * new_dog - Create a new dog
 * @name: name of the new dog.
 * @age: age of new dog.
 * @owner: owner of new dog.
 *
 * Return: pointer to the new dog if Success or NULL otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	(*dog).name = malloc(sizeof(char) * (length1 + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
