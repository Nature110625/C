# File Input/Output
* Often it is not enough to just display the output on the screen.
    * Only limited amount of large data can be stored in memory and displayed on screen.
    * also Memory is volatile and its contents would lost once the program is terminated.
* The data stored in 'file' on the disk can be retrieved later and displayed either in part or in whole.

## Data Organization
* All data stored on the disk is in binary form.
* How this binary data is stored in disk varies from one OS to another.
*   ```
    Our program ---> C Library functions ---> OS ---> Disk
    ```

## File Operations
a. Creation of new file
b. Opening an existing file
c. Reading from a file
d. Writing to a file
e. Moving to a specific location in a file (seeking)
f. Closing a file

### Opening a File
* Before we can read (or write) information from (to) a file on a disk we must open the file.
* To open file we call function `fopen()`.
* `fopen()` perform three important task when we open file in "**r**" mode.
    * Firstly it searches on the disk the file to be opened.
    * Then it loads the file from the disk into a place in memory called buffer.
    * It sets up a character pointer that points to the first character of the buffer.
* Why do we need buffer?
    * Every time we read something from a disk, it takes time for the disk drive to position the read/write head correctly.
    * On a floppy disk system, the driver motor has to actually start rotating the disk from a standstill position every time the disk is accessed.
    * It would be more sensible to read the contents of the file into the buffer while opening the file and then read the file character by character from the buffer rather than from the disk.
    * simillarly, instead of writing characters in the file on the disk one character at a time it would be more efficient to write character in a buffer and then finally transfer the contents from the buffer to the disk.
* To be able to successfully read from a file, information like mode of opening, size of file, place in the file from where the next read operation would be performed, etc., has to be maintained.
    * Since all this information is inter-related, all of it is gathered together by `fopen()` in a structure called **FILE**.
    * `fopen()` returns the address of structure **FILE**. which we collect in the structure pointer **fp**(say). `FILE *fp;`
    * **FILE** structure has been defined in the header file `"stdio.h"`

### Reading from a File
* A pointer (one of the element of structure to which `fp` is pointing) is set up that points to the first character in the buffer by `fopen()`.
* To read the file's contents from memory, there exists a function called `fgetc()`.
* `ch=fgetc(fp)`, 
    * reads the character from the currrent pointer position
    * advances the pointer position so that it now points to the next character.
    * returns the character that is read, which we collected in the variable `ch`.
* Note that once the file has been opened, we no longer refer to the file by its name, but through the file pointer `fp`.
* `fgetc()` returns macro `EOF` once all the characters have been read and we attempt to read one more character.
* In place of `fgetc()` we could have as well used the macro `getc()` with the same effect.

### Trouble in opening a File
* There is possibility that when we try to open a file using the function `fopen()` for reading or writing file may not be opened, because
    * file being operated may not be present on the disk at all.
    * disk space may be insufficient to create new file
    * disk may be write protected
    * disk is damaged and many more
* Crux (main point) or the matter is that it is important for any program that accesses disk files to check whether a file has been opened successfully before trying to read or write to the file.
* if the file opening fails `fopen()` returns a value **NULL**

### Closing the File
* Function `fclose()` close the file passed to it. `fclose(fp);`
* Once we close the file, we can no longer read from it using `getc()` unless we reopen the file.
* Note that to close the file, we don't use the filename but the file pointer `fp`.
* On closing the file, the buffer associated with the file is removed from memory.
* When we attempt to write characters into this file using `fputc()` the character would get written to the buffer. When we close this file using `fclose()` two operation would be performed:
    * the characters in the buffer would be written to the file on the disk.
    * The buffer would be eliminated from memory.
* If the buffer become full before we close the file, then it's content would be written to the disk the moment it becomes full.
* All this buffer management is done for us by the library functions.

### Writing to a File
* The `fputc()`is similar to the `putch()` function in the sense that both output characters
* `putch()` always writes to the VDU, whereas `fputc()` writes to the file (that is signified by FILE pointer that is passed as second argument, say `ft` then `fputc(ch, ft)`. Where ch is char variable).
* Note that a simple file - copy program is capable of copying only text files.
* To copy files with extension .EXE or .JPG, we need to open the files in binary mode.

## File Opening Modes
* Task performed by `fopen()`, when a file is opened in given modes
    * `"r"`: 
        * searches file -> If opened successfully -> loads it into memory and sets up the pointer (which points to the first character in file).
        * **Operations possible** - reading from the file
    * `"w"`
        * searches file
            * if file exists -> its contents are overwritten
            * if file doesn't exists -> new file is created
            * if unable to open file -> returns NULL
        * **operations possible** - writing to the file
    * `"a"`
        * searches file
            * if opened successfully -> loads it into memory and sets up a pointer (that points to the last character in it)
            * if file doesn't exist -> a new file is created.
            * if unable to open file -> returns NULL
        * **operations possible** - adding new contents at the end of file
    * `"r+"`
        * searches file
            * if opened successfully -> load it into memory and set up a pointer (which points to the first character in it).
            * if unable to open the file -> returns NULL
        * **operation possible** - reading existing contents, writing new contents, modifying existing contents of the file
    * `"w+"`
        * searches file
            * if file exists -> overwrite its content
            * if file doesn't exists -> create new file
            * if unable to open file -> returns null
        * **Operation possible** - writing new contents, reading them back, modifying existing contents of the file
    * `"a+"`
        * searches file
            * if file opened -> loads it into memory and sets up a pointer (which points to the first character in it)
            * if file doesn't exists -> a new file is created.
            * if unable to open file -> returns null
        * **Operation possible** - reading existing contents, appending new contents to end of file, cannot modify existing contents.

## Note
* `fopen("PR1.C", "r");`: will open a file "PR1.C" in **read** mode
* `"r"`: tells C compiler that we would be reading the contents of the file.
    * `"r"` is a string not a character. Hence always use double quotes not single.
* `stdio.h`: standing for input/output header file.
* `EOF`: End of File, defined in **"stdio.h"**
* `NULL`: defined in "stdio.h" as **#define NULL 0**
* `exit()`: terminates the execution of the program.
    * `exit(0)`: The value 0 is passed to exit if the program termination is normal
    * `exit(1)`: The non-zero value indicates an abnormal termination of the program.
    * If there are multiple exit points in the program, then the value passed to `exit()` can be used to find out from where the execution of the program got terminated.
    * In Visual Stdio `exit()` value is shown in the Output Window at the bottom
    * In Turbo C++ this value can be seen through the compile | information menu item.
    * The prototype of `exit()` function is declared in the header file **stdlib.h**.