# File Input/Output
* Often it is not enough to just display the output on the screen.
    * Only limited amount of large data can be stored in memory and displayed on screen.
    * also Memory is volatile and its contents would lost once the program is terminated.
* The data stored in 'file' on the disk can be retrieved later and displayed either in part or in whole.

## Data Organization
* All data stored on the disk is in binary form.
* How this binary data is stored in disk varies from one OS to another.
*   ```
    Our program ---> C Library functions ---> OS ---> Desk
    ```

## File Operations
a. Creation of new file
b. Opening an existing file
c. Reading from a file
d. Writing to a file
e. Moving to a specific location in a file (seeking)
f. Closing a file