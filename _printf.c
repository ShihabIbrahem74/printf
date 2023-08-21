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
	char *string_buffer;
	int string_counter = 0, printed_counter = 0, function_counter = 0;
	my_function my_print[] = {{"c", print_character}, {"s", print_string},
	{"%", print_percent}, {NULL, NULL}};

	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]))
	return (-1);
	while (format[string_counter])
	{
		if (format[string_counter] == '%')
		{
			string_counter++;
			function_counter = 0;
			while (my_print[function_counter].specifier)
			{
				if (format[string_counter] == my_print[function_counter].specifier[0])
					printed_counter += my_print[function_counter].print_function(arguments);
				function_counter++;
			}
			string_counter++;
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
