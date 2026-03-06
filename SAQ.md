-> Created By Dennis Ritchie at Bell Labs in 1972.
-> Much of UNIX was written in C.
-> Usage of C 
    - Operating systems
    - Programs inside devices
    - Software that needs to fast (Since C is the core programming language, it is fast)
    - Game engines and Programs
    - Core Libraries(Other programming languages rely on these)

-> Difference between C and C++
    - C is mainly a procedural language (We can build programs with functions)
    - C mainly focuses on functions + structured programming.
    - C++ supports classes and objects (Often used for object oriented programming)
    - C++ supports generic programming.
    - C++ supports classes, objects, inheritance, polymorphism, while C does not.

-> General Rules for naming variables
    - Names can contain letters, digits and underscores.
    - Names must begin with a letter or an underscore.
    - Names are case sensitive, i.e: myVar and myvar are different.
    - Names can not contain whitespaces or special characters.
    - Reserved words cannot be used as names.

-> Data Types
    - int (2 or 4 bytes) (%d or %i) (unsigned int only works with positive numbers)
    - float (4 bytes) (%f)
    - double (8 bytes) (%lf)
    - char (1 byte) (%c) (char [] = string and for this format specifier is %s)
    - bool (1 byte) (%d) (you have to use stdbool to use this)
    - long int (8 byte) (%ld)
    - short int (2 byte) (%hd)
    - long long int (8 byte) (%lld)
    - long double (16 byte) (%Lf)

-> Instead of writing many if else blocks, switch can be used. Switch uses many blocks to be executed upon case verification.


-> continue skips over the particular iteration while break exits the loop completely.


-> Memory address is created when a variable is created. we can see the memory address by using pointer variable. and we can use printf("%p", &variable_name) to see the memory address. this memory can be manipulated to shorten the code and more efficient coding. (& is  called he reference operator) (* is called dereference operator)



-> void function() - means that this function does not return anything.


-> Recursion is when a function call itself in order to solve a smaller version of a problem.



-> Function Pointer is pointer to a function, it stores the address of the function thus
allowing us to call that function using the pointer, it also helps to pass a function as an argument to another function.



-> Unions are the same as structures however union can only store one variable value at at a time. This is used only to save memory.


-> In structs the memory as saved as a partition of 4 bytes
    - Let's say, I have arranged char c, int n, char b,
    - Logically the struct should have taken 1 + 4 + 1 bytes
    - However it takes 1 + 3 + 4 + 1 + 3
    - Those 3 bytes are extra paddings to make a partition of 4 bytes
    - So, if we arrange int myNum, char c, char b
    - Then we will only use 8 bytes 4 + 1 + 1 + 2
    - Why was there no padding between between char ?
    because char can take values of bytes 1, so it doesn't need any more alignment


-> The header file creation method is in calc.c calc.h and main.c

-> When a variable is declared in another file then,
    - The file it is getting used in uses "extern int shared" like declaration
    - This means that int shared in declared here but it is defined in another file
    - and to run many files together we have to use
    - gcc firstFileName secondFileName ...... -o outputName


