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
	if (!string_buffer)
	string_buffer = "(null)";
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

/**
 * print_unknown - print unknown specifier
 * Description: if an unknown specifier comes after % it will print it
 * @a: to print %
 * @b: to print unknown specifier
 * @printed_counter: number of printed characters
 * Return: number of printed characters
*/
int print_unknown(char a, char b, int printed_counter)
{
	_putchar(a);
	_putchar(b);
	printed_counter += 2;
	return (printed_counter);
}

/**
 * print_integer - print integer
 * Description: print an integer and send number of bytes written
 * @arguments: a pointer to string
 * @printed_counter: number of printed characters
 * Return: number of printed integer
 */
int print_integer(va_list arguments, int printed_counter)
{
	int number_buffer;
	char *string_buffer;

	number_buffer = va_arg(arguments, int);
	string_buffer = malloc(11 * sizeof(char));
	if (string_buffer)
	{
	sprintf(string_buffer, "%d", number_buffer);
	_puts(string_buffer);
	printed_counter += _strlen(string_buffer);
	}
	free(string_buffer);
	return (printed_counter);
}
