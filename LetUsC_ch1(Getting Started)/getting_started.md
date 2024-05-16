# c
* A programming language developed at AT & T's Bell Laboratories of USA in 1972.
* Designed and written by Dennis Ritchie.
* It is reliable, simple and easy to use.
* It gives best peformance (speed of execution).
* Major part of popular operating system like, Windows, UNIX, LINUX and Android are written in C.
* device driver programs are exclusively written in C.
* Program having constraints on time and space are written in C.
* c provides several language elements to make hardware interaction feasible without compromising performance.

### CONSTANTS
* an entity that does not change. 
* In programming languages, often called **literals**.
* C constants are divided in two major categories.
    * **Primary Constants** : Integer constant, Real constant, Character constant
    * **Secondary Constants** : Array, Pointer, Structure, Union, Enum, etc.
* **Rules for constructing Integer Constants** 
    * must have at least one digit.
    * must not have a decimal point.
    * can be positive or negative.
    * absence of sign => positive.
    * commas or blanks are not allowed within integer constant.
    * Example: 426, +782, ...
* **Real Constants** : often called **floating point constants**.
    * can be written in two forms
        1. **Fractional Form** 
        2. **Exponential Form**
            * Generally used if the constant is either too small or too large.
            * In exponential form real constant is represented in two parts
                * **Mantissa** : The part appearing before 'e'.
                * **Exponent** : The part following 'e'.
            * 0.000342 = 3.42e-4
* **Rules for constructing real constants expressed in fractional form**
    * must have at least one digit.
    * must have a decimal point.
    * It could be either positive or negative.
    * Default sign is positive.
    * no commas or blanks are allowed within real constant.
    * Example: 426.46, -23.0, ...
* **Rules for constructing real constants expressed in exponential form**
    * The mantissa part and the exponential part should be separated by letter e or E.
    * The mantissa part may have a positive or negative sign.
    * Default sign of mantissa part is positive.
    * The exponent must have at least one digit, which must be a positive or negative integer. Default sign is positive.
* **Rules for Constructing Character Constants**
    * It is a single alphabet, a single digit or a single special symbol enclosed within single inverted commas.
    * Both inverted comma should point to left.

### VARIABLES
* an entity that may change.
* In programming languages, often called **identifiers**.
* computer's memory consists of million of cells, known as memory cells (also called **memory locations**). These memory locations sores results of calculations. To make the retrieval and usage of value stored easy these memory locations are given names (called **variable names**).
* **Rules for constructing variable names**
    * It is any combination of 1 to 31 alphabets, digits or underscores.
    * first character must be an alphabet or underscore(_).
* It is compulsory to declare the **type** of variable while naming it.

### Keyword**
* are words whose meaning has already been explained to the C compiler (or in broad sense to the computer).
* 32 keywords are available in C.
* ANSI committee have suggested that every compiler specific keyword should be preceded by two underscores.

### Form of a C Program
* indicates how C program has to be written/typed.
    * Each instruction is written as a separate statement.
    * statements in a program must appear in the same order in which we wish them to be executed.
    * Blank spaces may be inserted between two words to improve the readability of the statement.
    * All statement should be in lower case letters.
    * C has no specific rules for the position at which a statement is to be written in a given line. That's why it is often called a **free-form language**.
    * Every C statement must end with a semicolon (;). Thus ; act as a statement **terminator**

### Comments in a C Program
* Comment about the program should be enclosed within /*  */.
* Comment cannot be nested.
* Comment can be split over more than one line.
* // : double slash can be used to write single line comment.
