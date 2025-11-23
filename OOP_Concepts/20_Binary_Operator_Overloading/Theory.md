# Binary Operator Overloading

## Concept
**Binary Operators** operate on two operands (e.g., `+`, `-`, `*`, `/`, `==`).

## Implementation
- Can be overloaded using a **member function** or a **friend function**.
- If overloaded as a member function, it takes **one argument** (the right-hand operand). The left-hand operand is the calling object.
- If overloaded as a friend function, it takes **two arguments**.

## Syntax (Member Function)
```cpp
ReturnType operator op(const ClassName &obj) {
    // Body
}
```
Example: `Complex operator+(const Complex &c) { ... }`
