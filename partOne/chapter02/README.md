# chapter 2: TYPES

# Fundamental Types

## Integer Types

>Integer types store whole numbers: those that you can write without a fractional component.


## Floating-Point Types

>Floating-point types store approximations of real numbers

- [precision]

### floating-point literals

>Floating-point literals are [double] precision by default. 

### floating-point format specifiers

## Character Types

>Character types store human language data. The six character types are:

- `char`
- `char16_t`
- `char32_t`
- `signed char`
- `unsigned char`
- `wchar_t`

### Character literals

>A character literal is a single, constant character. Single quotation marks (' ') surround all characters.

### escape sequences
### unicode escape characters
### format specifiers

## Boolean Types

>Boolean types have two states: true and false. The sole Boolean type is bool. Integer types and the bool types convert readily: the true state converts to 1, and false converts to 0. Any non-zero integer converts to true, and 0 converts to false.

### Boolean literals
### format specifiers

>There is no format specifier for `bool`, but you can use the int format specifier `%d` within printf to yield a 1 for true and a 0 for false. 

### comparison operators

>[operators] are functions that perform computations on [operands].

### logical operators

>[Logical] operators evaluate Boolean logic on bool types. You characterize operators by how many operands they take. A unary operator takes a single operand, a binary operator takes two, a ternary operator takes three, and so on. You categorize operators further by describing the types of their operands.

## The `std::byte` Type

>System programmers sometimes work directly with raw memory, which is a collection of bits without a type. Employ the [`std::byte`] type, available in the <cstddef> header, in such situations. The [`std::byte`] type permits bitwise logical operations (which you’ll meet in [Chapter_7]) and little else.

## The `size_t` Type

### `sizeof`

>The unary operator sizeof takes a type operand and returns the size (in bytes) of that type. The sizeof operator always returns a size_t. For example, sizeof(float) returns the number of bytes of storage a float takes.

### format specifiers

>The usual format specifiers for a size_t are %zu for a decimal representation or %zx for a hexadecimal representation. 


## void

>You use void in special situations, such as the return type for functions that don’t return any value.

# Arrays

>Arrays are sequences of identically typed variables. Array types include the contained type and the number of contained elements. You weave this information together in the declaration syntax: the element type precedes square brackets enclosing the array’s size.

```cpp
int my_array[100];
```

## Array Initialization

```cpp
int array[] = {1,2,3,4};
```

## Accessing Array Elements

>You access array elements by using square brackets to enclose the desired index. 


## A Nickel Tour of for Loops


## C-Style Strings

# User-Defined Types

>User-defined types are types that the user can define. The three broad categories of user-defined types are these:

- [Enumerations] The simplest of the user-defined types. The values that an enumeration can take are restricted to a set of possible values. Enumerations are excellent for modeling categorical concepts.

- [Classes] More fully featured types that give you flexibility to pair data and functions. Classes that only contain data are called plain-old-data classes; you’ll learn about them in this section.

- [Unions] A boutique user-defined type. All members share the same memory location. Unions are dangerous and easy to misuse.

## Enumeration Types
## Plain-Old-Data Classes
## Unions

>You can think of unions as different views or interpretations of a block of memory. 

# Fully Featured C++ Classes

## Methods
## Access Controls
## Constructors
## Initialization
## The Destructor

# Summary