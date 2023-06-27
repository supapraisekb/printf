#ifndef MAIN_H
#define MAIN_H
#define BUFSIZE 1024
#include <stdarg.h> /*employed in the va_list*/
#include <stdlib.h> /*handles the malloc and free */
#include <unistd.h> /* used in the write function*/

/* Functions used in the printf */
int _printf(const char *format, ...);
char *(*get_specifier_funct(char s))(va_list);
char *format_absent(char s);

/* functions for string manipulations*/
int _strlen(const char *s);
void _puts(char *buffer, int size);
int _putchar(char c);
char *reverse_str(char *str, int num);
char *conv_to_str(char s);

/*memory manipulation function prototypes*/
char *_memcpy(char *dest, char *src, unsigned int n,
unsigned int buff_len);
int assign_char(char *temp_str, int temp_len,
char *buff, int size, double *char_sum);

/* The format specifier prototypes*/
char *char_spec(va_list c);
char *percent_spec(void);
char *int_spec(va_list num);
char *unsigned_spec(va_list un_signd);
char *string_spec(va_list str);
char *bin_spec(va_list s);
char *octal_spec(va_list s);
char *lower_hex_spec(va_list s);
char *Upper_Hex_spec(va_list s);
char *address_spec(va_list s);
char *rot13_spec(va_list s);
char *reverse_spec(va_list s);

/**
 *struct specifiers - struct that retrieves the fucntions
 *@spec_list: the printf specifiers
 *@spec_func: a pointer to the function that print
 *            according to specified format
 */


typedef struct specifiers
{
char *spec_list;
char *(*spec_func)();
} s_speclist;

#endif /*MAIN_H*/

