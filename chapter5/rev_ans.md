# Review

1. **What do we mean by "Programming is understanding"?**

    - To solve a problem by programming, we first have to udnerstand the problem that is to be solved.

2. **The chapter details the creation of a calculator program. Write a short analysis of what the calculator should be able to do.**

    - The calculator should be able to perform basic arithmetic (+, -, *, /) operations on numbers.

3. **How do you break a problem up into smaller manageable parts?**

    - Look for libraries that could help, look for solutions that are separately described

4. **Why is creating a small, limited version of a program a good idea?**

    - Clarifies the problem statement, problem analysis and experiment

5. **Why is feature creep a bad idea?**

    - It makes the program unnecessarily complex and difficult to maintain, and difficult to start


6. **What are the three main phases of software development?**

    - Analysis, desing , implementation

7. **What is a "use case"?**

    - A description of how a user will interact with the program

8. **What is the purpose of testing?**

    - To ensure that the program works as expected

9. **According to the outline in the chapter, describe the difference between a Term, an Expression, a Number, and a Primary.**

    - Primary is the base, a number or "(Expression)". Then, a term is a primary or a term */ primary. Finally, an expression is a term or a expression +- term

10. **In the chapter, an input was broken down into its components: Terms, Expressions, Primarys, and Numbers. Do this for (17+4)/(5-1).**

    - As a whole, (17+4)/(5-1) is a term. (17+4) is a primary, 17+4 is an expression, 17 and 4 are primaries. Evaluating this will result in 21 / (5-1)
    - Then we do the same to evaluate (5-1) to 4
    - Result wil be 21/4

11. **Why does the program not have a function called number()?**

    - Predefinedin st lib

12. **What is a token?**

    - A character in the input

13. **What is a grammar? A grammar rule?**

    - Defines the syntax of the input. Grammar rule is implemented in a program to evaluate the input.

14. **What is a class? What do we use classes for?**

    - Classes are data structures and functions encapsulated. A blueprint for creating objects.

15. **How can we provide a default value for a member of a class?**

    - by initializing it when defining a class


16. **In the expression function, why is the default for the switch-statement to "put back" the token?**

    - In case it is not needed yet.

17. **What is "look-ahead"?**

    - To look at the input preemptively

18. **What does putback() do and why is it useful?**

    - Putback allows the token to return to token stream if it is not used.

19. **Why is the remainder (modulus) operation, %, difficult to implement in the term()?**

    - Does not work with floats.

20. **What do we use the two data members of the Token class for?**

    - One holds the kind one holds the value

21. **Why do we (sometimes) split a class’s members into private and public members?**

    - To make it cleaner

22. **What happens in the Token_stream class when there is a token in the buffer and the get() function is called?**

    - Error

23. **Why were the ';' and 'q' characters added to the switch-statement in the get() function of the Token_stream class?**

    - To indicate end of equation, and quit

24. **When should we start testing our program?**

    - ASAP

25. **What is a "user-defined type"? Why would we want one?**

    - Classes defined by user. Not found in othere libraries. More complex

26. **What is the interface to a C++ "user-defined type"?**

    - Public methods and members that allow interaction

27. **Why do we want to rely on libraries of code?**

    - Pre-written code, tested
