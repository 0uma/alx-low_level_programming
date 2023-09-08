#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			int firstDigit = i;
			int secondDigit = j;

			if (firstDigit > secondDigit)
			{
				firstDigit = firstDigit ^ secondDigit;
				secondDigit = firstDigit ^ secondDigit;
				firstDigit = firstDigit ^ secondDigit;
			}
			putchar(firstDigit / 10 + '0');
			putchar(firstDigit % 10 + '0');
			putchar(',');
			putchar(' ');
			putchar(secondDigit / 10 + '0');
			putchar(secondDigit % 10 + '0');
			putchar('\n');
		}
	}
	return (0);
}
