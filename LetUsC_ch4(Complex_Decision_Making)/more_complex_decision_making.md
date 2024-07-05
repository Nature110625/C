# Complex Decision Making
## Use of Logical Operators
* C allows uses of three logical operator
    * `&&`: AND operator
    * `||`: OR operator
    * `!`: NOT operator
* AND and OR operators combine two or more conditions. 
* AND and OR operators are useful in following programming situations
    * When it is to be checked in which range does a value fall.
    * When after testing several conditions, the outcome is only one of the two answers. (often called yes/no problem)
* 
  |x|y|!x|!y|x&&y|x&verbar;&verbar;y|
  |--------|-|-------|-|-|-|
  |0|0|1|1|0|0|
  |0|Non-zero|1|0|0|1|
  |Non-zero|0|0|1|0|1|
  |Non-zero|Non-zero|0|0|1|1|

## The else if Clause
*   ```
        if(condition){
            statement;
        }
        else if(condition){
            statement;
        }
        else if(condition){
            statement;
        }
        else{
            statement;
        }
    ```
* reduces indentation of the statements.
* every `else` is associated with previous if. `else` goes to work if all the condition fail.
* If a condition is satisfied, other conditions below it are not checked.
* Even in `else if` ladder, the last `else` is optional.

## The ! Operator
* This operator reverses the result of the expression it operates on.

## Hierarchy of Operators Revisited
|Operators|Type|
|---------|----|
|!|Logical NOT|
|*, /, %|Arithmetic and modulus|
|+, -|Arithmetic|
|<, >, <=, >=|Relational|
|==, !=|Relational|
|&&|Logical AND|
| &verbar;&verbar; |Logical OR|
|=|Assignment|

## The Conditional Operators
* The conditional operator `?` and `:` are sometimes called ternary operators since they take three arguments.
* These form a kind of foreshortened if-then-else.
* General form
    ```
        expression1? expression2 : expression3;
    ```
    * if **expression1** is true(that is, if its value is non-zero), then the value returned will be **expression2**, otherwise the value returned will be **expression3**.
* It's not necessary that the conditional operators should be used only in arithmetic statements.
* Conditional operators can be nested.
* ```
    a>b?g=a:g=b;
  ```
  this will give an error 'Lvalue Required'.
    * Error can be overcome by enclosing the statement in the : part within a pair of parenthesis.
    * In absence of parenthesis, the compiler belives that `b` is being assigned to the result of the expression to the left of second `=`.
* The limitation of the conditional operator is that after the `?` or after the `:`, only one C statement can occur.