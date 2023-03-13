#include "main.h"
/**
 * print_char - a function that prints characters
 * @ap: va_list it holds all  arguments from the  main function
 * Return: number of characters printed
 */
int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
/**
 * print_str - prints the strings
 * @ap: va_list that holds all the arguments from main function
 * Return: number of characters printed
 */
int print_str(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i;

	if (str == NULL)
	{
		i = 6;
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
	}
	else
	{
		for (i = 0; str[i]; i++)
			_putchar(str[i]);
	}
	return (i);
}
