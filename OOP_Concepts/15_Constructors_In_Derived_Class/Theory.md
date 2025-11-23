# Constructors in Derived Class

## Execution Order
When an object of a derived class is created:
1. The **Base Class** constructor is executed first.
2. The **Derived Class** constructor is executed next.

When the object is destroyed:
1. The **Derived Class** destructor is executed first.
2. The **Base Class** destructor is executed next.

## Passing Arguments to Base Constructor
If the base class constructor takes arguments, the derived class constructor must pass them explicitly using an initializer list.

## Syntax
```cpp
Derived(args) : Base(args) {
    // Body
}
```
