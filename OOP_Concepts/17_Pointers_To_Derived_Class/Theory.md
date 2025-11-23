# Pointers to Derived Classes

## Concept
A pointer of a **Base Class** type can point to an object of a **Derived Class**.

## Behavior
- Even if the pointer points to a derived class object, it can **only access members inherited from the base class**.
- It **cannot** access members that are specific to the derived class (unless virtual functions are used).
- This is the basis for **Run-time Polymorphism**.

## Syntax
```cpp
Base *bptr;
Derived d;
bptr = &d;
```
