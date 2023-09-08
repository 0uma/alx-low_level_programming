#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			int firstDigit = i;
			int secondDigit = j;

			if (firstDigit > secondDigit)
			{
				int temp = firstDigit;

				firstDigit = secondDigit;
				secondDigit = temp;
			}

			putchar((firstDigit / 10) + '0');
			putchar((firstDigit % 10) + '0');

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
