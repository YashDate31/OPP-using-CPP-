# Static Members

## 1. Static Data Members
- Declared with `static` keyword inside the class.
- Only **one copy** of the static member is created for the entire class and shared by all objects.
- Must be defined/initialized **outside** the class.
- Default value is 0.

## 2. Static Member Functions
- Declared with `static` keyword.
- Can only access **static data members** and other static member functions.
- Cannot access non-static members (because they don't have a `this` pointer).
- Can be called using the class name: `ClassName::FunctionName()`.

## Syntax
```cpp
class MyClass {
    static int count; // Declaration
public:
    static void showCount() { ... }
};

int MyClass::count = 0; // Definition
```
