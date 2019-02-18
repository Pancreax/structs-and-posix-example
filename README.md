# structs-and-posix-example
A kind of weird and nonsense example of use of structs and posix system calls. Just for fun.

## Abstract

This code explores a nice way of initialization for some struct's members. 
Also uses the unistd.h library to make a system call that will suspend the execution of the program for the specified time. I think is a good way of making delays in C because it is precise and don't keep the CPU in a busy wait.

## Compiling the source

To compile the source type on terminal:

    gcc structsAndPosix.c -o structsAndPosix.o

## Using the executable    
    
To execute the generated program, type:

    ./structsAndPosix.o
    
The program will just "introduce" itself, and loop for 10 times showing the current timestamp and the values of the two members of the struct mStructVariable.
Then will say goodbye and go away.\
Yeah, i know, it's pretty weird... I was just randomly experimenting anyway.
