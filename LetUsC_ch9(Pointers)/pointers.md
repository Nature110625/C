# POINTER
* It is C's clever use of pointers that make it the excellent language.

## Call by Value and Call by Reference
* **Calls by value**:function call in which we pass the 'values' of variables to the called function.
    ```
    sum = calsum(a, b, c);
    f = factr(a);
    ```
* **Call by reference**:The function call in which we pass the location number (also called address) of the variable to a function.

## An Introduction to Pointers
## Pointer Notation
* `int i = 3;`
    * Reserve space in memory(have a location number) to hold the integer value.
    * Associate the name `i` with this memory location
    * Store the value 3 at this location
* The address of variable in memory is a unsigned number. `&i` returns the address of the variable `i`. `%u` is format specifier for printing an unsigned integer.
* `*` called 'value at address` operator also known as 'indirection' operator. It gives the value stored at a particular address.
* Note: printing value `*(&i)` is same as printing the value of `i`.
* **declaration of pointer**
    ```
    int *j; //implies that the value at the address contained in j is an int
    j = &i;
    ```
* 

