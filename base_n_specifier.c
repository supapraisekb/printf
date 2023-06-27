#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
* bin_spec - the binary specifier
* @s: string to be formatted
* Return: the binary output
*/

char *bin_spec(va_list s)
{
int index, bin_int[32];
char *bin_str;
int arg_var;

arg_var = va_arg(s, int);
if (arg_var == 0)
{
bin_str = malloc(2 * sizeof(char));
if (!bin_str)
return (NULL);
bin_str[0] = '0';
bin_str[1] = '\0';
return (bin_str);
}

for (index = 0; arg_var > 0; index++, arg_var >>= 1)
bin_int[index] = arg_var & 1;
bin_str = malloc((index + 1) * sizeof(char));
if (!bin_str)
return (NULL);

for (index -= 1; index >= 0; index--)
bin_str[index] = bin_int[index] + '0';
bin_str[index] = '\0';
return (bin_str);
}

/**
* octal_spec - used for decimal to octal conversion
* @s: decimal input
* Return: pointer to octal string
*/

char *octal_spec(va_list s)
{
unsigned long int oct_input = va_arg(s, unsigned long int);
unsigned long int num_oct_index = 1;
unsigned long int decimal_holder = 0;
unsigned long int index = 0;

while (oct_input)
{
decimal_holder += (oct_input % 8) * num_oct_index;
oct_input /= 8;
num_oct_index *= 10;
index++;
}

char *str = malloc((index + 1) * sizeof(char));
if (str == NULL)
return (NULL);

for (unsigned long int i = 0; i < index; i++)
{
str[i] = (decimal_holder / num_oct_index) % 10 + '0';
num_oct_index /= 10;
}

str[index] = '\0';
return (str);
}

/**
* lower_hex_spec - converts a number to hexadecimal in lower case
* @s: the number
* Return: the converted number in lower case
*/

char *lower_hex_spec(va_list s)
{
unsigned int input_number = va_arg(s, unsigned int);
unsigned int count = 0;
unsigned int temp = input_number;
char *lower_hex;

do {
temp /= 16;
count++;
} while (temp != 0);

lower_hex = malloc((count + 1) * sizeof(char));
if (lower_hex == NULL)
return (NULL);

for (unsigned int index = count - 1; index > 0; index--)
{
temp = input_number % 16;
if (temp < 10)
lower_hex[index] = temp + '0';
else
lower_hex[index] = temp + 'a' - 10;

input_number /= 16;
}

lower_hex[count] = '\0';

return (lower_hex);
}

/**
* Upper_Hex_spec - converts a number to hexadecimal in upper case
* @s: the number
* Return: the converted number in upper case
*/

char *Upper_Hex_spec(va_list s)
{
unsigned int input_number = va_arg(s, unsigned int);
unsigned int count = 0;
unsigned int temp = input_number;
char *upper_hex;

do {
temp /= 16;
count++;
} while (temp != 0);
upper_hex = malloc((count + 1) * sizeof(char));
if (upper_hex == NULL)
return (NULL);

for (unsigned int index = count - 1; index > 0; index--)
{
temp = input_number % 16;
if (temp < 10)
upper_hex[index] = temp + '0';
else
upper_hex[index] = temp + 'A' - 10;

input_number /= 16;
}

upper_hex[count] = '\0';
return (upper_hex);
}
