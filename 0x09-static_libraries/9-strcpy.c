#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @src: source
 * @dest: destination
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int p = 0;

	while (*(src + p) != '\0')
	{
		*(dest + p) = *(src + p);
		p++;
	}

	*(dest + p) = '\0';
	return (dest);
}
