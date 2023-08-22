#include "main.h"

/**
 * convert_binery - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @dec: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * Return: number of words
 */
unsigned long convert_binery(unsigned int dec)
{
	int count = 0, mod = 0, result = 1, exponent;
	unsigned long ret = 0;
	while (dec > 0)
	{
		mod = dec % 2;
		dec = dec / 2;
		for (exponent = count; exponent > 0; exponent--)
		{
			result = result * 10;
		}
		ret += (mod * result);
		result = 1;
		count++;
		if (dec == 0)
		{
			break;
		}
	}
	return (ret);
}
