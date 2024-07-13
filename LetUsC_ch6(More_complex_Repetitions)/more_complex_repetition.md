# More Complex Repetitions
## The for Loop
* specify three things about loop in a single line
    * Setting a loop counter to an initial value
    * Testing the loop counter to determine whether its value has reached the number of repetition desired
    * Increasing the value of loop counter each time body of the loop has been executed.
* General form
    ```
    for(initialize counter; test counter; increment counter){
        do this;
        and this;
        and this;
    }
    ```
* Note: Initialization, testing and incrementation part of a loop can be replaced by any valid expression.**For example:**
    ```
    for (i=10; i; i--);
    for (i<4; j=5; j=0);
    for (i=1; i<=10; printf("%d", i++));
    for (scansf("%d", &i); i<=10; i++);
    for (; i<=10; i++);
    for (i=1; i<=10;)
    for ( ; i<=; )
    for (i=0; i++<10;)
    ```
* While loop and for loops can also be nested. 
* The initialization expression in the for loop can contain more than one statement separated by comma. `for(i=1, j=2; j<10; j++)`

## The break Statement
* `break` statement alows us to jump out of the loop (in which it is placed) instantly.
* When `break` is encountered inside any loop, control automatically passes to the first statement after the loop.

## The continue Statement
* `continue` allow us to take the control to the beginning of the loop(in which it is placed), bypassing the statements inside the loop, which have not yet been executed.
* When `continue` is encountered inside any loop, control automatically passes to the beginning of the loop.

## The do-while Loop
* General form
    ```
    do{
        this;
        and this;
        and this;
        and this;
    }while (this condition is true);
    ```
* `do-while` tests the condition after having executed the statements within the loop.
* Thus `do-while` would execute its statements at least once, even if the condition fails for the first time.

## The Odd Loop
* When it is not known beforehand how many times the statements in the loop are to be executed.
```
/* Execution of a loop unknown number of times */
# include <stdio.h>
int main(){
    char another;
    int num;
    do{
        printf("Enter a number");
        scanf("%d", &num);
        printf("square of %d is %d\n", num, num*num);
        printf("Want to enter another number y/n");
        fflush(stdin);
        scanf("%c", &another);
    } while(another=='y');

    return 0;
}
```

## NOTE
* `i++<10` : since the `++` operator comes after `i`, first comparison is done, followed by incrementation.
* `++i<=10` : since `++` precedes `i` firstly incrementation is done, followed by comparison.
* `fflush()`: used to get rid of peculiarity of `scanf()`.
    * After supplying a number when we hit the Enter Key, `scanf()` assigns the number to the variable `num` and keeps the **Enter Key unread in the keyboard buffer**.
    * Thus succeding `scanf()` will read the Enter key from the buffer thinking that user has entered the Enter key.
    * `fflush()` remove of 'flush out' any data remaining in the buffer.
    * The argument to `fflush()` must be the buffer which we want to flush out.
* `stdin`: means buffer related with standard input devece, i.e., keyboard