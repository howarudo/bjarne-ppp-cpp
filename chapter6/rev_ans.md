# Review

1. **What is the purpose of working on the program after the first version works? Give a list of reasons.**

    - Improve on current UX/DX, adding more features, dealing with ignored edge cases

2. **Why does `1+2; q` typed into the calculator not quit after it receives an error?**

    - After semicolon, the next inputs are thought of as terms (then expressions then primaries) and q is thought of a primary, hence giving an error

3. **Why did we choose to make a constant character called `number`?**

    - Improves understandability of program. Better than hard-coded constant of '8'

4. **We split `main()` into two separate functions. What does the new function do and why did we split `main()`?**

    - As it showed 2 functionalities previously.

5. **Why do we split code into multiple functions? State principles.**

    - Functions should reflect the structure of the program, also each function should serve logically independent roles

6. **What is the purpose of commenting?**

    - To add more information of the code details

7. **What is the use of symbolic constants?**

    - Symbolic constants improve readability

8. **Why do we care about code layout?**

    - Improves readability, maintability, and debugging experience

9. **How do we handle `%` (remainder) of floating-point numbers?**

    - Using a built in function (or narrowing)

10. **What does `is_declared()` do and how does it work?**

    - Is declared checks the vector (list) for any variables of the given string

11. **The input representation for `let` is more than one character. How is it accepted as a single token in the modified code?**

    - By incrementing to a string the input charaters, but using only one character to represent it in the token stream

12. **What are the rules for what names can and cannot be in a calculator program?**

    - Shouldnt start with a number or operation, and does not contain ()

13. **Why is it a good idea to build a program incrementally?**

    - Easier to develop, less complex to start

14. **When do you start to test?**

    - As early as possible

15. **When do you retest?**

    - When you add a new feature, clean up code

16. **How do you decide what should be a separate function?**

    - If there are two logically different usages

17. **How do you choose names for variables and functions? List possible reasons.**

    - Understandable but not too long

18. **What should be in comments and what should not?**

    - Comments shouldn't paraphrase the code. It should show a different information not understandable just by code

19. **When do we consider a program finished?**


    - It is never finsihed. Any program has potential to be better and improve. Just know which to prioritize
