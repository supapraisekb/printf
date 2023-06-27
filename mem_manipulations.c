#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

/**
* assign_char - assigns characters to buffer, with overflows
* @temp_str: string to allocate into buffer
* @temp_len: holds the length of temp
* @buff: buffer of the char array
* @size: total size of the buff
* @char_sum: pointer to total character recorder
* Return: buffer length
*/

int assign_char(char *temp_str, int temp_len,
char *buff, int size, double *char_sum)
{
int i;

for (i = 0; i < temp_len; i++)
{
if (size >= BUFSIZE)
{
/*if the buffer is full print out the contents*/
int j;

for (j = 0; j < size; j++)
_putchar(buff[j]);
*char_sum += size;

/* Reset buffer size*/
size = 0;
}

/*Copy the character to the buffer*/
buff[size++] = temp_str[i];
}

return (size);
}

/**
* _memcpy - copies memory area
* @dest: destination memory area
* @src: source memory area
* @num: number of bytes to copy
* @buff_len: current number of bytes taken by buffer
* Return: pointer to destination memory area
*/

char *_memcpy(char *dest, char *src, unsigned
int num, unsigned int buff_len)
{
unsigned int k;

for (k = 0; k < num; k++)
dest[k + buff_len] = src[k];
return (dest);
}

