#include "main.h"
/**
 * reverse_string - print a string
 * Description: prints a string in reverse
 * @arguments: a pointer to string
 * @reverse_string: number of printed characters
 * Return: number of words
 */
int reverse_string(va_list arguments, int printed_counter)
{
        char *string_buffer;
        int len;
        string_buffer = va_arg(arguments, char *);
        len = _strlen(string_buffer);
        len--;
        printed_counter+= len;
        while (len != -1)
        {
            _putchar(string_buffer[len]);
            len--;
	}
	return (printed_counter);

}
