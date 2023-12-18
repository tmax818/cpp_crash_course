# chapter 3: REFERENCE TYPES

>Reference types store the memory addresses of objects. These types enable efficient programming, and many elegant design patterns feature them. In this chapter, I’ll discuss the two kinds of reference types: pointers and references. I’ll also discuss this, const, and auto along the way.

# Pointers

>Pointers are the fundamental mechanism used to refer to memory addresses. Pointers encode both the object’s address and the object’s type.

```cpp
int* my_ptr;
```

## Addressing Variables

>You can obtain the address of a variable by prepending the address-of operator (`&`). 

- [main.cpp](./code/main.cpp)


## Dereferencing Pointers


## The Member-of-Pointer Operator

>The member-of-pointer operator, or arrow operator (`->`), performs two simultaneous operations:
>- It dereferences a pointer.
>- It accesses a member of the pointed-to object.

## Pointers and Arrays

>Pointers share several characteristics with arrays. Pointers encode object location. Arrays encode the location and length of contiguous objects.

## Pointers Are Dangerous

### buffer overflows


## `void` Pointers and `std::byte` Pointers


## `nullptr` and Boolean Expressions

# References
# Usage of Pointers and References

Forward-Linked Lists: The Canonical Pointer-Based Data Structure
Employing References
this Pointers
const Correctness
const Member Variables
Member Initializer Lists

# auto Type Deduction

Initialization with auto
auto and Reference Types
auto and Code Refactorings

# Summary