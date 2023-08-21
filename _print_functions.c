#include "main.h"
/**
 * print_character - print character
 * Description: print a single character and send number of bytes written
 * @arguments: a signle char
 * @printed_counter: number of printed characters
 * Return: 1 on sucess
*/
int print_character(va_list arguments, int printed_counter)
{
	_putchar(va_arg(arguments, int));
	printed_counter++;
	return (printed_counter);
}

/**
 * print_string - print character
 * Description: print a string and send number of bytes written
 * @arguments: a pointer to string
 * @printed_counter: number of printed characters
 * Return: strlen on sucess
*/
int print_string(va_list arguments, int printed_counter)
{
	char *string_buffer;

	string_buffer = va_arg(arguments, char *);
	_puts(string_buffer);
	printed_counter += _strlen(string_buffer);
	return (printed_counter);
}

/**
 * print_percent - print character
 * Description: print a percent mark
 * @printed_counter: number of printed characters
 * Return: 1 on sucess
*/
int print_percent(int printed_counter)
{
	_putchar('%');
	printed_counter++;
	return (printed_counter);

}
