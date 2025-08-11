# CS50 Week 1

This week focuses on basic programming concepts: input/output, data structures, and algorithms.

The exercises cover very fundamental programming, which contrasts with the higher-level languages I usually work with like C# and Python.  
It feels closer to C#, but at a lower level and more manual management.

## Libraries

- Standard C library: `<stdio.h>`

## Tools and Commands

- `make` — used for compiling and building programs

## Basics

- `printf()` — standard print function, similar to `Console.WriteLine` but requires explicit format specifiers  

### Format specifiers:
- `%d` — integer  
- `%i` — integer  
- `%li` — long integer  
- `%s` — string  
- `%c` — character  

### Examples:

```c
#include <stdio.h>

int main() {
    int age = 30;
    long bigNumber = 1234567890L;
    char initial = 'P';
    char name[] = "Philip";

    printf("My name is %s, initial %c.\n", name, initial);
    printf("I am %d years old.\n", age);
    printf("A big number: %li\n", bigNumber);

    return 0;
}

