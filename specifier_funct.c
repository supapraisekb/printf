#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
* char_spec - the character specifier
* @c: the character
* Return: the converted string
*/

char *char_spec(va_list c)
{
char *str = malloc(2 * sizeof(char));
if (str == NULL)
{

return (NULL);
}
str[0] = (char) va_arg(c, int);
str[1] = '\0';
return (str);
}

/**
* percent_spec - returns the percent sign as a string
* Return: pointer to the percent sign string
*/

char *percent_spec(void)
{
char *str = malloc(2 * sizeof(char));
if (str == NULL)
{
return (NULL);
}
str[0] = '%';
str[1] = '\0';
return (str);
}

/**
* int_spec - converts an integer to a char array
* @num: the integer to be converted
* Return: pointer to string
*/
char *int_spec(va_list num)
{
int x = va_arg(num, int);
int counter = 0;
int abs_x = x < 0 ? -x : x;
int index = 0;
int pwr_10 = 1;
char *str;

if (x < 0)
counter++;

while (abs_x >= 10)
{
pwr_10 *= 10;
abs_x /= 10;
counter++;
}

str = malloc((counter + 1) * sizeof(char));
if (str == NULL)
return (NULL);

if (x < 0)
str[index++] = '-';

while (pwr_10 >= 1)
{
str[index++] = ((x / pwr_10) % 10) + '0';
pwr_10 /= 10;
}

return (str);
}


/**
* unsigned_spec - Converts an unsigned integer to a character array.
* @un_signd: Unsigned integer to convert from va_args.
* Return: Pointer to the resulting string.
*/

char *unsigned_spec(va_list un_signd)
{
unsigned int x = va_arg(un_signd, unsigned int);
unsigned int counter = 0;
unsigned int abs_x = x;
unsigned int index = 0;
unsigned int pwr_10 = 1;
char *str;

while (abs_x >= 10)
{
pwr_10 *= 10;
abs_x /= 10;
counter++;
}

str = malloc((counter + 1) * sizeof(char));
if (str == NULL)
return (NULL);

while (pwr_10 >= 1)
{
str[index++] = ((x / pwr_10) % 10) + '0';
pwr_10 /= 10;
}

return (str);
}

/**
* string_spec - passes a string to print
* @str: string
* Return: "string"
*/

char *string_spec(va_list str)
{
char *string;
string = va_arg(str, char *);
if (string == NULL)
return ("NULL");
return (string);
}


