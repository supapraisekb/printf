
#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

/**
* _puts - print a buffer
* @buffer: buffer passed
* @size: number of bytes to print
*/

void _puts(char *buffer, int size)
{
write(1, buffer, size);
}

/**
* format_absent - returns a string representing an absent format specifier
* @s: character representing the unmatched specifier
* Return: dynamically allocated string containing the specifier
*/
char *format_absent(char s)
{
char result[3];
char *ptr;
ptr = result;
result[0] = '%';
result[1] = s;
result[2] = '\0';
return (ptr);
}

/**
* _strlen - finds the length of a string
* @s: string to determine the length of
* Return: length of the string
*/
int _strlen(const char *s)
{
int length = 0;

if (s == NULL)
return (0);

while (s[length] != '\0')
{
length++;
}
return (length);
}

/**
*reverse_str - Reverses a string
*@str: the result of the reversal
*@num: the number to be reversed
*Return: The reversed string
*/

char *reverse_str(char *str, int num)
{
char *start_rev = str;
char *end_rev;
char str_hold;

end_rev = str + num - 1;
for (; start_rev < end_rev; start_rev++, end_rev--)
{
str_hold = *end_rev;
*end_rev = *start_rev;
*start_rev = str_hold;
}
return (str);
}
/**
 *conv_to_str - converts a char to string
 *@s: the character
 *Return: the converted string
 */
char *conv_to_str(char s)
{
char str[1];
char *ptr;
ptr = str;
str[0] = s;
return (ptr);
}
