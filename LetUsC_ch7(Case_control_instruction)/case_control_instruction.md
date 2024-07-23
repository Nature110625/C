# Case Control Instruction
## Decisions using switch
* The control that allows us to make a decision from the number of choices is called a **switch**(or more accurately **switch-case-default**)
* General formula:
    ```
    switch(integer expression){
        case constant1:
            do this;
        case constant2:
            do this;
        case constant3:
            do this;
        default:
            do this;
    }
    ```
    * integer expression following the keyword `switch` is any C expression that will yeild an **integer value**.
    * The keyword `case` is followed by an integer or character constant.
    * constant in each case must be unique.
    * logic behind this switch program
        * first the integer expression is evaluated
        * the value it gives is then matched, one-by-one, against the constant vlaues.
            * When match is found, the program executes the statement following that `case`, and all subsequent `cases` and `default` statements as well.
            * When no match is found with any of the `case` statements, only statements following the default case are executed.
    * the keyword `break` is used to exit code after executing the required `case` statement.
        * General formula:
            ```
            switch(integer expression){
                case constant1:
                    do this;
                    break;
                case constant2:
                    do this;
                    break;
                case constant3:
                    do this;
                    break;
                default:
                    do this;
            }
            ```
        * no need for a `break` statement after the `default`, since on reaching `default` control come out of the `switch` anyway.
* when we want to execute common set of statements for multiple `cases`
    ```
    switch (integer expression){
        case constant1:
        case constant2: 
        case constant3: 
            do this;
            break;
        case constant4:
        case constant5:
            do this;
            break;
        default:
            do this;
    }
    ```
* There is no need to enclose statements, to be executed in each `case`, within a pair of braces.
* Every statement in `switch` must belong to some `cases` or the other.
    * compiler won't report error if statement doesn't belong to any `case`
    * However, the statement would never get executed.
* Is `switch` a replacement for `if`?
    * yes, as switch leads to more structured program and the level of indentation is manageable.
    * no, because after the `case` we can only have `int` constant or a `char` constant or an expression that evaluates to one of these constants. Even `float` is not allowed.
* `break` statement when used in a `switch` takes the control outside the `switch`.
* However, use of `continue` will not take the control to the beginning of `switch` as one is likely to believe. because `switch` is not a looping statement unlike `while`, `for` or `do-while`.
* nested `switch` statement is possible, but is rarely used.
* The `switch` statement is very useful for writing menu driven program.
## switch versus if-else Ladder
* things can not be done in `switch`
    * A float expression cannot be tested using a `switch`.
    * cases can never have variable expressions (like, `case a+3:`)
    * Multiple cases cannot use same expression.
* `switch` statement works faster than an equivalent `if-else` ladder.
    * because compiler generates a jump table for a `switch` during compilation. As a result, during execution it simply refers to jump table to decide which case is satisfied.
    * while `if-else` are slower because the condition in them are evaluated at execution time.
    * note: lookup in the jump table is faster than evaluation of a condition, especially if the condition is complex.
## The goto keyword
* avoid `goto` keyword! it makes C programmer's life miserable.
* `goto` statement transfers control to the label `sos`
    * general formula
        ```
        goto sos;
        sos: do this;
        ```
    * we can replace `sos` with any word.
* only programming situation in favour of using `goto` is when we want to take the control out of the loop that is contained in several other loops