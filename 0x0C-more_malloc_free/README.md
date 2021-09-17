More malloc, free
===================

# Automatic and dynamic allocation, malloc and free
--------------------------------------------------------

The malloc function is used to allocate a certain amount of memory during
the execution of a program. It will request a block of memory from the
heap. If the request is granted, the operating system will reserve the 
requested amount of memory and malloc will return a pointer to the reserved
space. When the amount of memory is not needed anymore, you must return
it to the operating system by calling the function free.

### Automaic allocation

When you declare variables or when you use strings within double quotes,
the program is taking care of all the memory allocation. You do not have
to think about it.

### Dynamic allocation

#### Malloc

The malloc function allocates a specific number of bytes in memory and
returns a pointer to the allocated memory. This memory will have read and
write permissions.
```
Prototype: void *malloc(size_t size);
```
where void `*` means it is a **pointer** to the type of your choice
and size is the number of bytes your need to allocate

#### Free

When you are using malloc, you have to handle the memory yourself.
This means that:
* You need to keep track of all the addresses of the allocated memory
(in a variable of type pointer)
* You have to deallocate every memory space you previously allocated yourself.
If you do not do this, then your program can run out of memory.
Your operating system could even kill your program while it is running

The free function frees the memory space which have been allocated by a previous call to malloc (or calloc, or realloc).
Prototype: void free(void *ptr);
where ptr is the address of the memory space previously allocated by and returned by a call to malloc

Resources
--------------------------------------------------------

Requirements
-------------------------------------------------------
### General:

* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 20.04 LTS using gcc,
using the options
  * `-Wall` `-Werror` `-Wextra` `-pedantic` `-std=gnu89`
* All your files should end with a new line
* A `README.md` file, at the root of the folder of the project is mandatory
* Your code should use the *Betty style*.
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are
  * `malloc`,
  * `free` and
  * `exit`.
* Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is *forbidden*
* You are allowed to use `_putchar`
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* The prototypes of all your functions and the prototype of the function 
_putchar should be included in your header file called `holberton.h`
* Don’t forget to push your header file

<p align="center"> AUTHOR </p>
<p align="center">
    <h2 align="center">Made by Johanne Lopez</h2>
