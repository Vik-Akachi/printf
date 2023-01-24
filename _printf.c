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
	
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				char_count++;
<<<<<<< HEAD
				i += 2;
=======
				i++;
>>>>>>> 9507c78cecfa1c73a0832971c19822eaf7a8944e
			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(args, char *);

				for (j = 0; str[j] != '\0'; j++)
				{
					_putchar(str[j]);
					char_count++;
				}
				i++;
			}
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				char_count++;
<<<<<<< HEAD
				i += 2;
=======
				i++;
>>>>>>> 9507c78cecfa1c73a0832971c19822eaf7a8944e
			}
		}
		_putchar(format[i]);
		char_count++;
	}
	va_end(args);

	return (char_count);
}
