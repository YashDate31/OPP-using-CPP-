# Virtual Base Class

## The Diamond Problem
Consider the following inheritance hierarchy:
```
      A
     / \
    B   C
     \ /
      D
```
- Class B inherits from A.
- Class C inherits from A.
- Class D inherits from both B and C.

If A has a data member `x`, D will inherit two copies of `x` (one via B and one via C). This causes ambiguity and memory waste.

## Solution: Virtual Inheritance
By declaring the base class A as **virtual** when inheriting in B and C, only **one copy** of A is maintained in D.

## Syntax
```cpp
class B : virtual public A { ... };
class C : virtual public A { ... };
class D : public B, public C { ... };
```
