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