# Review

1. **What are the two parts of a class, as described in the chapter?**

    - Public and private interfaces. Public interfaces allows users to interact but private does not. Store data / implementations in private to disallow edge cases

2. **What is the difference between the interface and the implementation in a class?**

    - Interface are functions, variables users will want to edit and use. Implementations either enable interfaces or are meant to be hidden

3. **What are the limitations and problems of the `struct Date` from §8.4.1?**

    - Functions are implemented as helper functions outside the entitiy (a struct). Values are also editable

4. **Why is a constructor used for the `Date` type instead of an `init_day()` function?**

    - Constructors are used for initialization. If a constructor is used, the object is forced to be initialized, discouraging intializing by hand and only declaration

5. **What is an invariant? Give examples.**

    - Invariants are **conditions that always hold** for an object. For a Date type, it will be restrictions on month and date

6. **When should functions be put in the class definition, and when should they be defined outside the class? Why?**

    - Public member functions are usually short one-liners, while private member functions are allowed to be long. Public members have to be short to allow readablity. They should be defined outside when it is long (only declared in class)

7. **What is a default constructor and when do we need one?**

    - Default constructor defines a class without any arguments. Useful to avoid errors of just declaring.


8. **What is a default member initializer?**

    - Defining the defalut vlues of variables in the private part of the class

9. **When should operator overloading be used in a program? Give a list of operators that you might want to overload (each with a reason). Which ones can you define in C++?**

    - Operator overloading is defining C++ operators for a class or enum. It must have at least one user-defined type as operand. Generally not good to define unless it is an intuitive operation (and used frequently)

10. **Why should the public interface to a class be as small as possible?**

    - To help readablitiy. Most users only need to read public

11. **What does adding `const` to a member function do?**

    - It implicitly specifies that the member function wont alter the values. This allows `const` variables to use the function as well.

12. **Why are “helper functions” best placed outside the class definition?**

    - To avoid making the class definition too long. Use a `namespace` to make it neat

13. **How does an `enum class` differ from a “plain” `enum`?**

    - Plain `enum`s are less strict thatn `enum classses`. Plain `enum`s pollute the scope where the enumerator is defined. Better to use `class enums`
