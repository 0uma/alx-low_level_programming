#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: parameter
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	for (i = 0; i < count - 1; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
