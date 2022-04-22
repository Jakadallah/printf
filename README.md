<<<<<<< HEAD
0-printf.c-Write a function that produces output according to a format.
Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
fprint2.c-Handle the following conversion specifiers:
d
i
3_man_printf.c-Create a man page for your function

This is a team project and is part of the first project that ALX gives in order to test what we have learned so far and How to use git in a team setting
=======
This is a project about printf tasks.This function named "_printf()" imitates the actual "printf()" command located in the stdio.h library of C programming Language. It contains some of the basic features and functions found in the manual 3 of "printf".
>>>>>>> ad46a9b0bcb5e0cf3e9122d10c9cf54d73b461b6

_printf() is a function that performs formatted output conversion and print data. Its prototype is the following:

  int _printf(const char *format, ...) 
Where format contains the string that is printed.

_printf() is a variadic function, it can receives n arguments that replace by n tags written inside the string.

The format tags prototype is the following:

%[flags][length]specifier
If the program runs successfully, the return value is the amount of chars printed.

<<<<<<< HEAD
Authors:
Nashon Otieno Omondi (JAKADALLAH)
Everlyne Angwenyi (Nyeve)

=======
>>>>>>> ad46a9b0bcb5e0cf3e9122d10c9cf54d73b461b6
