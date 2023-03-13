#include "main.h"
/**
* _printf - function that takes in a string [redacted]
*
*/
int _printf(const char *format, ...) {
    va_list args;
    int char_count = 0;
    int i = 0;

    
    if (format == NULL || (format[i] == '%' && !format[i + 1])) {
        return -1;
    }

    
    va_start(args, format);
    
    for (i = 0; format[i]; i++) {
       
        if (format[i] == '%' && (format[i + 1] == 0 || format[i + 1] == '%')) {
            putchar('%');  
            i++;  
            char_count++;
        }
       
        else if (format[i] == '%') {
            
            char_count += cti_function(args, format[i + 1]);
            i++;
        }
       
        else {
            putchar(format[i]);
            char_count++;
        }
    }

   
    va_end(args);

    
    return char_count;
}

/**
* cti_function - conversion type identifier
* 
*/
int cti_function(va_list ap, char c) {
    
    struct {
        char let;         
        int (*func)(va_list);
    } format_specifiers[] = {
        {'c', print_char},
        {'s', print_str},
        {'d', print_int},
        {'i', print_int}
    };
    const int num_format_specifiers = 4;

    int i;
    for (i = 0; i < num_format_specifiers; i++) {
        if (format_specifiers[i].let == c) {
            
            return format_specifiers[i].func(ap);
        }
    }

    
    _putchar('%');
    _putchar(c);
    return 2;
}
