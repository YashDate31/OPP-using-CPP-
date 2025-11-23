# Pointers to Objects

## Concept
We can create pointers that point to objects of a class, just like pointers to primitive types.

## Syntax
```cpp
ClassName *ptr;
ptr = &object;
```

## Accessing Members
To access members using a pointer, we use the **arrow operator (`->`)**.
- `ptr->memberFunction();`
- Equivalent to `(*ptr).memberFunction();`

## Array of Objects with Pointers
We can also create an array of pointers to objects or use a pointer to iterate over an array of objects.
