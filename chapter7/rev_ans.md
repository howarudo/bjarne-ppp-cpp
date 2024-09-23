# Review

1. **What is the difference between a declaration and a definition?**

    - A declaration introduces a name to a scope, specifying its type. A definitnion specifies the meaning of the declarations

2. **How do we syntactically distinguish between a function declaration and a function definition?**

    - A function defintion has a body

3. **How do we syntactically distinguish between a variable declaration and a variable definition?**

    - A variable declaration does not specify its value

4. **Why can’t you use the functions in the calculator program from Chapter 5 without declaring one or more of them first?**

    - Because the functions are cyclically chained together

5. **Is `int a;` a definition or just a declaration?**

    - Declaration

6. **Why is it a good idea to initialize variables as they are declared?**

    - Variables that arent initialized will be given the default value

7. **What can a function declaration consist of?**

    - Type, name and value

8. **What is the *suffix return type* notation, and why might you use it?**

    - Specifying the return type after parameter list. It is more readable to write it this way if the return type is long

9. **What good does indentation do?**

    - Makes code more readable for debugging

10. **What is the scope of a declaration?**

    - The range of text where the name is usable

11. **What kinds of scope are there? Give an example of each.**

    - Global scope, module scope, naemspace scope, class scope, local scope (within curly brackets) and statement scope (for statements)

12. **What is the difference between a class scope and local scope?**

    - A local scope is separated with curly brackets, a class scope is separated by classses

13. **Why should a programmer minimize the number of global variables?**

    - Order of evaluation will mess up the values of global variables.

14. **What is the difference between pass-by-value and pass-by-reference?**

    - Pass by value copies the variable to be used in the function scope. Pass by reference copies the reference to the function scope. You can edit the values of reference using pass-by-reference

15. **What is the difference between pass-by-reference and pass-by-const-reference?**

    - Pass by const ref doesnt allow to edit the values.

16. **What is a `swap()`?**

    - Swap takes a 2 refs and swaps the vlaue

17. **Would you ever define a function with a `vector<double>` as a by-value parameter?**

    - No..... If you want to edit the values, use a ref, if you dont want to edit the values, use a const ref. There is no reason to not use a ref for vector doubles.

18. **Give an example of undefined order of evaluation. Why can undefined order of evaluation be a problem?**

    ```cpp
    // file f1.cpp
    int x1 = 1;
    int y1 = x1+2;

    //file f2.cpp
    extern int x1;
    int y2 = y1 + 2;
    ```

    - Extern int x1 does not gurantee that x1 has already existed so it could be defined as 0


19. **What do `x&&y` and `x||y`, respectively, mean?**

    - x and y, x or y

20. **Which of the following is standard-conforming C++: functions within functions, functions within classes, classes within classes, classes within functions?**

    - Functions within classses, classess withih classes, classes within functions

21. **What goes into an activation record?**

    - When a function is called, the langauge implemenmtation sets aside a data structure, called an activation record to contain all parameters and local variables

22. **What is a call stack and why do we need one?**

    - Call stack holds the activation record in a stack. First in last out

23. **What is the purpose of a namespace?**

    - namespaces organizes entities names (classes, functions, data and types)

24. **How does a namespace differ from a class?**

    - namespaces organizes entities while classes are blueprints of objects

25. **What is a `using` declaration?**

    - using namespace name allows us to shorten the `name::` syntax. Should be avoided when possible.

26. **Why should you avoid `using` directives in a header?**

    - Other files might be using a different namespace and the function names will be ambigious

27. **What is namespace `std`?**

    - Standard library
