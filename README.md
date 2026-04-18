# _printf

## Description

`_printf` is a custom implementation of the standard C library function `printf`.
It produces formatted output to the standard output stream by parsing a format string and handling a limited set of conversion specifiers.

This project is part of the low-level programming curriculum and focuses on understanding:

* Variadic functions
* Format string parsing
* Modular programming in C

---

## Prototype

```c
int _printf(const char *format, ...);
```

---

## Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* Compilation:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf
```

* All files must end with a new line
* Code must follow Betty style
* No global variables allowed
* No more than 5 functions per file
* All header files must be include guarded

---

## Supported Format Specifiers

| Specifier | Description                     |
| --------- | ------------------------------- |
| `%c`      | Prints a character              |
| `%s`      | Prints a string                 |
| `%%`      | Prints a percent sign           |
| `%d`      | Prints a signed decimal integer |
| `%i`      | Prints an integer               |

---

## Return Value

* Returns the number of characters printed (excluding the null byte)
* Returns `-1` if an error occurs

---

## Usage Example

```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "Basem");
    _printf("Character: %c\n", 'A');
    _printf("Number: %d\n", 12345);
    _printf("Percent sign: %%\n");

    return (0);
}
```

---

## Flow of Execution

1. The function iterates through the format string.
2. If a normal character is found → it is printed directly.
3. If `%` is encountered:

   * The next character is checked.
   * A corresponding helper function is called.
4. The helper function prints the value and returns the count.
5. `_printf` accumulates and returns the total number of printed characters.

---

## Project Structure

```text
.
├── _printf.c
├── handle_specifier.c
├── print_char.c
├── print_string.c
├── print_number.c
├── _putchar.c
├── main.h
└── README.md
```

---

## Functions Description

### `_printf`

Handles the main parsing of the format string and delegates work to helper functions.

### `handle_specifier`

Determines which function to call based on the format specifier.

### `print_char`

Prints a single character.

### `print_string`

Prints a string, handling `NULL` by printing `(null)`.

### `print_number`

Prints integers recursively.

### `_putchar`

Writes a character to standard output using `write`.

---

## Limitations

This implementation does **not** support:

* Flags (`+`, `#`, ` `)
* Field width
* Precision
* Length modifiers (`l`, `h`)
* Floating point numbers

---

## Testing

Example compilation and execution:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf
./printf
```

---

## Author

Basem Tashkandi

---

## Acknowledgements

This project is inspired by the standard C library `printf` function and is intended for educational purposes only.

