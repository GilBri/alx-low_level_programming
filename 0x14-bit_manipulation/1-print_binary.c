#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int len = sizeof(unsigned long int) * 8 - 1, flag = 0;

	while (len >= 0)
	{
		if ((n >> len) & 1)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || len == 0)
			_putchar('0');

		len--;
	}
}

