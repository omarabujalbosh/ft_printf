*This project has been created as part of the 42 curriculum by oabu-jal*

# Libft

## Description

### Overview

Libft is a library with a collection of basic functions to handle memory and strings. There are also basic linked-list functions to create and work with linked lists.

### Goal

A library containing the most common functions to make writing code easier for us in the future.

### Library Overview

| **Part**   | **Theme**             | **Count** | **Functions**                                                                                                                                                                                                                                                                                 |
| ---------- | --------------------- | --------: | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Part 1** | Libc functions        |        23 | `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` `ft_strlen` `ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove` `ft_strlcpy` `ft_strlcat` `ft_toupper` `ft_tolower` `ft_strchr` `ft_strrchr` `ft_strncmp` `ft_memchr` `ft_memcmp` `ft_strnstr` `ft_atoi` `ft_calloc` `ft_strdup` |
| **Part 2** | Additional functions  |        11 | `ft_substr` `ft_strjoin` `ft_strtrim` `ft_split` `ft_itoa` `ft_strmapi` `ft_striteri` `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd`                                                                                                                                           |
| **Part 3** | Linked list functions |         9 | `ft_lstnew` `ft_lstadd_front` `ft_lstsize` `ft_lstlast` `ft_lstadd_back` `ft_lstdelone` `ft_lstclear` `ft_lstiter` `ft_lstmap`                                                                                                                                                                |

### Linked List Structure

| **Member** | **Type**   | **Description**                      |
| ---------- | ---------- | ------------------------------------ |
| `content`  | `void *`   | Stores the content of the node.      |
| `next`     | `t_list *` | Points to the next node in the list. |


## Instructions

Clone the repository:

```bash
git clone <repository-url>
```

Navigate to the project root:

```bash
cd libft
```

Compile the library:

```bash
make all
```

After compilation, you will find the `libft.a` archive file in the project root.

To use the library in your own project, copy the following files into your project's directory:

```text
libft.a
libft.h
```

Your Libft library is now ready to use.

## Resources

I relied mainly on the `man` pages and the project documentation to understand the required functions, their expected behavior, and their edge cases.

For AI assistance, I used it to understand some new concepts, such as writing a `Makefile` and creating a `README.md`. I also used AI to explain some difficult or unclear parts of my code and to help me better understand certain concepts when I got stuck.

## Library Functions

| **Function**      | **Description**                                                                             |
| ----------------- | ------------------------------------------------------------------------------------------- |
| `ft_isalpha`      | Checks whether a character is an alphabetic letter.                                         |
| `ft_isdigit`      | Checks whether a character is a digit.                                                      |
| `ft_isalnum`      | Checks whether a character is alphanumeric.                                                 |
| `ft_isascii`      | Checks whether a character belongs to the ASCII character set.                              |
| `ft_isprint`      | Checks whether a character is printable.                                                    |
| `ft_strlen`       | Calculates the length of a string.                                                          |
| `ft_memset`       | Fills a block of memory with a specified byte value.                                        |
| `ft_bzero`        | Sets a block of memory to zero.                                                             |
| `ft_memcpy`       | Copies a specified number of bytes from one memory area to another.                         |
| `ft_memmove`      | Copies a block of memory while safely handling overlapping areas.                           |
| `ft_strlcpy`      | Copies a string into a destination buffer with size protection.                             |
| `ft_strlcat`      | Appends a string to another string with size protection.                                    |
| `ft_toupper`      | Converts a lowercase letter to uppercase.                                                   |
| `ft_tolower`      | Converts an uppercase letter to lowercase.                                                  |
| `ft_strchr`       | Finds the first occurrence of a character in a string.                                      |
| `ft_strrchr`      | Finds the last occurrence of a character in a string.                                       |
| `ft_strncmp`      | Compares two strings up to a specified number of characters.                                |
| `ft_memchr`       | Searches a memory block for the first occurrence of a byte.                                 |
| `ft_memcmp`       | Compares two memory areas byte by byte.                                                     |
| `ft_strnstr`      | Searches for a substring within a string up to a specified length.                          |
| `ft_atoi`         | Converts the initial numeric part of a string into an integer.                              |
| `ft_calloc`       | Allocates memory for an array and initializes it to zero.                                   |
| `ft_strdup`       | Creates a newly allocated copy of a string.                                                 |
| `ft_substr`       | Creates a substring from a string starting at a specified index.                            |
| `ft_strjoin`      | Creates a new string by concatenating two strings.                                          |
| `ft_strtrim`      | Creates a copy of a string with specified characters removed from both ends.                |
| `ft_split`        | Splits a string into an array of substrings using a delimiter character.                    |
| `ft_itoa`         | Converts an integer into a newly allocated string.                                          |
| `ft_strmapi`      | Applies a function to each character of a string and creates a new string from the results. |
| `ft_striteri`     | Applies a function to each character of a string while modifying the original string.       |
| `ft_putchar_fd`   | Writes a character to the specified file descriptor.                                        |
| `ft_putstr_fd`    | Writes a string to the specified file descriptor.                                           |
| `ft_putendl_fd`   | Writes a string followed by a newline to the specified file descriptor.                     |
| `ft_putnbr_fd`    | Writes an integer to the specified file descriptor.                                         |
| `ft_lstnew`       | Creates a new linked-list node with the given content.                                      |
| `ft_lstadd_front` | Adds a node to the beginning of a linked list.                                              |
| `ft_lstsize`      | Counts the number of nodes in a linked list.                                                |
| `ft_lstlast`      | Returns the last node of a linked list.                                                     |
| `ft_lstadd_back`  | Adds a node to the end of a linked list.                                                    |
| `ft_lstdelone`    | Deletes a single node and frees its content using a given function.                         |
| `ft_lstclear`     | Deletes and frees all nodes of a linked list.                                               |
| `ft_lstiter`      | Applies a function to the content of every node in a linked list.                           |
| `ft_lstmap`       | Creates a new linked list by applying a function to each node's content.                    |

