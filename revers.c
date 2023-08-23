#include "main.h"
/**
 * reverse_string - print a string
 * Description: prints a string in reverse
 * @arguments: a pointer to string
 * @printed_counter: number of printed characters
 * Return: number of words
 */
int reverse_string(va_list arguments, int printed_counter)
{
	char *string_buffer;
	int length;

	string_buffer = va_arg(arguments, char *);
	if (string_buffer != NULL)
	{
		string_buffer = "";
		return (-1);
	}
	length = _strlen(string_buffer);
	length--;
	printed_counter += length;
	while (length != -1)
	{
		_putchar(string_buffer[length]);
		length--;
	}
	return (printed_counter);
}
