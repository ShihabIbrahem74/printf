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
	int string_counter = 0, printed_counter = 0;

	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]))
	return (-1);
	while (format[string_counter])
	{
		if (format[string_counter] == '%')
		{
			string_counter++;
			switch (format[string_counter])
			{
				case 'c':
				_putchar(va_arg(arguments, int));
				printed_counter++;
				break;
				case 's':
				string_buffer = va_arg(arguments, char *);
				_puts(string_buffer);
				printed_counter += _strlen(string_buffer);
				break;
				case '%':
				_putchar('%');
				printed_counter++;
				break;
				case 's':
				number_buffer = va_arg(arguments, int *);
				itoa(number_buffer, string_buffer);
				_puts(string_buffer);
				printed_counter += _strlen(string_buffer);
				break;
				default:
				return (-1);
			}
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
