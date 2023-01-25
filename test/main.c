#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len =  _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("Length:[%d, %i]\n", len, len2);
	_printf("\n");
	printf("\n");
	_printf("Character:[%c] honest\n", 'H');
	printf("Character:[%c] honest\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	_printf("Character:[%c], [%s], [%%]\n", 'H', "I am Holy");
	printf("Character:[%c], [%s], [%%]\n", 'H', "I am Holy");
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	return (0);
}

