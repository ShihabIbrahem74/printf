#include "main.h"
/**
 * binary_converter - print binary
 * Description: convert unsigned int to binary string
 * @bin_num: number to convert
 * Return: array of characters
 */
char *binary_converter(unsigned int bin_num)
{
char binary_array[2] = {'0', '1'};
static char converted[35];
char *converted_addres;
unsigned int converted_counter = 1;
converted[0] = '\0';
while (bin_num != 0)
{
	converted[converted_counter] = binary_array[bin_num % 2];
	bin_num = bin_num / 2;
	converted_counter++;
}
converted_addres = &converted[converted_counter - 1];
return (converted_addres);
}
