# C Instructions
## Type Declaration instruction
* This instruction is used to declare the type of variables used in C program.
* written at the beginning of `main()` function.
``` int val;```
* We can initialize while declaring a variable.
```int i=10;```
* Order of declaration is important.
``` float b=a+3.1, a=1.2;``` is not alright, we are trying to use `a` before defining.
```int a=b=c=d=10```would also not work, since we are trying to use `b` (to assign to `a`) before defining it.
## Arithmetic instruction
* This instruction is used to perform arithmetic operations on constants and variables.
* consists of a variable name on the left hand side of `=`(assignment operator) and variable names and constants connected by arithmatic operators (*, /, -, +) on the right hand side of `=`.
## Control instruction
* This is used to control the sequence of execution of various statements in a C program.