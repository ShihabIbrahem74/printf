#include "main.h"

/**
 * print_binary - print binary
 * Description: handle the custom specifer p
 * @arguments: a pointer to string
 * @printed_counter: number of printed characters
 * Return: number of printed characters
 */

int print_binary(va_list arguments, int printed_counter)
{
	unsigned long converted, number_buffer;
	char *string_buffer;

	number_buffer = va_arg(arguments, int);
	converted = convert_binery(number_buffer);
	string_buffer = malloc(11 * sizeof(char));
	sprintf(string_buffer, "%d", converted);
	_puts(string_buffer);
	printed_counter += _strlen(string_buffer);

	return (printed_counter);
}
