#include "main.h"
#include <stddef.h>

/**
* get_specifier_funct -checks the specifier type inputed
* @s: type
* Return: a pointer to the function to be called
*/

char *(*get_specifier_funct(char s))(va_list)
{
int index;
s_speclist spec_list[] = {
{"c", char_spec},
{"s", string_spec},
{"%", percent_spec},
{"d", int_spec},
{"i", int_spec},
{"u", unsigned_spec},
{"o", octal_spec},
{"r", reverse_spec},
{"R", rot13_spec},
{"b", bin_spec},
{"x", lower_hex_spec},
{"X", Upper_Hex_spec},
{"p", address_spec},
{NULL, NULL}
};

for (index = 0; spec_list[index].spec_list; index++)
{
if (s == *spec_list[index].spec_list)
return (spec_list[index].spec_func);
}

return (NULL);
}
