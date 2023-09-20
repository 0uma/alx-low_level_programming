#include "main.h"
/**
 * _strncpy - a function that copies strings
 * @dest: 1st parameter
 * @src: 2nd parameter
 * @n: 3rd parameter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
