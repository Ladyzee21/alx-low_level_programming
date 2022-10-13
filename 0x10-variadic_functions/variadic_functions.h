#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * struct printer - A new struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 *a  data type corresponding to symbol.
 */
typedef struct printer
{
	        char *symbol;
	        void (*print)(va_list arg);
}printer_t;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);void print_strings(const char *separator, const unsigned int n, ...);void print_all(const char * const format, ...);


void t_char(va_list va);
void t_integer(va_list va);
void t_float(va_list va);
void t_string(va_list va);
#endif /* VARIADIC_FUNCTIONS_H */
