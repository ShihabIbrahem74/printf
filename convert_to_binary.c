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
	int count = 0, mod = 0, return_fun = 0;

	while (dec > 0)
	{
		mod = dec % 2;
		dec = dec / 2;
		return_fun += mod * pow(10, count);
		count++;
		if (dec == 0)
		{
			break;
		}
	}
	return (return_fun);
}

