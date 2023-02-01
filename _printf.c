#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * _printf - a function that behaves a printf function
 * @format: pointer to the string of the given format: c, s and %
 * Return: the number of character printed
 * write output to stdout, the standard output stream
 */
int _printf(const char *format, ...)
{
	int len = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	len = _print_format(format, args);
	va_end(args);

	return (len);
}
