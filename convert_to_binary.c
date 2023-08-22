#include "main.h"

/**
 * convert_binery - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @dec: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * Return: number of words
 */
int convert_binery(int dec)
{
	int count = 0, mod = 0, ret = 0, result = 1, exponent;

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

