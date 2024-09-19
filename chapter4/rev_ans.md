# Review

1. **Name four major types of errors and briefly define each one.**

    - Compile time errors, compiler error
    - Link time errors, error when linking multiple object files to executable
    - Run time errors, error when running executable
    - Hiden errors, no error when running, but does not result in desired actions

2. **What kinds of errors can we ignore in student programs?**

    - Hidden errors

3. **What guarantees should every completed project offer?**

    - Make sure errors are not serious

4. **List three approaches we can take to eliminate errors in programs and produce acceptable software.**

    - Organize software
    - Eliminate most of errors from debugging and testing
    - Make sure remaining errors are not serious

5. **Why do we hate debugging?**

    - I dont hate debugging. But it is easier to preemptively think of possible error sources and write cleaner code than to debug bad code.

6. **What is a syntax error? Give five examples.**

    - Code not complying to cpp (no ";", not enough arguments)

7. **What is a type error? Give five examples.**

    - Wrong type for arguments, or when declaring

8. **What is a linker error? Give three examples.**

    - When functions on modules do not match

9. **What is a logic error? Give three examples.**

    - Hidden errors. Code doesnt do what it is supposed to do

10. **List four potential sources of program errors discussed in the text.**

    - Incomplete programs, unexpected arguments, Unexpected state, Logical errors

11. **How do you know if a result is plausible? What techniques do you have to answer such questions?**

    - Guesstimation, unit testing

12. **How do you test if an input operation succeeded?**

    - if (!cin)

13. **Compare and contrast having the caller of a function handle a run-time error vs. having the called function handle the run-time error.**

    - If function used multiple times, more efficient to check in function. Depends if the condition applies to all cases of calling function

14. **When is throwing an exception preferable to returning an “error value”?**

    - When you want to do a different action on error

15. **When is returning an “error value” preferable to throwing an exception?**

    - When you want to stop immediately.

16. **Describe the process of how exceptions are thrown and caught.**

    - in `try`, `throw error_name(s)` to signal that an error is found, then use `catch (exception &e)` to catch for error

17. **Why, with a `vector` called `v`, is `v[v.size()]` a range error? What would be the result of calling this?**

    - zero-index error

18. **What is an assertion?**

    - `expect([&] {return condition})`

19. **Define precondition and postcondition; give an example (that is not the `area()` function from this chapter), preferably a computation that requires a loop.**

    - precondition checks before doing any operations on input. postconditions checks on output

20. **When would you not test a precondition?**

    - When you know the input is viable

21. **When would you not test a postcondition?**

    - Likewise

22. **What are the steps in debugging a program?**

    - Break code into small functions, consistent layout, meaningful names

23. **Why does commenting help when debugging?**

    - Clarifies what it is meant to do

24. **How does testing differ from debugging?**

    - Testing uses a set of input and expected output. Debugging doesnt.

25. **What is a random number?**

    - A number generated under a probability distribution

26. **How do we use `random_int()` and `seed()`?**

    - Using a cpp engine
