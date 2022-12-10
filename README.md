# ft_printf 42-Curses

ft_printf (write recode printf) (No Bonus)

In this project, you will discover a popular and versatile C function: printf().

### .h (Header)
Your header file is useful for 3 things:
- First, instead of doing for example `#include <unistd.h>` in all of your .c files, you just write it once in your header and all of your .c files will read it from
your header file. 
- Secondly, let's say one of your .c files uses another function from another .c file, well instead of writting that function above, just write `#include "ft_printf.h"` 
and it will find it in your header file.
- Thirdly, you can see why and how to use ifndef here.
https://www.tutorialspoint.com/cprogramming/c_header_files.htm

Make sure you add `#include "ft_printf.h"` in all of your .c files.

### Makefile 
Makefile is where you will create a file to compile your projects. Remember how in the piscine, you created an **int main** and **gcc** to compile the projects, 
well with a Makefile, you don't have to do that anymore, you just type `make` once you have created your Makefile.

# ft_printf Functions

### Functions from [`ft_utils.c`](ft_utils.c)

- `ft_putchar`	- output a char to a file descriptor.
- `ft_putstr`	- output a string to a file descriptor.

### Functions from [`ft_printf.c`](ft_printf.c)

- `ft_pointer`  - converts the entered unsgined number to hexadecimal and writes hexadecimal letters in lower case.
- `ft_pointer_upper`	- converts the entered unsigned number to hexadecimal and writes hexadecimal letters in upper case.
- `num`	- prints the entered number to the screen.
- `func`	- used to keep specifiers after '%'
- `ft_printf`	- The ft_printf is a function to send formatted output to the screen. This function use `<stdarg.h>` library.

### resources for `<stdarg.h>` library

- https://www.tutorialspoint.com/c_standard_library/stdarg_h.htm
- https://man7.org/linux/man-pages/man3/stdarg.3.html

## Usage

``make`` without bonus functions.

``gcc (fonction name) libftprintf.a`` you can compile the function like this.``libftprintf.a`` fetches other necessary functions of the function you are running.

## Link To ft_printf Tester
I suggest you to test the functions before posting and in this link it says how to do it:
https://github.com/Tripouille/printfTester
