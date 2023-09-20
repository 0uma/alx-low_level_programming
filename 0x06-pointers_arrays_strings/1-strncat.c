#include "main.h"
/**
 * _strncat - a function that combine two strings
 * @dest: 1st parameter
 * @src: 2nd parameter
 * @n: 3rd parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
