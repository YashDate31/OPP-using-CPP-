# Friend Function

## Concept
A **friend function** is a function that is not a member of a class but has access to its **private** and **protected** members.

## Characteristics
- Declared inside the class with the `friend` keyword.
- Defined outside the class (without `ClassName::`).
- It is not called using an object (e.g., `obj.func()`), but usually takes objects as arguments.
- Can be a global function or a member function of another class.

## Syntax
```cpp
class ClassName {
    friend ReturnType FunctionName(Arguments);
};
```

## Use Cases
- Operator overloading.
- Accessing private data of two different classes.
