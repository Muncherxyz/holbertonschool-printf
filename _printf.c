#include "main.h"
/**
* _printf - function that produces an output based on formatting.
* @format: string that holds what will be printed
* Return: NULL
*/
int _printf(const char *format, ...)
{
va_list args;
int i, charCount = 0;
if (format == NULL)
{
return (-1);
}
va_start(args, format);
for (i = 0; format[i]; i++)
{
if (format[i] == '%')
{
i++;
if (format[i] == '%')
{
_putchar('%');
charCount++;
}
else if (!format[i])
{
va_end(args);
return (-1);
}
else
{
charCount += cti_function(args, format[i]);
}
}
else
{
_putchar(format[i]);
charCount++;
}
}
va_end(args);
return (charCount);
}
/**
* cti_function - conversion type identifier
* @ap: va_list containing args
* @c: char (format i + i)
* Return: 2 (number of characters printed)
*/
int cti_function(va_list ap, char c)
{
int j;
format_t f[] = {
{"c", print_char},
{"s", print_str},
{"d", print_int},
{"i", print_int}
};
for (j = 0; j < 4; j++)
if (*f[j].let == c)
return (f[j].func(ap));
_putchar('%');
_putchar(c);
return (2);
}
