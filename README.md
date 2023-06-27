#Fiati & Hamza
team project "printf"

1. File: _printf.c
This file contains the implementation of the _printf function, which serves as the entry point for the custom printf implementation. It takes a format string and variable arguments, similar to the standard printf function, and returns the number of characters printed. It iterates over the format string, checking for format specifiers starting with '%' and calling the appropriate function to handle each specifier.

2. File: function.c
This file contains the implementation of the _function function. This function is responsible for selecting the appropriate function based on the format specifier. It uses an array of print_function_t structures to map each specifier to its corresponding print function. If a matching specifier is found, the associated function is called with the variable argument list.



3. File: get_digits.c
This file contains the implementation of the print_decimal function, which handles the printing of decimal digits. It takes a variable argument list and retrieves an integer argument. It then converts the integer into its decimal representation by dividing it by powers of 10 and extracting the digits one by one. The digits are printed using the _putchar function, and the count of characters printed is returned.

4. File: get_string.c
This file contains the implementation of the print_strings function, which handles the printing of strings. It takes a variable argument list and retrieves a string argument. If the string is NULL, it is set to "(null)". The function then iterates over each character in the string and prints it using the _putchar function. The count of characters printed is returned.
