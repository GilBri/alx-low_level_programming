#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bit_count = sizeof(unsigned long int) * 8;

	while (mask << 1)
		mask <<= 1;

	while (bit_count--)
	{
		if (mask & n)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}

