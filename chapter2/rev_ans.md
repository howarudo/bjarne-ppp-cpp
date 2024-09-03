# Review

1. **What is meant by the term *prompt*?**

    A message displayed to the user indicating that it is waiting for an input.

2. **Which operator do you use to read into a variable?**

    `cin >> variable_name;`

3. **What notations can you use to initialize an object?**

    `obj_type obj_name;`

4. **If you want the user to input an integer value into your program for a variable named `number`, what are two lines of code you could write to ask the user to do it and to input the value into your program?**

```cpp
    int number;
    cin >> number;
```


5. **What is *\n* called and what purpose does it serve?**

    newline. moves cursor to a newline

6. **What terminates input into a string?**

    space, enter or ctrl-d

7. **What terminates input into an integer?**

    space, enter or ctrl-d?

8. **How would you write the following as a single line of code:**
   ```cpp
   cout << "Hello, ";
   cout << first_name;
   cout << "\n";
    ```

    ```cpp
    cout << "Hello, " << first_name << "\n";
    ```

9. What is an object?

    A region of memory with a type that specifies what kind of information can be placed in it.

10. What is a literal?

    A fixed value written in code.

11. What kinds of literals are there?

    Integers, floats, strings, chars

12. What is a variable?

    An object with a name

13. What are typical sizes for a char, an int, and a double?

    8, 32, 64 bits

14. What measures do we use for the size of small entities in memory, such as ints and strings?

    bytes

15. What is the difference between = and ==?

    = is assignment operator, and == equality operator

16. What is a definition?

    Declaration that allocates storage

17. What is an initialization and how does it differ from an assignment?

    Assignment is done on initialized variables. Initialization fills empty memory

18. What is string concatenation and how do you make it work in C++?

    Addtino of strings

19. What operators can you apply to an int?

    +-/%

20. Which of the following are legal names in C++? If a name is not legal, why not?
```
perl
Copy code
This_little_pig
George@home
correct?
This_1_is_fine
_this_is_ok
stroustrup.com
2_For_1_special
MineMineMine
$PATH
latest thing
number
```

    perl, correct?, Copy code, George@home, stroustrup.com, 2_For_1_special, $PATH, latest thing


21. Give five examples of legal names that you shouldn’t use because they are likely to cause confusion.

    f00, foo, too_long_to_read_variables, o1

22. What are some good rules for choosing names?

    short, easy to understand

23. What is type safety and why is it important?

    checking for unexpected bugs during conversions

24. Why can conversion from double to int be a bad thing?

    double is rounded down by default

25. Define a rule to help decide if a conversion from one type to another is safe or unsafe.

    widening should be ok but narrowing should be unsafe.

26. How can we avoid undesirable conversions?

    type safety

27. What are the uses of auto?

    When the type if obvious for the initializer
