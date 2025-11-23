# Constructors in C++

## 📝 Important Theory

### 1. What is a Constructor?
A constructor is a special member function that is automatically called when an object of a class is created.
- It has the **same name** as the class.
- It has **no return type** (not even void).
- It is used to initialize the object's data members.

### 2. Types of Constructors
1.  **Default Constructor**: Takes no arguments.
2.  **Parameterized Constructor**: Takes arguments to initialize data with specific values.
3.  **Copy Constructor**: Initializes an object using another object of the same class.

### 3. Constructor Overloading
A class can have multiple constructors with different parameter lists (polymorphism).

## 💡 Key Points
- If no constructor is defined, the compiler provides a default one.
- Constructors are usually declared in the `public` section.
- They are called once per object lifetime (at creation).
