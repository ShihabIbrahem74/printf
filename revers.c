#include "main.h"
/**
 * rev_string - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @s: adfwfw afgawf wadfa f wfaf wfdaw wd dawd eaegesgegeg
 *
 * Return: Always 0.
 */
char *rev_string(char *c)
{
    int i, len;
    char temp;
    len = _strlen(c);
    
    for (i = 0; i < len / 2; i++)
    {
        temp = c[i];
        c[i] = c[len - i - 1];
        c[len - i - 1] = temp;
    }
    return (c);
    
}
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
        char *string_revers;
        char *string_buffer;

        string_buffer = va_arg(arguments, char *);
        string_revers = rev_string(string_buffer);
        _puts(string_revers);
        printed_counter += _strlen(string_revers);
        return (printed_counter);

}
