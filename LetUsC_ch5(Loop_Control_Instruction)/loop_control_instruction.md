# Loop Control Instruction
## Loops
* The versatility of the computer lies in its ability to perform a set of instructions repeatedly.

## The while Loop
* General form
    ```
        initialize loop counter;
        while(test loop counter using condition){
            do this;
            and this;
            increment loop counter;
        }
    ```
    * The statement within the `while` loop would keep getting executed till the condition being tested remains true. When the condition becomes false, the control passes to the first statement that follows the body of the `while` loop.
    * In place of the condition there can be any other valid expression.
    * The condition being tested may use relational or logical operators.
    * If the statement within the loop is a single line, the braces are optional.
    * If the test condition never evaluated to false, the loop would be executed forever. This is indefinite loop.
* The increment operator ++ increments the value of variable by 1, when the statement `i++` gets executed.
* the decrement operator -- decrements the value of variable by 1, when the statement `i--` gets executed.
* `+=` is a compound assignment operator. It increments the value on LHS by RHS. `-=`, `*=`, `/=` and `%=` are other compound assignment operator.
* In the statement `i++<10`, first the comparison of value of i with 10 is performed, and then incrementation takes place. Here ++ operator is called post-incrementation.
* In the statement `++i<10`, first incrementation of i takes place, then the comparison of value of i with 10 is performed. Here ++ operator is called a pre-incrementation operator.