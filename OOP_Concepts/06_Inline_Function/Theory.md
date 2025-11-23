# Inline Functions

## Concept
An **inline function** is a function that is expanded in line when it is called. Instead of the normal function call mechanism (which involves jumping to the function code, saving registers, pushing arguments to stack, etc.), the compiler replaces the function call with the actual code of the function.

## Syntax
```cpp
inline ReturnType FunctionName(Parameters) {
    // Body
}
```

## Advantages
- Reduces function call overhead.
- Increases execution speed for small functions.

## Disadvantages
- Increases the size of the binary (code bloat) if the function is large or called many times.
- Compiler may ignore the `inline` request if the function is too complex (e.g., contains loops, recursion, or static variables).

## Note
- Member functions defined inside the class are implicitly inline.
