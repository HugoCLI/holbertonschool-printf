#include "main.h"

/**
* _print_char - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @arg: va_list parmameter
*/

void _print_char(va_list arg)
{
	_putchar((char) va_arg(arg, int));
}
