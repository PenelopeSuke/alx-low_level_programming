#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, c;
	dog_t *s;

	s = malloc(sizeof(dog_t));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (a = 0; name[a]; a++)
		;
	for (b = 0; owner[b]; b++)
		;
	s->name = malloc(a + 1);
	s->owner = malloc(b + 1);

	if (s->name == NULL || s->owner == NULL)
	{
		free(s->name), free(s->owner), free(s);
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		s->name[c] = name[c];
	}
	s->name[c] = '\0';
	for (c = 0; c < b; c++)
	{
		s->owner[c] = owner[c];
	}
	s->owner[c] = '\0';
	s->age = age;
	return (s);
}
