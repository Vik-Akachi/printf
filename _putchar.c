#include <unistd.h>

/**
 * _putchar - output a character to the standard output
 * @c: parameter to print from
 * Return: a correxponding ascii of the character
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
