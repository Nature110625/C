# POINTER
* It is C's clever use of pointers that make it the excellent language.

## Call by Value and Call by Reference
* **Calls by value**: function call in which we pass the 'values' of variables to the called function.
    ```
    sum = calsum(a, b, c);
    f = factr(a);
    ```
    * The value of each of the actual arguments in the calling function is copied into corresponding formal arguments of the called function.
    * The changes made to the formal arguments in the called function have no effect on the values of actual arguments in the calling function.
* **Call by reference**:The function call in which we pass the location number (also called address) of the variable to a function.
* The addresses of actual arguments in the calling function are copied into formal arguments of the called function.
* Thus we have access to the actual arguments and we can manupulate them.
* Using call by reference intelligently, we can make function return more than one value at a time by changing value of variables in function called by reference.

## An Introduction to Pointers
## Pointer Notation
* `int i = 3;`
    * Reserve space in memory (have a location number) to hold the integer value.
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
    * Pointers: Variables that contain addresses.
    * addresses (location numbers) will always be a hole number.
    * `int *j, **k;` Here **i** is an ordinary int, **j** is a pointer to and int (integer Pointer) and **k** is a pointer to an integer pointer.
    * There could exist a pointer to a pointer to a pointer to a pointer to a pointer. But usually we need upto a pointer to a pointer

