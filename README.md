This is a group project by

Ifeanyi, Adaeze and Eze, Ihendu Praise.


printf in C language is used to format and output contents to the standard output.
The printf  function can take a single argument. it can also take several aguments and it takes the format

int printf (char *format, arg1, arg2, ...).

The are two types of printf objects:
1. The Ordinary Character: The ordinary character object copies strings of characters to the output stream

2. COnversion Specification objects: These objects are employed to confert and print the arguments  of the printf function. The conversion specifiction object begins with a % sign and ends with a conversion character ( i, d, s, p, o, g, G, x, X, f, etc).
For proper formatting, there are several operations that can be used to specify how the string should appear on the standard output by putting a cahracter between the % and the conversion character we can have the following in ordeer:
* a. minus sign (-): It specifies the left adjustment of the convertes argument
* b. a number: The number denotes the field width of the intended string for formatting
* c. a period (.): It separates the field width from the precision
* d. another number: The precision that specifies the minimum field width

Examples are shown below:


```

#include <stdio.h>
int main()
{
char str[] = "Hello, world";
printf("%s:\n", str);
printf("%5s:\n", str);
printf("%.12s:\n", str);
printf("%-12s:\n", str);
printf("%.20s:\n", str);
printf("%-20s:\n", str);
printf("%20.10s:\n", str);
printf("%-20.10s:\n", str);

return (0);
}

```
the output of this code is as follows:

```

Hello, world:
Hello, world:
Hello, world:
Hello, world:
Hello, world:
Hello, world        :
          Hello, wor:
	  Hello, wor

```

	  THE PROJECT:
This project involves writing our own printf function that can format inputs and pritn out the desired output to the standard out.
The project tasks are as follows:

Task 0:
Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

Task 1:
Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

Task 2:
Handle the following custom conversion specifiers:

b: the unsigned int argument is converted to binary

	COLLABORATION:
Collaboration among the participating group members is key in the project.  Each member is meant tohave near equal effort by a minimum push rate of 60-40 % of the push effort.



