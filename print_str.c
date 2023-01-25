#include "main.h"

/**
 * print_str - A function that print a string to stdout
 * @s: pointer to the string
 * Return: count
 */
int print_str(char *s)
{
	int index, count = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		_putchar(s[index]);
		count++;
	}

	return (count);
}
