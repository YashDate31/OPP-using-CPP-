# C++ Basics

## 1. Structure of a C++ Program
A C++ program typically consists of the following parts:
- **Header Files**: Included using `#include <header_name>` (e.g., `#include <iostream>`).
- **Namespace**: `using namespace std;` allows using standard library names without the `std::` prefix.
- **Main Function**: `int main() { ... }` is the entry point of the program.

## 2. Input and Output
- **`cout`**: Used for output (printing to console). Uses the insertion operator `<<`.
- **`cin`**: Used for input (reading from console). Uses the extraction operator `>>`.

## 3. Variables and Data Types
- **int**: Integers (e.g., 1, -5, 100).
- **float/double**: Floating-point numbers (e.g., 3.14, -0.01).
- **char**: Single characters (e.g., 'a', 'Z').
- **bool**: Boolean values (`true` or `false`).
- **string**: Sequence of characters (requires `<string>` header).

## 4. Compilation
- C++ code is compiled into machine code before execution.
- Common compiler: `g++`.
- Command: `g++ filename.cpp -o outputname`.
