#include "main.h"
/**
 * _printf - produces output at standard output
 * Description: produces output according to a format
 * @format: a character string
 * Return: the number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list arguments;
	int string_counter = 0, printed_counter = 0;

	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]))
	return (-1);
	while (format[string_counter])
	{
		if (format[string_counter] == '%')
		{
			/**
			 * if (_check_strings(format, arguments))
			 * return (-1);
			*/
			string_counter++;
			if (format[string_counter] == 'c')
				printed_counter = print_character(arguments, printed_counter);
			else if (format[string_counter] == 's')
				printed_counter = print_string(arguments, printed_counter);
			else if (format[string_counter] == '%')
				printed_counter = print_percent(printed_counter);
			else if (format[string_counter] == 'd' || format[string_counter] == 'i')
				printed_counter = print_integer(arguments, printed_counter);
			else if (format[string_counter] == 'b')
				printed_counter = print_binary(arguments, printed_counter);
		}
		else
		{
			_putchar(format[string_counter]);
			printed_counter++;
		}
		string_counter++;
	}
	va_end(arguments);
	return (printed_counter);
}
