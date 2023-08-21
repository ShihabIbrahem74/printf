#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_int - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @arguments: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @printed_counter: f af f aga dfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * Return: number of words
 */
void print_int(va_list arguments, int printed_counter)
{
	int number_buffer;
	char *string_buffer;

	number_buffer = va_arg(arguments, int);
	string_buffer = malloc(11 * sizeof(char));
	sprintf(string_buffer, "%d", number_buffer);
	_puts(string_buffer);
	printed_counter += _strlen(string_buffer);

	return (printed_counter);
}

