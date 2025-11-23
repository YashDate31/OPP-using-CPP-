# Function Overloading

## 📝 Important Theory

### 1. What is Function Overloading?
Function overloading is a feature in C++ where two or more functions can have the **same name** but different parameters.
It is a type of **Compile-time Polymorphism** (Static Binding).

### 2. How to Overload?
Functions can be overloaded by changing:
1.  **Number of arguments**: `add(int, int)` vs `add(int, int, int)`
2.  **Type of arguments**: `add(int, int)` vs `add(double, double)`
3.  **Order of arguments**: `func(int, double)` vs `func(double, int)`

### 3. Return Type
Changing *only* the return type does **not** allow function overloading. The parameter list must differ.

## 💡 Key Points
- Increases code readability.
- The compiler determines which function to call based on the arguments passed.
