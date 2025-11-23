# Scope, Memory Management, and Manipulators

## 1. Scope Resolution Operator (`::`)
- Used to access global variables when a local variable has the same name.
- Used to define class member functions outside the class.
- Used to access static members of a class.

## 2. Dynamic Memory Allocation
- **`new`**: Allocates memory on the heap at runtime.
  - Syntax: `Type* pointer = new Type;` or `Type* pointer = new Type[size];`
- **`delete`**: Deallocates memory to prevent memory leaks.
  - Syntax: `delete pointer;` or `delete[] pointer;`

## 3. I/O Manipulators
- Used to format output. Requires `<iomanip>` header.
- **`endl`**: Inserts a newline and flushes the stream.
- **`setw(n)`**: Sets the field width for the next output.
- **`setprecision(n)`**: Sets the decimal precision for floating-point numbers.
