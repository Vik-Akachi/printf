#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _print_a_char - print out a character to the stdout
 * @args: a list of variadic arguments
 * Return: 1 on success
 */
int _print_a_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * _print_str - print a string to stdout
 * @args: a list of variadic arguments
 * Return: the length of the string
 */
int _print_str(va_list args)
{
	int len = 0;
	char *str = va_arg(args, char *);

	if (args != NULL)
	{
		while (*str)
		{
			_putchar(*str);
			str++;
			len++;
		}
		return (len);
	}
	_putchar('(');
	_putchar('n');
	_putchar('i');
	_putchar('l');
	_putchar('l');
	_putchar(')');
	return (6);
}

/**
 * _print_number - print an integer to the output
 * @args: a list of variadic arguments
 * Return: The length of the data that replace the specifier
 */
int _print_number(va_list args)
{
	unsigned int n = 0;
	int count = 1, m = 0;

	m = va_arg(args, int);
	m = n;

	if (m < 0)
	{
		_putchar('-');
		m = -1 * m;
		n = m;
		count++;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	_recursion_integer(m);
	return (count);
}

/**
 * _putchar - print a character to the stdout
 * @c: a list of variadic arguments to print from
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _recursion_integer - Prints a integer
 * @a: integer to print
 */
void _recursion_integer(int a)
{
	unsigned int t;

	t = a;
	if (t / 10)
		_recursion_integer(t / 10);
	_putchar(t % 10 + '0');
}
