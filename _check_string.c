#include "main.h"
#define specifires_num  7
/**
 * _check_strings - calulate the length of string
 * Description: it calulate the string passed to _puts
 * @chk_format: it's a format
 * Return: length of string
 */
int _check_strings(const char *chk_format, ...)
{
	va_list chk_arguments;
	char chk_specifiers[specifires_num] = {'c', 's', '%', 'd', 'i', 'b', 'u'};
	int string_counter = 0, array_counter = 0, flag;

	va_start(chk_arguments, chk_format);
	if (!chk_format || (chk_format[0] == '%' && !chk_format[1]))
	return (-1);
	while (chk_format[string_counter])
	{
		if (chk_format[string_counter] == '%')
		{
			flag = 1;
			string_counter++;
			for (array_counter = 0; array_counter < specifires_num; array_counter++)
			{
				if (chk_format[string_counter] == chk_specifiers[array_counter])
				flag = 0;
			}
			if (flag == 1)
			return (1);
		}
		string_counter++;
	}
	return (0);
}
