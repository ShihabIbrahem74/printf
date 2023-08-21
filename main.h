#ifndef MAIN_H
#define MAIN_H

/* LIBRARIES */
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct functions  - set of functions and it's specefires
 * @specifier: const char specifier
 * @print_function: fuction name
 * Description: a struct of two members
 */
typedef struct functions
{
	const char *specifier;
	int (*print_function)();
} my_function;

/* FUNCTIONS */
int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);

/* PRINT_FUNCTIONS */
int print_character(va_list arguments);
int print_string(va_list arguments);
int print_percent(void);

#endif
