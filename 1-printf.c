#include <stdio.h>
#include <stdarg.h>

typedef struct {
    const char *format;
    va_list args;
    int count;
} printf_data;

typedef int (*printf_handler)(printf_data *);

int print_char(printf_data *data) {
    int ch = va_arg(data->args, int);
    putchar(ch);
    data->count++;
    return 0;
}

int print_string(printf_data *data) {
    char *str = va_arg(data->args, char *);
    int len = 0;
    while (*str != '\0') {
        putchar(*str++);
        len++;
    }
    data->count += len;
    return len;
}

int _printf(const char *format, ...) {
    printf_data data;
    data.format = format;
    va_start(data.args, format);
    data.count = 0;

    while (*data.format != '\0') {
        if (*data.format == '%') {
            data.format++;
            if (*data.format == 'c') {
                print_char(&data);
            } else if (*data.format == 's') {
                print_string(&data);
            } else if (*data.format == '%') {
                putchar('%');
                data.count++;
            }
        } else {
            putchar(*data.format);
            data.count++;
        }
        data.format++;
    }

    va_end(data.args);
    return data.count;
}
