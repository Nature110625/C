# Console Input/Output
* Dennis Ritchie wanted C to remain compact. Hence, deliberately omitted everything related with (I/O) from his definition of the language.
* C simply has no provision for receiving data from any of the input devices, or for sending data to the output devices.

## Types of I/O
* Each Operating System has its own facility for inputting and outputting data from and to the files and devices.
* Thus, It's simple matter for a system programmer to write a few small programs that would link the C Compiler for a particular operating system's I/O facilities.
* Developer of C Compilers wrote several standard I/O functions and put them in libraries.
* These libraries are available with all C compilers.
* Library functions available for I/O can be classified into two broad categories:
    * Console I/O functions: Functions to receive input from keyboard and write output to VDU.
    * File I/O functions: Functions to perform I/O operations on a floppy disk or a hard disk.

## Console I/O Functions
* The screen and keyboard together are called a console.
* These functions can further classified into two categories-
    * Formatted console I/O functions
        * Allow the input read from the keyboard or the output displayed on the VDU to be formatted as per our requirements.
        * The details like
            * where output would appear on the screen
            * how many space would be present between two values
            * number of places after a decimal points, etc.
        * **Formatted functions**
          |Type  |Input   |Output   |
          |------|--------|---------|
          |char  |scanf( )|printf( )|
          |int   |scanf( )|printf( )|
          |float |scanf( )|printf( )|
          |string|scanf( )|printf( )|

    * Unformatted console I/O functions
        * Can handle single character or string of characters
        * **unformatted functions**
          |Type  |Input               |Output              |
          |------|--------------------|--------------------|
          |char  |getch( ), fgetchar()|putch( ), fputchar()|
          |int   |-                   |       -            |
          |float |-                   |-                   |
          |string|gets( )             |puts( )             |

## Formatted Console I/O Functions
* `printf()`
    * General form: `printf("format string", list of variables);`
    * The format string can contain:
        * *Characters* that are printed as they are
        * *Format specifications* that beign with a % sign
        * *Escape sequence* that beign with a \ sign
    * `printf()` examine the format string from left to right.
    * **Format Specifications**
        * **Format Specifiers**
            |Data Type|       |Format specifier|
            |---------|-------|---------------|
            |integer  |short signed<br>short unsigned<br>long signed<br>long unsigned<br>unsigned hexadecimal<br>unsigned octal|%d or %I<br> %u<br>%ld<br>%lu<br>%x<br> %o|
            |Real     |float<br>double<br>long double|%f<br>%lf<br>%Lf|
            |Character|signed character<br>unsigned character|%c<br>%c|
            |string   | | %s|
        * **Optional Specifiers**
            |Specifier|Description|
            |------|----|
            |w|Digits specifying field width|
            |.|Decimal point separating field width from precision(number of places after decimal point)
            |p| Digits specifying precision|
            |-|Minus sign for left justifying the output in the specified field width|
            * field-width specifier tells `printf()` how many columns on screen should be used while printing a value. 
                * For example, `%10d`: prints the variable as a decimal integer in a field of 10 columns
                * Value is right justified and is padded with blanks on the left.
            * `%-10d`: this means left justification is desired and value will be padded with blanks on the right
            * If field-width turns out to be less than required to print the value, the field width is ignored and the complete number is printed.
            * `%10.1f`: specifies that a float be printed right-aligned within 10 columns with only one place beyond the decimal point.
            * `%20.10s` : It would have meant left justify the string in 20 columns and print only first 10 characters of the string.
    * **Escape Sequences**: is so called because backslash symbol (`\`) is considered as 'escape' character - It causes an escape from the normal interpretation of a string and make recognization of next character as one having special meaning.
        * `\n`: **Newline**, takes cursor to the beginning of the next line.
        * `\t`: **Tab**, moves the cursor to the next tab stop.
            * A 80-column screen usually has 10 Tab stops.
        * `\b`: **Backspace**, moves the cursor one position to the left of its current position.
        * `\r`: **Carriage return**, takes the cursor to the beginning of the line in which it is currently placed.
        * `\f`: **Form feed**, advances the computer stationery attached to the printer to the top of the next page.
        * `\a`: **ALert**, alerts the user by sounding the speaker inside the computer.
        * `\'`: **Single quote**
        * `\"`: **Double quote**
        * `\\`: **Backslash**
* `scanf( )`
    * General form: `scanf("format string", list of addresses of variables);`
    * It allows us to enter data from keyboard that will be formatted in a certain way.
    * We send address of variables using '&' the 'address of' operator to `scanf()` function.
    * values supplied through the keyboard must be separated by either blank(s), Tab(s), or newline(s).
    * Do not include escape sequences in the format string.

## `sprintf()` and `sscanf()` Functions
* `sprintf()`
    * Works similar to `printf()`, But instead of sending output to the screen - it writes output to an array of characters.
    * General form: `sprintf("name of array", "format string", list of variables)`
* `sscanf()`
    * counterpart of `sprintf()`, allows to read characters from a string and to convert and store them in C variables according to specified formats.
    * It comes in handy for in-memory conversion of characters to values.
    * You can read in strings from file and them extract values from a string by using `sscanf()`.
    * Usage is same as `scanf()`, except that the first argument is the string from which reading is to take place.

## Unformatted Console I/O Functions
* Handles one character at a time
    * `getch()` and `getche()` 
        * Both reads a single character the instant it is typed without waiting for enter key to be hit.
        * Both return the character that has been most recently typed.
        * 'e' in `getche()` means it echos (displays) the character that you typed to the screen.
        * The prototype of these are present in the header file **conio.h**
    * `getchar()` and `fgetchar()`
        * Both read single character but unfortunately requires Enter key to be typed following the character you typed.
        * Both return and echos the character you typed.
        * `getchar()` is a macro and `fgetchar()` is a function.
        * The prototype of these are present in the header file **stdio.h**
    * `putch()`, `putchar()` and `fputchar()`
        * Working of these are exactly same, prints only one character at a time on the screen.
* Handles string of character
    * `gets()` 
        * It gets a string from keyboard and terminates when Enter key is hit. Thus spaces and tabs are perfectly acceptable as part of input string (unlike `scanf()`).
        * It gets a newline terminated string of characters from keyboard and replaces the `\n` with a `\0`.
    * `puts()`: outputs only one string at a time to the screen. If we attempt to print two strings using `puts()`, only the first one gets printed.