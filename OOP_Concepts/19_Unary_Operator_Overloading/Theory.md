# Unary Operator Overloading

## Concept
**Operator Overloading** allows us to redefine the behavior of operators for user-defined types (classes).
**Unary Operators** operate on a single operand (e.g., `++`, `--`, `-` (negation), `!`).

## Implementation
- Can be overloaded using a **member function** or a **friend function**.
- If overloaded as a member function, it takes **no arguments**.
- If overloaded as a friend function, it takes **one argument**.

## Syntax (Member Function)
```cpp
ReturnType operator op() {
    // Body
}
```
Example: `void operator-() { ... }`
