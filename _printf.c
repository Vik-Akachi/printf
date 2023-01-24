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
	int i, j;
	int char_count = 0;
	va_list args;
	char *str = NULL;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				i += 2;
			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(args, char *);

				for (j = 0; str[j] != '\0'; j++)
				{
					_putchar(str[j]);
				}
				i += 2;
			}
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				i += 2;
			}
		}
		_putchar(format[i]);
		char_count++;
	}
	va_end(args);

	return (char_count);
}
