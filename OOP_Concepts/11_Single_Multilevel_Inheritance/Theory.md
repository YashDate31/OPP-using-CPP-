# Inheritance (Single & Multilevel)

## 📝 Important Theory

### 1. What is Inheritance?
Inheritance is the capability of one class to acquire properties and characteristics from another class.
- **Base Class (Parent)**: The class whose properties are inherited.
- **Derived Class (Child)**: The class that inherits properties.

### 2. Single Inheritance
A derived class inherits from a **single** base class.
`Class A -> Class B`

### 3. Multilevel Inheritance
A derived class inherits from a base class, which itself is inherited from another base class.
`Class A -> Class B -> Class C`

### 4. Visibility Modes
- **Public**: Public members of base become public in derived.
- **Protected**: Public members of base become protected in derived.
- **Private**: Public members of base become private in derived.

## 💡 Key Points
- Promotes code reusability.
- `private` members of the base class are never directly accessible in the derived class.
