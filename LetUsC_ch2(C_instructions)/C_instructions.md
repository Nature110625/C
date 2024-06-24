# C Instructions
## Type Declaration instruction
* This instruction is used to declare the type of variables used in C program.
* written at the beginning of `main()` function.
``` int val;```
* We can initialize while declaring a variable.
```int i=10;```
* Order of declaration is important.
``` float b=a+3.1, a=1.2;``` is not alright, we are trying to use `a` before defining.
<br>```int a=b=c=d=10``` would also not work, since we are trying to use `b` (to assign to `a`) before defining it.

## Arithmetic instruction
* This instruction is used to perform arithmetic operations on constants and variables.
* consists of a variable name on the left hand side of `=`(assignment operator) and  operands (variable names and constants connected by arithmatic operators (*, /, -, +)) on the right hand side of `=`.
* Only one variable is allowed on the left side of `=`, i.e. `a + b = c` is illegal.
* used for storing character constants in character variables `char a='F'`. Here, variable store ASCII value of the character in single quote.
* Arithmatic operations can be performed on ints, floats and chars.
* An arithmetic operation between integer and integer, real and real, and integer and real yields integer, real and real result respectively.
* 
## Control instruction
* This is used to control the sequence of execution of various statements in a C program. 
* There are four types of control instructions in C
    * Sequence Control Instruction: ensures that the instruction are executed in the same order in which they appear in the program.
    * Selection or Decision Control Instruction
    * Repetition or Loop Control Instruction
    * Case Control Instruction

## Type conversion in Assignment
* When the type of the expression on right-hand side and on the left-hand side of an assignment operator is not same, then the value of expression on the right-hand side is either promoted or demoted depending on the type of expression on the left-hand side of =.

## Hierarchy of Operations
* The priority or precedence in which the operations in an arithmetic statement are performed is called the hierarchy of operations.
*   |prority|operators|description|
    |-------|---------|-----------|
    |1<sup>st</sup>|*, /, % | Multiplication, Division, Modular division|
    |2<sup>nd</sup>| +, - | Addition, Substraction|
    |3<sup>rd</sup>| = | Assignment|

## Associativity of Operators
* Used to settle tie between two operators of equal priority.
* there are two type of associativity
    * Left to Right: *, /
    * Right to Left: =
## NOTE
* Modulo Operator `%`
    * This operator returns the remainder on dividing one integer with another
    * the sign of the remainder is always same as the sign of the numerator
    * cannot be applied on a float.
* ASCII
    * ASCII code of 'F' is 01000110.
    * ASCII value is decimal equivalent of ASCII code.
    * ASCII value of 'F' is 70.
* Exponentiation is carried out by using `pow()` function. 
* For `pow()` function to work correctly we have to add a preprocessor directive `#include <math.h>`.
* pow(a, b) => a<sup>b</sup>
* There are 45 odd operators on C