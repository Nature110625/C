# Functions
* A function is a self-contained block of statements that perform a coherent task of some kind.
* C program is a collection of one or more functions
* If a C program contains only one functions, it must be `main()`
* If a C program contains more than one function, then one (and only one) of these functions must be `main()`, because program execution always begins with `main()`.
* Each function in a program is called in the sequence specified by the function calls in `main()`
* After each function has done its thing, control returns to `main()`.
* All C functions enjoy a state of perfect equality, except for the fact that execution always begin with `main()` function.
* There are basically two types of functions:
    * Library functions: `printf()`, `scanf()`, etc.
        * These are commonly required functions grouped together and stored in a library file on the disk.
    * User-defined functions: `message()`, etc.
* Don't hesitate to write functions that are called only once. What's important is that these functions perform some logically isolated task.

### function prototype declatation. 
* Example: `int message(int a, int b)`
* `int` indicates that the function is going to return a value of the type `int`.
* It is not compulsory to use variable names in the **prototype declatation**.

### function definition
* A function gets defined when function name is followed by a pair of braces({}) in which one or more statement may be present.
* Example
    ```
    void message(){
    printf("Smile, and the world smiles with you...\n");
    }
    ```
* order in which the functions are defined in a program and the order in which they get called need not necessarily be same.
* A function cannot be defined in another function.
* When closing brace (`}`) of the called function is encountered control return to the calling function.
### calling the function.
* Example: `message()`
* functions which calls is known as  **calling function**
* while the function which is being called becomes **called function**
* a function get called when the function name is followed by a semicolon (;).
* Any function can be called by any other function. Even `main()` is no exception.
* A function can be called any number of times.
* A function can call itself. Such a process is called **'recursion'**.

### Why use functions?
* Writing functions avoids rewriting same code over and over.
* By using functions it becomes easier to write programs and keep track of what they are doing.
## Passing Values between Functions
* **Argument**: Mechanism used to convey information to the function.
    * Arguments are sometimes called **parameters**.
    * Any number of arguments can be passed to a function being called.
    * There are two types of arguments
        * Actual arguments: are the values which is passed to called function.
        * Formal arguments: are the arguments which is declared in called functions.
            * If the value of a formal argument is changed in the called function, the corresponding change does not take place in the calling function.
    * The type, order and number of the actual and formal arguments must always be same.
    * When values are passed to a called function, the values present in actual arguments are not physically moved to the formal arguments; just a photocopy of values in actual argument is made into formal arguments
## Scope rule of functions
* By default the scope of a function is local to the function in which it is defined.

## Order of Passing Arguments
* In C during a function call the arguments are passed from right to left. Thus,
```
int a=1;
printf("%d %d %d\n", a, ++a, a++);
```
will output `3 3 1` and not `1 2 2`.
    * here `printf()` collects all value that is passed from right to left, then prints them in the order in which we have asked it to get them printed ( and not the order in which they were passed).

## Using Library Functions
* Before calling any function, we must declare its prototype. This helps the compiler in checking whether the values being passed and returned are as per the prototype declatation of library functions.
* When the Library of functions is provided, a set of '.h' files is also provided called **header** files.
    * Multiple files because the library functions are divided into different groups and one file is provided for each group.
        * `stdio.h`: a file, provide prototype of all input/output functions
        * `math.h` : a file, provide prototype of all mathematical functions
* **header files** contain prototype declaration of library functions
* To call any library function we must include the header file which contains its prototype declaration.

## One Dicey Issue
* `printf()` accepts variable number of arguments (sometimes 2 arguments, sometimes 3 arguments, etc.) and even with the mismatch between number of format specifiers and variable, the call still matches with the prototype of `printf()` present in `stdio.h`.
* At run-time, when the `printf()` is executed, for format specifiers without corresponding variable, a garbage value gets printed 

## NOTE
* `void`: a keyword, indicates "no value"
* `return` 
    * this statement serves two purposes:
        * On executing `return` statement, it immediately transfers the control back to the calling function.
        * It returns value present in the parenthesis (if present) after `return`, to the calling function.
            * if there is no parenthesis after `return` a garbage value is returned to the calling function.
            * parenthesis can be dropped. Example: `return a;`
            * A function can return only one value at a time. Thus, the statement `return (a, b)` is invalid 
    * There is no restriction on the number of `return` statements that may be present a function.
    * `return` function need not always be present at the end of the called function.
    * 

