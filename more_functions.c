#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _print_int_binary - Prints a int converted to binary
 * @args: A list of variadic arguments
 *
 * Return: The number of printed digits
 */
int _print_int_binary(va_list args)
{
	unsigned int n = 0;
	int num_digit = 0, num = 0;

	num = va_arg(args, int);
	n = num;
	if (num < 0)
	{
		_putchar('1');
		num = num * -1;
		n = num;
		num_digit++;
	}
	while (n > 0)
	{
		n = n / 2;
		num_digit++;
	}
	_recursion_int_binary(num);
	return (num_digit);
}

/**
 * _recursion_int_binary - Prints a binary
 * @a:integer to print
 */
void _recursion_int_binary(int a)
{
	unsigned int t;

	t = a;
	if (t / 2)
		_recursion_int_binary(t / 2);
	_putchar(t % 2 + '0');
}
