# Review

1. **Why is I/O tricky for a programmer?**
    - I/O streams are impoleemnted using a layer of abstraction over the device driver. This black-box abstraction makes it tricky


2. **What does the notation `<< hex` do?**
    - Hex is a **manipulator** that manipulates the state of a stream. In this case, it makes the stream be hex format

3. **What are hexadecimal numbers used for in computer science? Why?**
    - Hexadecimals were popular because it exactly represents a 4-bit value

4. **Name some of the options you may want to implement for formatting integer output.**

    - If it is too big, format in scientific. Dealing with base 16, 8 numbers.

5. **What is a manipulator?**

    - A manipulator changes the format of the stream

6. **What is the default output format for floating-point values?**

    - Fixed or scientific

7. **Explain what `setprecision()` and `setw()` do.**

    - `setprecision()` rounds the value to the given s.f. `setw` sepcifies the width of the value

8. **Which of the following manipulators do not "stick": `hex`, `scientific`, `setprecision()`, `setw()`?**

    - setw()

9. **In `format()`, how do you specify where an argument is placed on output?**

    - use curly brackets `{}`

10. **Give two examples where a `stringstream` can be useful.**

    - Useful when extracting inputs of a certain format

11. **When would you prefer line-oriented input to type-specific input?**

    - When the input is complex and you want to look at each characters of the line

12. **What does `isalnum(c)` do?**

    - boolean if c is an alpha numeric

13. **When dealing with input and output, how is the variety of devices dealt with in most modern computers?**

    - There is a layer of abstraction to deal with input and outputs of different devices

14. **What, fundamentally, does an `istream` do?**

    - It is a stream class for reading input. It converts data into a format to be stored in variables.

15. **What, fundamentally, does an `ostream` do?**

    - Same but for outputs. Converts variable data to suitable output

16. **What, fundamentally, is a file?**

    - A sequence of binaries. That has a format

17. **What is a file format?**

    - The file format tells us the way to read the binaries stored

18. **Name four different types of devices that can require I/O for a program.**

    - Keyboard, audio, GUI

19. **What are the four steps for reading a file?**

    - Know name, open, read the characters, close it

20. **What are the four steps for writing a file?**

    - Name it, open or create it, write the characters, close it

21. **Name and define the four stream states.**

    - **goodbit**, **eofbit**, **failbit**, **badbit**

22. **Discuss how the following input problems can be resolved:**
    - a. The user typing an out-of-range value
        - Checking with if statements
    - b. Getting no value (end-of-file)
        - putback
    - c. The user typing something of the wrong type
        - If found different type, putback

23. **In what way is input usually harder than output?**

    - Error handling and format conversions

24. **In what way is output usually harder than input?**
    - Fomatting output for another system

25. **Why do we (often) want to separate input and output from computation?**

    - It is not the core part of the program. To allow easier changes in the future

26. **What are the two most common uses of the `istream` member function `clear()`?**

    - istream used to take formatted input. if we want to catch fail() input and do another process, we can clear the failbit by using `clear()`

27. **What are the usual function declarations for `<<` and `>>` for a user-defined type X?**

    - `istream& operator>>(istream& is, X& x);`

28. **How do you specify where an argument is inserted into a format string in `format()`?**

    - using curly brackets to specify location. Arguments to specify which variable and its order

29. **What is the notation for bases of decimal values in `format()`?**

    - `{:base_name}`

30. **How do you specify the precision of floating-point values in `format()`?**

    - ex. `{:precision.dec_places}`
