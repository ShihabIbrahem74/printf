#include "main.h"
/**
 * reverse_string - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @arguments: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @reverse_string: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef
 *
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
