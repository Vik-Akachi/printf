#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct specifiers - Struct specifiers
 * @specifier: The conversion specifier
 * @func_pointer: The function pointer
 */
typedef struct specifiers
{
	char *specifier;
	int (*func_pointer)(va_list args);
} spc_select;

int _putchar(char c);
int _printf(const char *format, ...);
int _print_str(va_list args);
int _print_number(va_list args);
int _print_a_char(va_list args);
int _print_invalid_spec(char prev_format, char format, int count);
int _print_int_binary(va_list args);
int _validate_char(char type);
int _print_format(const char *format, va_list args);
int _print_spec(char format, va_list args);
void _recursion_integer(int a);
void _recursion_int_binary(int a);

#endif /* #ifndef MAIN_H */
