#include "main.h"
/**
 * _putchar - print character
 * Description: print a single character and send number of bytes written
 * @c: a signle char
 * Return: 1 on sucess
*/

int _putchar(char c)
{
	unsigned int i;

	i = write(1, &c, 1);
	return (i);
}

/**
 * _puts - print a complete string
 * Description: it send every char to _putchar to print
 * @str: '*str' is a pointer pointing the first char in the string
 * Return: void
 */

void _puts(char *str)
{
	unsigned int counter_string = 0;

	while (str[counter_string] != 0)
	{
		_putchar(str[counter_string]);
		counter_string++;
	}
}

/**
 * _putchar_new - print character
 * Description: print a single character and send number of bytes written
 * @a: a signle char
 * @printed_counter: number of characters written
 * Return: 1 on sucess
*/

int _putchar_new(char a, int printed_counter)
{
	_putchar(a);
	printed_counter++;
	return (printed_counter);
}
