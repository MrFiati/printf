#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

#define BUFSIZE 1024

int print_number(int n);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
