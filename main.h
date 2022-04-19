#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE
#include<stdarg.h>;/* va_list*/
#include <stdlib.h> /* malloc, free */
#include <unistd.h> /* write */

/* printf functions */
int _printf(const char *format, ...)
char *print_str(va_list list);
char *print_char(va_list list);
char *print_d(va_list list);
char *itob(va_list list);
char *rot13(va_list list);
char *rev_string(va_list list);
char *itoOctal(va_list list);




#endif
