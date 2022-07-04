#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int strLen(char *str);
char *strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * strLen - checks the length of a string
 * @str: the string
 * Return: the length of the string
 */
int strLen(char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
/**
 * strcpy - copies a string
 * @dest: the buffer that stores the string copy
 * @src: the source string
 * Return: the pointer to the new string
 */
char *strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the dog's owner
 * Return: the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	unsigned int nameLen, ownerLen;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	nameLen = strLen(name);
	newDog->name = malloc(sizeof(char) * nameLen + 1);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->name = strcpy(newDog->name, name);
	ownerLen = strLen(owner);
	newDog->owner = malloc(sizeof(char) * ownerLen + 1);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	newDog->owner = strcpy(newDog->owner, owner);
	newDog->age = age;
	return (newDog);
}
