# Pure Virtual Functions and Abstract Classes

## Pure Virtual Function
A **Pure Virtual Function** is a virtual function that has no definition in the base class. It is declared by assigning 0.

## Syntax
```cpp
virtual void functionName() = 0;
```

## Abstract Class
- A class containing at least one pure virtual function is called an **Abstract Class**.
- **Cannot instantiate** objects of an abstract class.
- Derived classes **must** implement the pure virtual function; otherwise, they also become abstract.
- Used to define interfaces.
