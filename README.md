*This project has been created as part of the 42 curriculum by oabu-jal.*

---

## Description

The `ft_printf` project is a re-implementation of the standard C library `printf` function. The goal of this project is to build a utility function that makes it easy to format and print output in C.

---

## Instructions

To set up and use this project, follow these simple steps:

1. **Clone the Repository:**
Open your terminal and run the following commands to download the project:
```bash
git clone <repository_url>
cd ft_printf

```


2. **Compile the Library:**
Inside the project directory, run `make` to compile the source code and generate the library archive:


```bash
make

```


3. **Usage:**
Once compilation is complete, copy the generated `libftprintf.a` library file and the `ft_printf.h` header file into your own project directory. You can then link them when compiling your code.



---

## Resources

* Educational video tutorials on YouTube.
* Official C man pages (e.g., `man printf`, `man va_arg`, `man va_start`).

### AI Usage

Artificial intelligence was used for concept explanations and for formatting and structuring this `README.md` file.

---

## Details & Usage

Here is an example of how to use `ft_printf` in your C code:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s, number is %d\n", "World", 42);
    return (0);
}

```

Compile your code with:

```bash
cc main.c libftprintf.a

```
