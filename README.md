# _printf

## Description

A simplified implementation of the C `printf` function.
It handles basic format specifiers and prints output to the standard output.

---

## Prototype

```c
int _printf(const char *format, ...);
```

---

## Supported Specifiers

* `%c` → character
* `%s` → string
* `%%` → percent sign
* `%d`, `%i` → integers

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf
```

---

## Authors

* Basem Tashkandi
* Razan Kashr

