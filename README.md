#Fiati & Hamza
team project "printf"

1. File: _printf.c
This file contains the implementation of the _printf function, which serves as the entry point for the custom printf implementation. It takes a format string and variable arguments, similar to the standard printf function, and returns the number of characters printed. It iterates over the format string, checking for format specifiers starting with '%' and calling the appropriate function to handle each specifier.

2. File: function.c
This file contains the implementation of the _function function. This function is responsible for selecting the appropriate function based on the format specifier. It uses an array of print_function_t structures to map each specifier to its corresponding print function. If a matching specifier is found, the associated function is called with the variable argument list.



3.

4.
