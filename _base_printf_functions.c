#include "main.h"

/**
 * b_se - select which base
 * Description: switchs between four specifiers to call function
 * @arguments: a pointer to string
 * @printed_counter: number of printed characters
 * @base_index: Specifier
 * Return: number of printed characters
 */

int b_se(va_list arguments, int printed_counter, char base_index)
{
	switch (base_index)
	{
		case 'u':
		printed_counter += print_unsignedint(arguments, printed_counter);
		break;
	}
	return (printed_counter);
}

/**
 * print_unsignedint - print unsigned integer
 * Description: print unsigned integer
 * @arguments: a pointer to string
 * @printed_counter: number of printed characters
 * Return: number of printed characters
 */

int print_unsignedint(va_list arguments, int printed_counter)
{
	unsigned int number_buffer;
	char *string_buffer;

	number_buffer = va_arg(arguments, int);
	string_buffer = malloc(11 * sizeof(char));
	sprintf(string_buffer, "%d", number_buffer);
	_puts(string_buffer);
	printed_counter += _strlen(string_buffer);

	return (printed_counter);
}
