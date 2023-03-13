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
/**
 * print_int - prints integers
 * @ap: va_list that holds all the  arguments from main function
 * Return: number of integers printed
 */
int print_int(va_list ap)
{
	int num = va_arg(ap, int);
	int count = 0;
	int num_copy = num;
	int num_digits = 0;
	int divisor = 1;
	int i;

	if (num == 0)
		return (_putchar('0'));

	if (num < 0)
	{
		count += _putchar('-');
		num = -num;
	}

	while (num_copy != 0)
	{
		num_copy /= 10;
		num_digits++;
	}

	for (i = 1; i < num_digits; i++)
		divisor *= 10;

	while (divisor != 0)
	{
		int digit = num / divisor;

		count += _putchar(digit + '0');
		num %= divisor;
		divisor /= 10;
	}

	return (count);
}
/**
 *
 *
 */
int print_percent(va_list ap)
{
  (void)ap;
  return (_putchar('%'));
}
