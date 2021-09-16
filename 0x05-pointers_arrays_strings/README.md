Pointers, arrays and strings
============================

General
-------------------

* What are pointers and how to use them
  * The Pointer in C: is a variable that stores address of another variable.
  A pointer can also be used to refer to another pointer function. A pointer
  can be incremented/decremented, i.e, direct address of the memory location.
  Like any variable or constant:
  you must declare a pointer before using it to store any variable address.
  The general form of a pointer variable declaration is − ::
  
  type *var-name;

  Here, *type* is the pointer's base type; it must be a valid C data type
  and var-name is the name of the pointer variable. The asterisk * used to
  declare a pointer is the same asterisk used for multiplication. However,
  in this statement the asterisk is being used to designate a variable as a pointer.
  Take a look at some of the valid pointer declarations − ::

    int    *ip;    /* pointer to an integer */
    double *dp;    /* pointer to a double */
    float  *fp;    /* pointer to a float */
    char   *ch     /* pointer to a character */

  * How to Use Pointers?
  There are a few important operations, which we will do with the help of
  pointers very frequently. (a) We define a pointer variable, (b) assign
  the address of a variable to a pointer and (c) finally access the value
  at the address available in the pointer variable.
    * This is done by using unary operator *
	that returns the value of the variable located at the address specified
	by its operand. The following example makes use of these operations − ::

    #include <stdio.h>

    int main ()
	{

    int  var = 20;   /* actual variable declaration */
    int  *ip;        /* pointer variable declaration */

    ip = &var;  /* store address of var in pointer variable*/

    printf("Address of var variable: %x\n", &var  );

    /* address stored in pointer variable */
    printf("Address stored in ip variable: %x\n", ip );

    /* access the value using the pointer */
    printf("Value of *ip variable: %d\n", *ip );

    return 0;
    }

* What are arrays and how to use them
  * An array is a data structure, which can store a fixed-size collection
  of elements of the same data type.
  * An array is used to store a collection of data, but it is often more
  useful to think of an array as a collection of variables of the same type.

* What are the differences between pointers and arrays
  * Array in C is used to store elements of same types whereas,
  * Pointers are address varibles which stores the address of a variable.

* How to use strings and how to manipulate them
  * In C programming, a string is a sequence of characters terminated with
  a null character \0. For example::

  char c[9] = {'c', ' ', 's', 't', 'r', 'i', 'n', 'g', \0'};

  char c[] = "c string";

  When the compiler encounters a sequence of characters enclosed in the double
  quotation marks, it appends a null character ``\0`` at the end by default.

  * The following declaration and initialization creates a string::

    char c[] = "abcd";

    char c[50] = "abcd";

    char c[] = {'a', 'b', 'c', 'd', '\0'};

    char c[5] = {'a', 'b', 'c', 'd', '\0'};

  * Other functions, such as:
    * strlwr (convert to lower case)
	* strrev (return the string reversed), and
	* strupr (convert to upper case)

	may be popular; however, they are neither specified by the C Standard
	nor the Single Unix Standard. It is also unspecified whether these functions
	return copies of the original strings or convert the strings in place.

* Scope of variables
  * In C every variable defined in scope.
  You can define scope as the section or region of a
  program where a variable has its existence, that
  variable cannot be used or accessed beyond that region.

  Variables declared within a function is different from a
  Variable declared outside of a function.
  The variable can be declared in three places.
  These are::

### Functions
Position | Type
----------- | -------------
**Inside a function or a
block** | Local variables.
**Out of all functions** | Global variables.
**In the function
parameters** | Formal parameters.

Resources
-------------------

- Data Structures:
* https://www.tutorialspoint.com/data_structures_algorithms/data_structures_basics.htm
* https://www.geeksforgeeks.org/data-structures/
* https://www.careerdrill.com/blog/coding-interview/choosing-the-right-data-structure-to-solve-problems/

- Arrays:
* https://www.tutorialspoint.com/cprogramming/c_arrays.htm

- Pointers:
* https://www.tutorialspoint.com/cprogramming/c_pointers.htm

- Strings:
* https://www.w3schools.in/c-tutorial/variable-scope/
* https://www.tutorialspoint.com/cprogramming/c_strings.htm
* https://en.wikibooks.org/wiki/C_Programming/String_manipulation#Syntax
* https://www.programiz.com/c-programming/c-strings

- Memory Layout:
* https://www.w3schools.in/c-tutorial/variable-scope/

Requirements
-------------------
- General:
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options:
    * `-Wall` `-Werror` `-Wextra` `-pedantic` `-std=gnu89`
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl
and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like
  * printf,
  * puts, etc… is forbidden
* You are allowed to use `_putchar`
* You don’t have to push *_putchar.c*, we will use our file.
  If you do it won’t be taken into account
* The prototypes of all your functions including the function *_putchar*
  should be included in your header file called main.h
* Push your header file

<p align="center"> AUTHORS </p>
<p align="center">
    <h2 align="center">Made by Johanne Lopez</h2>
