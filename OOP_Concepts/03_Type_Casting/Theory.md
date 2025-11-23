# Type Casting in C++

Type casting is the process of converting a value from one data type to another.

## 1. Implicit Type Casting (Automatic)
- Done automatically by the compiler.
- Usually happens when converting a smaller type to a larger type (e.g., `int` to `float`).
- Can lead to data loss if converting larger to smaller (e.g., `double` to `int`).

## 2. Explicit Type Casting
- Done manually by the programmer.

### A. C-Style Casting
- Syntax: `(type) expression`
- Example: `(int) 3.14`

### B. Function-Style Casting
- Syntax: `type(expression)`
- Example: `int(3.14)`

### C. C++ Named Casts
- **`static_cast<type>(expression)`**: Compile-time cast. Safer than C-style cast. Used for related types.
- **`dynamic_cast<type>(expression)`**: Runtime cast. Used for polymorphism (downcasting).
- **`const_cast<type>(expression)`**: Adds or removes `const` qualifier.
- **`reinterpret_cast<type>(expression)`**: Low-level cast (e.g., pointer to integer).
