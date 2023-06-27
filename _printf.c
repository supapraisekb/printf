#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdalign.h>

/**
* _printf - Custom function that formats and prints to std out
* @format: A directive that formats a string
* Return: The characters printed
*/

int _printf(const char *format, ...)
{
va_list list_of_args;
int index, buffer_index = 0;

double buffer_size_sum = 0;
char *temp;
char buff[BUFSIZE];
double *char_sum;
char *(*get_specifier)(va_list) = NULL;

if (format == NULL)
return (-1);
va_start(list_of_args, format);
char_sum = &buffer_size_sum;
for (index = 0; index < BUFSIZE; index++)
buff[index] = 0;

for (index = 0; format && format[index]; index++)
{
if (format[index] == '%')
{
index++;
get_specifier = get_specifier_funct(format[index]);
temp = (get_specifier) ? get_specifier
(list_of_args) : format_absent(format[index]);

if (temp)
buffer_index = assign_char(temp, _
strlen(temp), buff, buffer_index, &buffer_size_sum);
}
else
{
temp = conv_to_str(format[index]);
buffer_index = assign_char(temp, 1, buff,
buffer_index, &buffer_size_sum);
}
}
_puts(buff, buffer_index);
va_end(list_of_args);
return (buffer_size_sum + buffer_index);
}

