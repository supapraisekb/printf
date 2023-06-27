#include <unistd.h>

/**
  * _putchar - writes the character c to stdout
  * @c: The character to print
  *
  * Return:  1 if successful.
  * On error, -1 if an error is encountered.
  */
int _putchar(char c)

{
	return (write(1, &c, 1));
}
