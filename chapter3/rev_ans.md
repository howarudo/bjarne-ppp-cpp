# Review

1. **What is a computation?**

    Act of producing outputs from inputs

2. **What do we mean by inputs and outputs to a computation? Give examples.**

    Inputs can be typed from user, files, audio input, or external signal from internet. Outputs likewise. Or to-and-fro other programs

3. **What are the three requirements a programmer should keep in mind when expressing computations?**

    Correctness, simplicity and efficienciency

4. **What does an expression do?**

    Evaluates to a value, usually performing a set of operations

5. **What is the difference between a statement and an expression, as described in this chapter?**

    A statment is a complete unit of execution that performs some action

6. **What is an lvalue? List the operators that require an lvalue. Why do these operators, and not the others, require an lvalue?**

    lvalue is left value. Assignment requires an lvalue. It is a memory location.

7. **What is a constant expression?**

    A `constexpr` is used to hold a constant value, value that won't be altered. Value has to be evaluated during compile time
8. **What is a literal?**

    A literal is a fixed value written directly in code.

9. **What is a symbolic constant and why do we use them?**

    A `const` is also a constant that can't be altered but it can be evaluated on run-time.

10. **What is a magic constant? Give examples.**

    A magic constant are constants that are not declared as `const` or `constexpr` but appears in code as a literal. Must be avoided. (**HARD CODED**)

11. **What are some operators that we can use for integers and floating-point values?**

    +-/*%

12. **What operators can be used on integers but not on floating-point numbers?**

    % (modulo)

13. **What are some operators that can be used for strings?**

    +

14. **When would a programmer prefer a switch-statement to an if-statement?**

    If it makes it more readable. When comparing a variable with chars, ints or floats, better to use switch than multiple if and if elses.

15. **What are some common problems with switch-statements?**

    Forgetting to write a "break" after case breaks.

16. **What is the function of each part of the header line in a for-loop, and in what sequence are they executed?**

    Local variable initialization, condition, incrementation (or decrement). On that order.

17. **When should the for-loop be used and when should the while-loop be used?**

    Always use a for loop when possible.

18. **Describe what the line `char foo(int x)` means in a function definition.**

    Function foo accepts an integer and returns a character.

19. **When should you define a separate function for part of a program? List reasons.**

    Abstraction or Divide-and-conquer

20. **What can you do to an int that you cannot do to a string?**

    Division, Multiplication , subtraction?

21. **What can you do to a string that you cannot do to an int?**

    Access individual characters via indexing.

22. **What is the index of the third element of a vector?**

    2

23. **How do you write a for-loop that prints every element of a vector?**

    ```cpp
    for (auto x: vector_name) {
        cout << x << "\n";
    }
    ```

24. **What does `vector<char> alphabet(26);` do?**

    Initializes a vector named alphabet that holds 26 characters

25. **Describe what `push_back()` does to a vector.**

    Increments the size of vector and adds an element on the end of the vector

26. **What does vector's `member size()` do?**

    Returns the length of the vector

27. **What makes vector so popular/useful?**

    Stores data

28. **How do you sort the elements of a vector?**
    ```cpp
    sort(vector_name.begin(), vector_name.end())
    ```
