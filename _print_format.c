#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _print_format - prints the given format
 * @format: pointer to the format to be printed
 * @args: The list of the variadic arguments that are given by the user
 *
 * Return: The length of the format
 */
int _print_format(const char *format, va_list args)
{
	int index = 0, str_len = 0;

	while (format && format[index])
	{
		if (format[index] == '%')
		{
			if (format[index + 1] == '\0')
				return (-1);
			index++;
			while (format[index] == ' ')
				index++;
			if (format[index] == '%')
				str_len += _putchar(format[index]);
			if (_validate_char(format[index]) == 0)
				str_len = _print_invalid_spec(format[index - 1], format[index], str_len);
			else
				str_len += _print_spec(format[index], args);
		}
		else
		{
			str_len += _putchar(format[index]);
		}
		index++;

	}
	return (str_len);
}

/**
 * _print_spec - Prints a valid spec_select
 * @format: the specifier to print
 * @args: the unknow parameters passed in by the user
 *
 * Return: The length of the specifier
 */
int _print_spec(char format, va_list args)
{
	int index = 0, len = 0;

	spc_select spec_func[] = {
		{"c", _print_a_char},
		{"s", _print_str},
		{"d", _print_number},
		{"i", _print_number},
		{"b", _print_int_binary},
		{NULL, NULL}
	};

	while (spec_func[index].specifier)
	{
		if (*spec_func[index].specifier == format)
			len = spec_func[index].func_pointer(args);
		index++;
	}
	return (len);
}

/**
 * _validate_char - validate the type
 * @type: character to be compare
 *
 * Return: 1 if the character is equal to a type
 */
int _validate_char(char type)
{
	char types[] = {'c', 's', 'd', 'i', 'b', '%'};
	int index = 0;

	do {
		if (types[index] == type)
			return (1);
		index++;
	} while (types[index]);

	return (0);
}

/**
 * _print_invalid_spec - prints an invalid specifier
 * @prev_format: the previous specifier of actual specifier
 * @format: the specifier to prints
 * @count: The current count before prints invalid specifiers
 * Return: the count
 */
int _print_invalid_spec(char prev_format, char format, int count)
{
	count += _putchar('%');

	if (prev_format == ' ')
	{
		count += _putchar(' ');
		count += _putchar(format);
	}
	else
		count += _putchar(format);
	return (count);
}
