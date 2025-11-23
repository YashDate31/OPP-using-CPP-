# Defining Member Functions Outside the Class

In C++, class member functions can be defined in two ways:
1. **Inside the class definition**: Treated as inline functions by default.
2. **Outside the class definition**: Defined separately using the scope resolution operator `::`.

## Syntax for Outside Definition
```cpp
ReturnType ClassName::FunctionName(Parameters) {
    // Function body
}
```

## Benefits
- Keeps the class definition clean and readable.
- Separates interface (class declaration) from implementation (function definition).
- Useful for large functions.
