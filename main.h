#ifndef MAIN_H
#define MAIN_H

/* LIBRARIES */
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

/* FUNCTIONS */
int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int _check_strings(const char *chk_format, ...);

/* PRINT FUNCTIONS */
int print_character(va_list arguments, int printed_counter);
int print_string(va_list arguments, int printed_counter);
int print_percent(int printed_counter);
int print_integer(va_list arguments, int printed_counter);
int print_binary(va_list arguments, int printed_counter);

/* CONVERTERS */
char *binary_converter(unsigned int bin_num);

#endif
