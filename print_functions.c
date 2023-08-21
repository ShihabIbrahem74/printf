#include "main.h"
/**
 * print_character - print character
 * Description: print a single character and send number of bytes written
 * @arguments: a signle char
 * Return: 1 on sucess
*/
int print_character(va_list arguments)
{
	_putchar(va_arg(arguments, int));
	return (1);
}

/**
 * print_string - print character
 * Description: print a string and send number of bytes written
 * @arguments: a pointer to string
 * Return: strlen on sucess
*/
int print_string(va_list arguments)
{
	char *string_buffer;

	string_buffer = va_arg(arguments, char *);
	_puts(string_buffer);
	return (_strlen(string_buffer));
}

/**
 * print_percent - print character
 * Description: print a percent mark
 * Return: 1 on sucess
*/
int print_percent(void)
{
	_putchar('%');
	return (1);

}
