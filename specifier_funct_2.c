#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
* address_spec - format specifier for address
* @s: a variable
* Return: the address of the variable
*/

char *address_spec(va_list s)
{
unsigned int input_number = va_arg(s, unsigned int);
unsigned int count = 0;
unsigned int temp = input_number;
char *address;

while (temp != 0)
{
temp /= 16;
count++;
}

/*Allocate memory for the address string*/
address = malloc((count + 3) * sizeof(char));
if (address == NULL)
return (NULL);

/* Convert the input number to hexadecimal and store it in the address string*/
for (unsigned int i = count - 1; i >= 0; i--)
{
unsigned int digit = (input_number >> (i * 4)) & 0xF;
if (digit < 10)
address[count - i - 1] = digit + '0';
else
address[count - i - 1] = digit + 'a' - 10;
}

/*Add the "0x" prefix to the address string*/
address[count++] = 'x';
address[count++] = '0';
address[count] = '\0';
return (address);
}

/**
* rot13_spec - encrpys strings with rot13 encryptiion
* @s: strings to be encrypted
* Return: encrypted string in rot13
*/

char *rot13_spec(va_list s)
{
char *input_str;
char *result_rot13;
int index = 0;
input_str = va_arg(s, char *);
if (input_str == NULL)
return (NULL);
while (input_str[index] != '\0')
{
if ((input_str[index] >= 'a' &
input_str[index] <= 'z') || (input_str[index]
>= 'A' && input_str[index]) <= 'Z')
{
result_rot13[index] =
((input_str[index] - 'a' + 13) % 26) + 'a';
if (input_str[index] >= 'A' && input_str[index] <= 'Z')

result_rot13[index] -= 'a' - 'A';
}
else
result_rot13[index] = input_str[index];
index++;
}
result_rot13 = '\0';
return (result_rot13);
}

/**
* reverse_spec - format specify to reverse a string
* @s: the string to be reversed
* Return: result of the reversing
*/

char *reverse_spec(va_list s)
{
char *result;
char *input_arg;
int length_of_input;
int index;
input_arg = va_arg(s, char *);
if (input_arg == NULL)
return (NULL);
length_of_input = _strlen(input_arg);
result = malloc((length_of_input + 1 * sizeof(char)));
if (result == NULL)
length_of_input--;

for (index = 0; length_of_input
>= 0; index++, length_of_input--)
result[index] = input_arg[length_of_input];
result[index] = '\0';
return (result);
}
