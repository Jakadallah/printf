#include "main.h"
/*
 * ~check_buffer_overflow - if writing over buffer space,
 *
 * print everything then revert length back to 0 to write at buffer start
 *
 * @buffer: buffer holding string to print
 *
 * @len: position in buffer
 *
 * Return: length position
 */
int check_buffer_overflow()
