<h1 align="center">
	🧰 libft
</h1>

<p align="center">
	<b><i>YOUR VERY FIRST OWN LIBRARY</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/drkpulse/libft?color=lightblue" />
	<img src="https://img.shields.io/badge/125%20%2F%20100%20%E2%98%85-success" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/drkpulse/libft?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/drkpulse/libft?color=green" />
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---

## 💡 About the project

> _The aim of this project is to code a C library regrouping usual functions that you'll be allowed to use in all your other projects._

	Programming in C can be very tedious when you don't have access to the very useful standard functions.
	This project gives you the opportunity to rewrite those functions to understand them and learn to use them.
	The library will help you for your future projects in C. Through this project, you have the opportunity
	to extend your list of functions in your own way!

For more detailed information, look at the [**subject of this project**](https://github.com/Drkpulse/libft/blob/main/en.subject.pdf).

## List of functions:

### Functions from `<ctype.h>` library

* [`ft_isascii`](Files/ft_isascii.c)			- test for ASCII character.
* [`ft_isalnum`](Files/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isalpha`](Files/ft_isalpha.c)			- alphabetic character test.
* [`ft_isdigit`](Files/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isprint`](Files/ft_isprint.c)			- printing character test (space character inclusive).
* [`ft_tolower`](Files/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](Files/ft_toupper.c)			- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](Files/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](Files/ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](Files/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](Files/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](Files/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](Files/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](Files/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](Files/ft_memcpy.c)		- copy memory area.

### Functions from `<string.h>` library

* [`ft_strlen`](Files/ft_strlen.c)				- find length of string.
* [`ft_strchr`](Files/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](Files/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strnstr`](Files/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strncmp`](Files/ft_strncmp.c) 			- compare strings (size-bounded).
* [`ft_strdup`](Files/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strlcpy`](Files/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](Files/ft_strlcat.c)			- size-bounded string concatenation.

### Non-standard functions

* [`ft_itoa`](Files/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](Files/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](Files/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](Files/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](Files/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](Files/ft_strmapi.c)			- create new string from modifying string with specified function.
* [`ft_striteri`](Files/ft_striteri.c)			- 
* [`ft_putchar_fd`](Files/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](Files/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](Files/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](Files/ft_putnbr_fd.c)		- output integer to given file.

### Linked list functions (bonus)

* [`ft_lstnew`](Files/ft_lstnew.c)				- create new list.
* [`ft_lstsize`](Files/ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](Files/ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](Files/ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](Files/ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](Files/ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](Files/ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](Files/ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](Files/ft_lstmap.c)				- apply function to content of all list's elements into new list.


## 🛠️ Usage

### Requirements

The library is written in C language and needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, go to its path and run:

For all mandatory functions:

```shell
$ make
```

For bonus functions:

```shell
$ make bonus
```

**2. Cleaning all binary (.o) and executable files (.a)**

To clean all files generated while doing a make, go to the path and run:

```shell
$ make fclean
```

**3. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

## 📋 Testing

You can use any of this third party testers to test the project

* [Francinette](https://github.com/xicodomingues/francinette)
* [Tripouille/libfTester](https://github.com/Tripouille/libftTester)
* [ska42/libft-war-machine](https://github.com/ska42/libft-war-machine)
* [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)
