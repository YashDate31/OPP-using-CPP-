# Input/Output and Expressions in C++

## 📝 Important Theory

### 1. Input/Output Streams
C++ uses the `<iostream>` library for input and output operations.
- **`cin` (Character Input)**: Used to take input from the standard input device (keyboard). It uses the extraction operator `>>`.
- **`cout` (Character Output)**: Used to display output to the standard output device (screen). It uses the insertion operator `<<`.
- **`endl`**: Used to insert a new line and flush the stream.

### 2. Expressions
An expression is a combination of variables, constants, and operators that evaluates to a value.
- **Arithmetic Expressions**: `a + b`, `x * y`
- **Relational Expressions**: `a > b`, `x == y`
- **Logical Expressions**: `a && b`, `!x`

### 3. Cascading I/O
Multiple input or output operations can be chained in a single statement.
- `cin >> a >> b;`
- `cout << "Sum: " << sum << endl;`

## 💡 Key Points
- Always include `<iostream>` and use `using namespace std;`.
- `cin` skips whitespace (spaces, tabs, newlines) by default.
- Data types must match the variable types being input/output.
