# Virtual Functions

## Concept
A **Virtual Function** is a member function in the base class that we expect to redefine in derived classes. It is declared using the `virtual` keyword.

## Purpose
- To achieve **Run-time Polymorphism** (Late Binding).
- Ensures that the correct function is called for an object, regardless of the type of pointer (or reference) used for the function call.

## Rules
- Must be a member of some class.
- Cannot be static.
- Accessed using object pointers.
- Prototype in base and derived class must be identical.

## Syntax
```cpp
virtual void display() { ... }
```
