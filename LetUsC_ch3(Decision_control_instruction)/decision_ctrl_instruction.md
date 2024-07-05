# Decision Control Instruction

## The if Statement
* The general form
    ```
    if(this condition is true){
        execute this statement;
    }
    ```
* The keyword `if` tells the compiler that what follows is a **decision control instruction**.
* condition following the keyword `if` is always enclosed within pair of parentheses.
* If the condition is true, only then the statement within braces is executed.
* we express condition using C's 'relational operators', But it can be any valid expression including arithmetic expressions.
* | this expression | is true if|
  |-----------------|------------|
  | x==y | x is equal to y |
  | x!=y | x is not wqual to y |
  | x<y | x is less than y |
  | x>y | x is greater than y |
  | x<=y | x is less than or equal to y |
  | x>=y | x is greater than or equal to y |
* <u>Note</u>
    * The `=` is used for assignment, wheras `==` is used for comparison of two quantities.
    * A variable, if not specifically initialized, contains some unpredictable value (garbage value).
    * In C a non-zero value is considered to be **true**, whereas 0 is considered to be **false**.

## The if-else Statement
* The group of statement within braces following keyword `else` gets executed if condition following `if` evaluates to false.
* The group of statement within braces after the `if`  is called 'if block'.
* The group of statement within braces after the `else` is called 'else block'.
* Had there been only one statement to be executed in the if block and else block we could have dropped the pair of braces.

## Nested if-elses
* It is perfectly alright if we write entire if-else construct within either the body of the `if` statement or the body of an `else` statement.
This is called 'nesting'.

## Forms of if
```
a.  if(condition)
        do this;
```
```
b.  if (condition){
        do this;
        and this;
    }
```
```
c.  if (condition)
        do this;
    else
        do this;
```
```
d.  if(condition){
        do this;
        and this;
    }
    else{
        do this;
        and this;
    }
```
```
e.  if (condition){
        if(condition)
            do this;
        else{
            do this;
            and this;
        }
    }
    else
        do this;
```
```
f.  if (condition)
        do this;
    else{
        if(condition)
            do this;
        else{
            do this;
            and this;
        }
    }
```