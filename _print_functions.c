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
	sprintf(string_buffer, "%d", number_buffer);
	_puts(string_buffer);
	printed_counter += _strlen(string_buffer);

	return (printed_counter);
}
/**
 * print_binary - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @arguments: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @printed_counter: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef
 *
 * Return: number of words
 */
int print_binary(va_list arguments, int printed_counter)
{
	int number_buffer, converted;
	char *string_buffer;

	number_buffer = va_arg(arguments, int);
	converted = convert_binery(number_buffer);
	string_buffer = malloc(11 * sizeof(char));
	sprintf(string_buffer, "%d", converted);
	_puts(string_buffer);
	printed_counter += _strlen(string_buffer);

	return (printed_counter);
}
