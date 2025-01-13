# Recursion
* Difficult but most direct and clearest way of programming a complicated logic (like algorithm).
* A function is called **Recursive** if a statement within the body of a function calls the same function.
* Recursion is the process of defining something in terms of itself.
* It is possible for a function that has just been called to call itself and pass different argument(s). 
    * This series of calls to same function are 'different invocations' of that function.
    * Thes successive invocation of the same function are possible because the C compiler keep track of which invocation calls which.
## Recursion and Stack
* variables, an array, a linked list, a binary tree, etc. are different ways of organizing the data and known as data structure
* The compiler uses data structure called **stack** for implementing normal as well as recursive function calls.
* **Stack** is a Last In First Out (LIFO) data structure. This means that the last item to get stored on the stack (often called Push operation) os the first one to get out of it (often called as Pop operation)
* Compiler, on encountering the function call, would generate code to push the parameters and the address. Simillarly it would generate code to clear the stack when the control returns back from function
* 
    ```
    #include <stdio.h>
    int add(int, int);
    int main(){
        int a=5, b=2, c;
        c=add(a, b);
        printf("sum=%d\n", c);
        return 0;
    }
    int add(int i, int j){
        int sum;
        sum=i+j;
        return sum;
    }
    ```
    * In this program 
        * First value of parameters **b** and then **a** are pushed on the stack.
        * Then the address of the statement `printf()` is pushed on the stack(This is necessary).
        * Then execution control gets transferred to the function `add()`. In `add()` the value of **a** and **b** are referred as **i** and **j**.
        * Then the local variable **sum** of `add()` gets pushed on the stack.
        * Then after returning value of **sum**, **sum** is popped off from the stack.
        * Next, the address of the `printf()` statement (where the control should be returned) is popped off from the stack. Using this address, the control returns to the `printf()` statement in `main()`.
        * Before execution of `printf()` begins, the two integers that were earlier pushed on the stack are now popped off.
    * In this program, Popping of **sum** and address is done by `add()`, Whereas popping of the two integers is done by `main()`. This is known as 'cded Calling Convention'.
    * There are other calling conventions as well, where instead of `main()`, `add()` itself clears the two integers.
    * Calling Convention also decides whether the parameters being passed to the function are pushed on the stack in left-to-right or right-to-left order.
    * The standard calling convention always uses right-to-left order.
* During every **recursive function call** we are working with a fresh set of parameters.
    * When we make a recursive call the parameter and the return address gets pushed on the stack.
    * The stack gets unwound (past simple and past participate of unwind) when the control returns from the called function.
* While writing recursive functions, we must have an **if** statement to force the function to return without recursive call being executed (else we will fall in an indefinite loop and stack will keep on getting filled with parameters and return address for each call untill stack become full and we get a run-time error).