# chapter 1: UP AND RUNNING

![](../../public/images/common.jpg)

We will make [console application] in our [development envirnment]

## The Structure of a Basic C++ Program

### Creating Your First C++ Source File

- [listing 1.1](../../resources/ccc-master/chapter_1/listing_1_1.cpp)
- [main.cpp](./code/main.cpp)

```cpp
#include <cstdio>

int main() {
  printf("Hello, world!");
  return 0;
}
```
### Main: A C++ Program’s Starting Point

>C++ programs have a single entry point called the main [function]
### Libraries: Pulling in External Code

## The Compiler Tool Chain

### Setting Up Your Development Environment
### Windows 10 and Later: Visual Studio
### macOS: Xcode
### Linux and GCC


### Text Editors

## Bootstrapping C++

>This section gives you just enough context to support the example code in the chapters to come. You’ll have questions about the details, and the coming chapters will answer them. Until then, don’t panic!

### The C++ Type System

>C++ is an object-oriented language. Objects are abstractions with state and behavior. 

>The collection of behaviors and states describing an object is called its **[type]**.

### Declaring Variables

```cpp
int the_answer;
```

### Initializing a Variable’s State

```cpp
int the_answer = 42;
```

### Conditional Statements

- [conditional statements]
- [listing 1.2](../../resources/ccc-master/chapter_1/listing_1_2.cpp)

### Functions

#### Example: A Step Function

#### Calling Functions


### printf Format Specifiers
### Revisiting step_function
### Comments

## Debugging
### Visual Studio
### Xcode
### GCC and Clang Debugging with GDB and LLDB



## Summary

FURTHER READING

The Pragmatic Programmer: From Journeyman to Master by Andrew Hunt and David Thomas (Addison-Wesley Professional, 2000)
The Art of Debugging with GDB, DDD, and Eclipse by Norman Matloff and Peter Jay Salzman (No Starch Press, 2008)
PGP & GPG: Email for the Practical Paranoid by Michael W. Lucas (No Starch Press, 2006)
The GNU Make Book by John Graham-Cumming (No Starch Press, 2015)

[behavior]: ../../GLOSSARY.md#behavior
[conditional statments]: ../../GLOSSARY.md#cond
[console application]: ../../GLOSSARY.md#cons
[development envirnment]: ../../GLOSSARY.md#dev
[entry point]: ../../GLOSSARY.md#entry
[function]: ../../GLOSSARY.md#function
[source file]: ../../GLOSSARY.md#source
[state]: ../../GLOSSARY.md#state
[type]: ../../GLOSSARY.md#type
