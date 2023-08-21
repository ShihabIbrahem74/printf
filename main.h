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

/* PRINT FUNCTIONS */
int print_character(va_list arguments, int printed_counter);
int print_string(va_list arguments, int printed_counter);
int print_percent(int printed_counter);
int print_integer(va_list arguments, int printed_counter);

#endif
