# Multiple Inheritance

## Concept
**Multiple Inheritance** is a feature where a class can inherit from more than one base class.

## Syntax
```cpp
class Derived : access Base1, access Base2 {
    // Body
};
```
Example: `class Child : public Father, public Mother { ... };`

## Ambiguity Problem
If two base classes have a function with the same name, the derived class will have ambiguity when calling that function.
- **Resolution**: Use scope resolution operator `::` to specify which base class function to call.
  - `obj.Base1::func();`
  - `obj.Base2::func();`
