# Class and Member Functions (Inside Definition)

## 📝 Important Theory

### 1. Class Definition
A class is a user-defined data type that binds data (attributes) and functions (methods) together. It is the building block of Object-Oriented Programming.

### 2. Access Specifiers
- **`private`**: Members are accessible only within the class. (Default)
- **`public`**: Members are accessible from outside the class.
- **`protected`**: Used in inheritance.

### 3. Defining Functions Inside Class
When a member function is defined *inside* the class body, it is automatically treated as an **inline function** (if it's small).
- This is suitable for small, simple functions.
- No scope resolution operator (`::`) is needed.

### 4. Objects
An object is an instance of a class. Memory is allocated when an object is created.

## 💡 Key Points
- Class names usually start with a capital letter (convention).
- The class definition must end with a semicolon `;`.
- Public functions are typically used to access private data (Encapsulation).
